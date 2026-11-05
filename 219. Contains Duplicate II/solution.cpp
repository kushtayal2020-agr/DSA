class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>ms;
        int i;
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(ms.find(nums[i]) != ms.end()){
                if(i - ms[nums[i]] <= k){
                    return true;
                }
            }
            ms[nums[i]] = i;
        }
        
    return false;}
};