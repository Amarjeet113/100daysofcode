//  Find All People With Secret  (LEETCODE)

class Solution {
public:
    #define pii pair<int,int>
    //Time Complexity O(MlogM + N) //M=No. of meetings , N=No. of Persons
    //Space Complexity O( N )
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        vector<int> ans;
        vector<pair<int,int>> adj[n];
        for(auto& x:meetings){
            int p1=x[0],p2=x[1],tm=x[2];
            adj[p1].push_back({p2,tm});
            adj[p2].push_back({p1,tm});
        }
        
        vector<int> knowing(n,0);
        priority_queue<pii,vector<pii>,greater<pii>> pq; //[T,P]
        
        pq.push({0,0});pq.push({0,firstPerson});
        while(!pq.empty()){
            auto T=pq.top();pq.pop();
            int currT=T.first,currP=T.second;
            
            if(knowing[currP]==1) continue;
            knowing[currP]=1;
            for(auto& x:adj[currP]){
                int p=x.first,tm=x.second;
              
                if(tm>=currT && knowing[p]==0){
                    pq.push({tm,p});
                }
            }
            
        }
        
        for(int i=0;i<n;i++){
            if(knowing[i]) ans.push_back(i);
        }
        return ans;
    }
};
