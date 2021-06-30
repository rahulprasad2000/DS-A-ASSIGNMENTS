#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={2,3,5,1,3};
    int max=*max_element(v.begin(),v.end());
    int extrof=3;
    for(int i=0;i<v.size();i++)
    {
        if(extrof+v[i]>=max)
        {
            cout<<"TRUE"<<endl;
        }
        else
        {
            cout<<"FALSE"<<endl;
        }
    }
    return 0;
}