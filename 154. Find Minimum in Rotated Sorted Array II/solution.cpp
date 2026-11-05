class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0, end = nums.size() - 1;

        while (st < end) {
            int mid = st + (end - st) / 2;

            // Minimum is in right part
            if (nums[mid] > nums[end]) {
                st = mid + 1;
            }

            // Minimum is in left part including mid
            else if (nums[mid] < nums[end]) {
                end = mid;
            }

            // Duplicate case
            else {
                end--;
            }
        }

        return nums[st];
    }
};