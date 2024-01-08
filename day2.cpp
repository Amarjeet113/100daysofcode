// palindrome number

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int long long count = 0;
        int duplicate = x;
        while (x > 0)
        {
            int lastdigit = x % 10;
            count = (count * 10) + lastdigit;
            x = x / 10;
        }
        return (duplicate == count);
    }
};