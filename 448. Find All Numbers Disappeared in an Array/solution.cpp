class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int>s;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
                s.insert(nums[i]);
        }
        for(int j = 1 ; j <= n ; j++){
            if(s.find(j) == s.end()){
                ans.push_back(j);
            }
        }

        return ans;
    }
};