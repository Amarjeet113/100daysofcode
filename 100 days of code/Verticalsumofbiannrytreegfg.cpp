// vertical sum (gfg)

class solution{
   public:
   map<int,int>ans;
   void preorder (Node*node, int level){
     if(node!= NULL){
       mp[level]+=node->data;
       preorder(node->left, level-1);
       preorder(node->right, level+1);
       return;
   }
}
vector<int> verticalSum(Node*root){
  preorder(root,0);
  vector<int> ans;
  for(auto it:mp){
    ans.push_back(it.second);
  }
  return ans;
}
};
