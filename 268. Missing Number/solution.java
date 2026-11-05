class Solution {
    public int missingNumber(int[] nums) {
        int sum = nums.length;
        int nsum = 0;
        for(int i = 0 ; i < nums.length ; i++){
            nsum += nums[i];
            sum += i;

        }
        int ans;
        ans = sum - nsum;
        return ans;
        
    }
}