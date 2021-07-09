#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
       return haystack.find(needle);
        
    }
};
int main()
{
    Solution obj;
    int res=obj.strStr("kya bantai kaisi bolrali public machaey kya","kaisi");
    cout<<"Index os kaisi is: "<<res;
    return(0);

}