//PREFIX SUM ARRAY
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={-2,0,3,-5,2,-1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pf[n];
    pf[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        pf[i]=pf[i-1]+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<pf[i]<<" ";
    }
    cout<<endl;
    int pairs;
    cout<<"Enter no of pairs u would compare: "<<endl;
    cin>>pairs;
    while(pairs)
    {
        int l,r,sum;
        cout<<"enter the left and right indecises: "<<endl;
        cin>>l>>r;
        cout<<" sum is: "<<pf[r]-pf[l-1]<<endl;
        pairs--;
    }
}