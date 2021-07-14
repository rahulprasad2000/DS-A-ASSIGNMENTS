#include<bits/stdc++.h>
using namespace std;
int AnytoDec(int n,int b){
    int ans=0;
    int power=1;
    while(n!=0){
        int r=n%10;
        n=n/10;
        // ans+=r*pow(10,power);
        ans+=r*power;
        power*=b;
    }
    return ans;
}
int main()
{
    int n,b;
    cin>>n>>b;
    cout<<AnytoDec(n,b)<<endl;
    return 0;
}