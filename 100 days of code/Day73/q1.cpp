//  	First Missing Positive(Leetcode)

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x=1;
         for (int i=0; i<nums.size();i++){
            if(nums[i]==x){
                x++;
            }

        }
        return x;
        
    }
};
