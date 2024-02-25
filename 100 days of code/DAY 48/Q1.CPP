// Greatest Common Divisor Traversal  (LEETCODE).

class Solution {
public:
    vector<int>par;
    int find(int a){
        return par[a]=(par[a]==a)? a:find(par[a]);
    }
    void Union(int a,int b){
        a=find(a);
        b=find(b);
        if(a!=b) par[b]=a;
    }
    bool canTraverseAllPairs(vector<int>& nums) {
        if(nums.size()==1) return true;
        int m=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==1) m++;
        }
        if(m==nums.size()) return false;
        par.resize(100001);
        for(int i =0;i<=100000;i++) par[i]=i;
        for(int i =0;i<nums.size();i++) {
            for(int j=2;j*j<=nums[i];j++) {
                if(nums[i]%j==0){
                    Union(nums[i],j);
                    Union(nums[i],nums[i]/j);
                }
            }
        }
        int count=0;
        for(int i =0;i<nums.size();i++) {
            if(find(nums[i])==find(nums[0])){
                count++;
            }
        }
        return count==nums.size();
    }
};
