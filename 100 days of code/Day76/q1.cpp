// 881. Boats To Save People  (leetcode)


class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        // fisrt we have to sort our array
        sort(people.begin(),people.end());
        // then iniailise boat = 0;
        int boats=0;
        // after that we use two pointer method
        int left=0, right=people.size()-1;
        while(left<=right){
            if(people[left]+people[right]<=limit){
                left++;
            }
            right--;
            boats++;
        }
        return boats;

    }
};
