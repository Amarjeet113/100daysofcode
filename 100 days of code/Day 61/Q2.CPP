//  Remove all duplicates from a given string (GFG)


class Solution{
public:
	string removeDuplicates(string str) {
        for (int i = 0; i < str.length(); ++i) {
            char current = str[i];
            for (int j = i + 1; j < str.length(); ++j) {
                if (str[j] == current) {
                    str.erase(j, 1);
                    --j; // Adjust index after deletion
                }
            }
        }
        return str;
    }
};
