#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int one=0;
        while(n>0)
        {
            one++;
            n=n&(n-1);
        }
        return one;
    }
};
int main()
{
    int n,res;
    Solution obj;
    res=obj.hammingWeight(12);
    cout<<res;
    return 0;
}