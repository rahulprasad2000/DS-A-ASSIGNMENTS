class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int i,j;
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<int>> vec(n,vector<int>(m));
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                vec[j][i]=matrix[i][j];
            }
        }
        return vec;
                
    }
};