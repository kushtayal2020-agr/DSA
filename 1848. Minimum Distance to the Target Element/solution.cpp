class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int unit ;
        int minunit = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            if(target == nums[i]){
                unit = i;
                minunit = min(minunit ,abs(unit - start));
            }
        }

        return minunit;
    }
};