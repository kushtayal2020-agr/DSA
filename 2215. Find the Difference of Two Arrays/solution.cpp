class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());

        vector<int> ans0;
        vector<int> ans1;

        // Traverse s1
        for(auto it = s1.begin(); it != s1.end(); it++){

            int x = *it;

            if(s2.find(x) == s2.end()){

                ans0.push_back(x);
            }
        }

        // Traverse s2
        for(auto it = s2.begin(); it != s2.end(); it++){

            int x = *it;

            if(s1.find(x) == s1.end()){

                ans1.push_back(x);
            }
        }

        return {ans0, ans1};
    }
};