class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int>s;
        int n1 = nums1.size();
        for(int i = 0 ; i < n1 ; i++){
            s.insert(nums1[i]);
        }
        int n2 = nums2.size();
        for(int j = 0 ; j < n2 ; j++){
            if(s.find(nums2[j]) != s.end()){
                ans.push_back(nums2[j]);
                s.erase(nums2[j]);
            }

        }
   return ans; }
};