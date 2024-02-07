// short characters by frequency

class Solution {
public:
  std::string frequencySort(std::string s) {
        std::unordered_map<char, int> frequency;
        
        // Count the frequency of each character in the string
        for(const char& c: s) {
            frequency[c]++;
        }
        
        // Sort the characters in decreasing order based on frequency
        std::sort(s.begin(), s.end(), [&](const char& a, const char& b) {
            if (frequency[a] != frequency[b]) {
                return frequency[a] > frequency[b];
            }
            return a < b;
        });
        
        return s;
    }

};
