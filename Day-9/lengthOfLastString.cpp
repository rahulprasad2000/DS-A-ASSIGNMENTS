#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=s.length()-1;
        int count=0;
        for(int i=len;i>=0;i--)
        {
            if(s[i]!=' ')
               count++;
            if(s[i]==' '&& count>0)
                return count;
        }
        return count;
    }
};
int main()
{
    string s;
    cout<<"enter the string: "<<endl;
    getline(cin,s);
    Solution obj;
    cout<<"Last string length is: "<<obj.lengthOfLastWord(s);
    return 0;
}