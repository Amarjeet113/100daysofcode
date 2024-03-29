// integer to roman

class Solution
{
public:
    string intToRoman(int num)
    {
        string ans;
        string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int norm[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

        for (int i = 0; i < 13; i++)
        {
            while (num >= norm[i])
            {
                num = num - norm[i];
                ans = ans + sym[i];
            }
        }
        return ans;
    }
};
