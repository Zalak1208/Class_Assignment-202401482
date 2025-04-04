class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>temp (nums.begin() , nums.end());
        int ans = 0;
        for(int num : temp){
            if(temp.find(num-1) == temp.end()){
                int current = num ;
                int streak = 1;
                while(temp.find(current + 1) != temp.end()){
                    current++;
                    streak++;
                }
                ans = max ( ans , streak);
            }
        }
        return ans;
    }
};
