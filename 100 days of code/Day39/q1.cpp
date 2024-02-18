//  Least Number of Unique Integers after K Removals(LEETCODE)

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
    unordered_map<int, int> frequency;
    for (int num : arr) {
        frequency[num]++;
    }
    
    vector<pair<int, int>> sortedFrequency;
    for (auto it = frequency.begin(); it != frequency.end(); it++) {
        sortedFrequency.push_back(make_pair(it->second, it->first));
    }
    sort(sortedFrequency.begin(), sortedFrequency.end());
    
    int count = 0;
    for (auto it = sortedFrequency.begin(); it != sortedFrequency.end(); it++) {
        int freq = it->first;
        if (k >= freq) {
            k -= freq;
        } else {
            count++;
        }
    }
    
    return count;
}

};
