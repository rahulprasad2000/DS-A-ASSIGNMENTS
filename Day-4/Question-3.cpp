#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec1={1,1,4,2,1,3};
    vector<int> vec2=vec1;
    sort(vec2.begin(),vec2.end());
    int c=0;
    for(int i=0;i<vec1.size();i++)
    {
        if(vec1[i]!=vec2[i])
        {
            c++;
        }
    }
    cout<<c;
 
}