class Solution {
public:

    bool isValid(vector<int>& arr, int students, int maxAllowedPages){

        int stu = 1, pages = 0;

        for(int i = 0; i < arr.size(); i++){

            if(arr[i] > maxAllowedPages){
                return false;
            }

            if(pages + arr[i] <= maxAllowedPages){
                pages += arr[i];
            }
            else{
                stu++;
                pages = arr[i];
            }
        }

        return stu <= students;
    }

    int splitArray(vector<int>& arr, int students) {

        int sum = 0;

        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
        }

        int st = *max_element(arr.begin(), arr.end());
        int end = sum;

        int ans = -1;

        while(st <= end){

            int mid = st + (end - st) / 2;

            if(isValid(arr, students, mid)){
                ans = mid;
                end = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }

        return ans;
    }
};