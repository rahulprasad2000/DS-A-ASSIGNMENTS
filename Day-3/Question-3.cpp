#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={1,2,3,4};
    int i,freq,val;
    vector<int> v;
    for(i=0;i<arr.size()-1;i++)
    {
        freq=arr[2*i];
        val=arr[2*i+1];
        while(freq)
        {
          v.push_back(val);
          freq--;
        }
    }
    for(i=0;i<v.size();i++)
      cout<<v[i]<<" ";

}