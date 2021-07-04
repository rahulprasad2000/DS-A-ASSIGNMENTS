#include<bits/stdc++.h>
using namespace std;
int main()
{
     vector<int> v;
     vector<vector<int>> vec
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            v.push_back(vec[i][j]);
        }   
    }
    int k;
    cout<<"enter no of rotations u want to make: "<<endl;
    cin>>k;
    int temp=0;
    int n=v.size();
    k=k%n;
    while(k)
        {
            temp=v[n-1];
            for(int i=n-1;i>=1;i--)
            {
                v[i]=v[i-1];
            }
            v[0]=temp;
            k--;
        }

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}