#include<bits/stdc++.h>
using namespace std;
    string longestCommonSuffix(vector<string>& strs) {
       for(int i=0;i<strs.size();i++)
       {
           reverse(strs[i].begin(),strs[i].end());
       }
      int count=0,min=1000;
        string str;
        for(int i=0;i<strs.size();i++){
            int len=strs[i].length();
            if(len<min){
                min=len;
                str=strs[i];
            }
        }
        string r;
        for(int i=0;i<min;i++)
        {
            for(int j=0;j<strs.size();j++)
            {
                if(strs[j][i]!=str[i])
                {
                    r=str.substr(0,count);
                    return r;
                }
            }
            count++;
        }
            
         return r;
    }


int main()
{
    vector<string> vect;
    string s;
    for(int i=0;i<3;i++)
    {
        cin>>s;
        vect.push_back(s);
    }   
    string res=longestCommonSuffix(vect);
    reverse(res.begin(),res.end());
    cout<<res;
    return 0;
}