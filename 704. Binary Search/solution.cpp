class Solution {
public:
int binarySearch(vector<int>& nums, int target,int st,int end) {
    if(st <= end){
                int mid = st + (end - st) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid] > target){
                return binarySearch(nums,target,st,mid-1);
            }
            else{

                return binarySearch(nums,target,mid+1,end);
            }
}
return -1;}
    int search(vector<int>& arr, int tar) {
       
        return binarySearch(arr,tar,0,arr.size()-1);
        }
    
};