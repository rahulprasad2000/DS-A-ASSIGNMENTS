#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1={1,2,3,4,2,1};
    vector<int> v2={2,4,3};
    vector<int> v3;
    int i=0,j=0,m,n;
    m=v1.size();
    n=v2.size();
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    while(i<m && j<n)
    {
        if(v1[i]<v2[j])
            i++;
        else if(v1[i]>v2[j])
            j++;
        else{
           v3.push_back(v1[i]);
           i++;
           j++;
        }
    }
  cout<<"The intersection elements are: ";  
 for(int i=0;i<v3.size();i++)
 {
  cout<<v3[i]<<" ";
 }
}