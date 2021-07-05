class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m=image.size();
        int n=image[0].size();
        if(image[sr][sc]==newColor)
            return image;
        DFS(image,sr,sc,m,n,newColor,image[sr][sc]);
        return image;
    }
    private:
      void DFS(vector<vector<int>>& image,int r,int c,int m,int n,int color,int oldImg)
      {
          if(r>=m||c>=n||r<0||c<0||image[r][c]!=oldImg)
              return;
    
     image[r][c]=color;
    DFS(image,r+1,c,m,n,color,oldImg);
    DFS(image,r-1,c,m,n,color,oldImg);
    DFS(image,r,c+1,m,n,color,oldImg);
    DFS(image,r,c-1,m,n,color,oldImg);
  }  
};