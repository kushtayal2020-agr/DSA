class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int>hash;
        int total = 0;
        hash[total] = 1;
        int low = 0, ans = 0;
        while(low < nums.size()){
            total+=nums[low];
            if(hash.count(total - k))ans+=hash[total - k];
            hash[total]++;
            low++;
        }
        return ans;
    }
};