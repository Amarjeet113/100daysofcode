// REMOVE DUPLICATES FROM SORTED ARRAY


class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        if (arr.size()==0)
        return 0;
        int i = 0;
        for (int j = 1;j<arr.size();j++){
            if (arr[i]!=arr[j]){
                i++;
                arr[i] = arr[j];
            }
        }
        return i+1;
       
        
        
    }
};
