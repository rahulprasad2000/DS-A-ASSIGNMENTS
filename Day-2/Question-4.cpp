#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,1,1,3};
    map<int,int> mp;
    int i,j,c=0;
    for(i=0;i<v.size();i++)
    {
        for(j=i+1;j<v.size();j++)
        {
            if(v[i]==v[j] && i<j && i!=j)
            {
                c++;
            }
        }
    }
    cout<<"no of good pairs are: "<<c;
}