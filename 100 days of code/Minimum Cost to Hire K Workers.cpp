//  Minimum Cost to Hire K Workers  (Leetcode)


class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n = quality.size();
        vector<vector<double>> workers;
        
        for (int i = 0; i < n; i++) {
            workers.push_back({(double)wage[i]/quality[i], (double)quality[i]});
        }
        
        sort(workers.begin(), workers.end());
        
        double ans = DBL_MAX;
        double sumq = 0;
        priority_queue<double> pq;
        
        for (int i = 0; i < n; i++) {
            sumq += workers[i][1];
            pq.push(workers[i][1]);
            if (pq.size() > k) {
                sumq -= pq.top();
                pq.pop();
            }
            if (pq.size() == k) {
                ans = min(ans, sumq * workers[i][0]);
            }
        }
        
        return ans;
    }
};
