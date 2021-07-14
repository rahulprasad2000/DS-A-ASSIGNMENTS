#include<bits/stdc++.h>
using namespace std;
int DectoAny(int n,int b){
    int ans=0;
    int power=1;
    while(n!=0){
        int r=n%b;
        n=n/b;
        // ans+=r*pow(10,power);
        ans+=r*power;
        power*=10;
    }
    return ans;
}
int main()
{
    int n,b;
    cin>>n>>b;
    cout<<DectoAny(n,b)<<endl;
    return 0;
}