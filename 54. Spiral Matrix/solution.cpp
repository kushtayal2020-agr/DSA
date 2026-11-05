class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int tr = matrix.size() , tc = matrix[0].size();
        int srow = 0 , scol = 0 , erow = tr - 1 , ecol = tc - 1;  
        vector<int> ans;

        while(srow <= erow && scol <= ecol){
            //top
            for(int j = scol ; j <= ecol ; j++){

                ans.push_back(matrix[srow][j]);
            } 
            //right
            for( int i = srow + 1 ; i <= erow ; i++){
                ans.push_back(matrix[i][ecol]);
            }
            //down
            for(int j = ecol - 1 ; j >= scol ; j--){
                if(srow == erow){
                    break;
                }
                ans.push_back(matrix[erow][j]);
            }
            //left
            for(int i = erow - 1 ; i >= srow + 1 ; i--){
                if(scol == ecol){
                    break;
                }
                ans.push_back(matrix[i][scol]);
            }

            srow++  ; erow--;
            scol++  ; ecol--;
        }

        return ans; 
    }
};