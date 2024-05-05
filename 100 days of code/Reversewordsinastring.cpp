class solution{
     public:
     string reverseWords(string s){
       // using two pointer method
      int n= s.size(), i=0;
      // initailse string ans with blank space
       string ans = "";
    while(i<n){
    // initialse string temp with balnlk space 
     string temp = "";
     while(s[i] == " " && i<n){
        i++;
     }
      while(s[i] != " " && i<n{
        temp += s[i];
        i++;
    }
       if(temp.size()>0){
         if(ans.size()=0){
           ans = temp;
         }
         else{
           ans = temp+""+ans;
         }
       }
     }
return ans;
}
};
