class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int row_min=INT_MAX,col_max=INT_MIN;
        vector<int> vec1,vec2, res;
        for(int i=0;i<m;i++){
           for(int j=0;j<n;j++)
               row_min=min(row_min,matrix[i][j]);
            vec1.push_back(row_min);
            row_min=INT_MAX;
        }
        for(int j=0;j<n;j++){
            for(int i=0;i<m;i++)
                col_max=max(col_max,matrix[i][j]);
            vec2.push_back(col_max);
            col_max=INT_MIN;
        }
         for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if( matrix[i][j] == vec1[i] && matrix[i][j] ==vec2[j]) 
                    res.push_back(matrix[i][j]);
            }
         }
        return res;
    }
};