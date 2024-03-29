// Reach a given score (GFG)


class Solution
{
    public:
    long long int count(long long int n)
    {
    	long long int table[n+1],i;
    	memset(table, 0, sizeof(table));
    	table[0]=1;                 // If 0 sum is required number of ways is 1.
    	for(i=3;i<=n;i++)
    		table[i]+=table[i-3];   // For every points (3,5,10) you need to add the number of ways to reach that sum 
    	for(i=5;i<=n;i++)           // before adding these points.
    		table[i]+=table[i-5];
    	for(i=10;i<=n;i++)
    		table[i]+=table[i-10];
    	return table[n];
    }
};
