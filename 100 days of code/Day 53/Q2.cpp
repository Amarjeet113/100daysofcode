// First element to occur k times  (GFG)

class Solution{
    public:
    int firstElementKTime(int n, int k, int a[])
    {
        //1,7,4,3,4,,8,7
        //1=1
        //7=1
        //4=1,2
        //3=1
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
            if(m[a[i]]>=k)
            return a[i];
        }
        return -1;
    }
};
