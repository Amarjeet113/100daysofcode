// LONGEST COMMON PREFIX

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string x= "";
      int n = strs.size();
      sort(strs.begin(),strs.end());
      string first= strs[0];
      string last=strs[n-1];
      for(int i =0;i<first.size();i++){
          if(first[i]!=last[i]){
              return x ;
          }
          x+=first[i];
      }
      return x ;


      
     
    }
};
