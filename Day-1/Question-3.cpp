#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> v;
    int j=n/2;
    for(int i=0;i<n/2;i++)
    {
       v.push_back(arr[i]);
       v.push_back(arr[j]);
       j++;
    }
    vector<int> :: iterator itr;
    for(itr=v.begin();itr!=v.end();itr++)
    {
       cout<<*itr<<" ";
    }
  return 0;
}