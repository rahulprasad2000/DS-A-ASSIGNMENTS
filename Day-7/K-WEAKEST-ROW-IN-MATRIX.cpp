class Solution {
public:
    static bool sortbysec(pair<int,int> &a,pair<int,int> &b)
    {
        if(a.second==b.second)
            return a.first<b.first;
        return a.second<b.second;
    }
              
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> arr;
        for(int i=0;i<mat.size();i++)
        {
            int count=0;
            for(int j=0;j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                    count++;
                else
                    break;
            }
            arr.push_back(make_pair(i,count));
        }
        sort(arr.begin(),arr.end(), sortbysec);
        vector<int> ans;
       for(int i=0;i<k;i++)
        {
         ans.push_back(arr[i].first);
        }
     return ans;
    }
    
    
};