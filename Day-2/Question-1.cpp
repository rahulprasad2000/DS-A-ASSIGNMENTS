#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> vec;
    int n,i,j,value,sum;
    cout<<"Enter no of rows and columns for the matrix: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        vector<int> temp;
        for(j=0;j<n;j++)
        {
           cin>>value;
           temp.push_back(value);
        }
        vec.push_back(temp);
    }
    int max=0,cost;
    for(i=0;i<n;i++)
    {
       sum=0;
       for(j=0;j<n;j++)
       {
           sum+=vec[i][j];
       }
       if(sum>max)
       {
          max=sum;
          cost=i+1;
       }
    }
    cout<<"Richest person having total cost is "<<max<<" and customer id is "<<cost;
    return 0;
    
    
}