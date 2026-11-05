class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans;
        unordered_set<int>a;
        for(int i=0 ; i<n ; i++){
            if(a.find(nums[i]) != a.end()){

                ans = nums[i];
            }
            a.insert(nums[i]);
        }

        return ans;
    }
};