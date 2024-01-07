// Largest Substring Between Two Equal Characters

class Solution
{
public:
    int maxLengthBetweenEqualCharacters(string s)
    {
        int n = s.length();
        int maxLength = -1;
        vector<int> firstIndex(26, -1);

        for (int i = 0; i < n; i++)
        {
            int index = s[i] - 'a';
            if (firstIndex[index] == -1)
            {
                firstIndex[index] = i;
            }
            else
            {
                maxLength = max(maxLength, i - firstIndex[index] - 1);
            }
        }

        return maxLength;
    }
};