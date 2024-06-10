class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int matsize=matrix.size();
        for(int i=0;i<matsize-1;i++){
            for(int j=i+1;j<matsize;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int x=0;x<matsize;x++){
            reverse(matrix[x].begin(),matrix[x].end());
        }
    }
};