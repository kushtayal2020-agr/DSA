class Solution {
public:

    bool dfs(vector<int>& arr, int start, vector<bool>& visited){

        // out of bounds
        if(start < 0 || start >= arr.size()){
            return false;
        }

        // already visited
        if(visited[start]){
            return false;
        }

        // found 0
        if(arr[start] == 0){
            return true;
        }

        visited[start] = true;

        // jump right or left
        return dfs(arr, start + arr[start], visited) ||
               dfs(arr, start - arr[start], visited);
    }

    bool canReach(vector<int>& arr, int start) {

        vector<bool> visited(arr.size(), false);

        return dfs(arr, start, visited);
    }
};