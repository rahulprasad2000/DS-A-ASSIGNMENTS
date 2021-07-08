class Solution {
public:
   void rotateMat(vector<vector<int>>& mat)
    {
       int n=mat.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
       for(int i=0;i<n;i++)
       {
           reverse(mat[i].begin(),mat[i].end());
       }
 }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        for(int i=0;i<4;i++)
        {
            rotateMat(mat);
            if(mat==target)
                 return true;
        }
        return false;
    }
};