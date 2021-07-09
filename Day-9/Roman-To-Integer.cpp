#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        map<char,int> myMap;
        myMap.insert(make_pair('I',1));
         myMap.insert(make_pair('V',5));
         myMap.insert(make_pair('X',10));
         myMap.insert(make_pair('L',50));
         myMap.insert(make_pair('C',100));
         myMap.insert(make_pair('D',500));
         myMap.insert(make_pair('M',1000));
        
        int len=s.length();
        int num,sum=0;
        for(int i=0;i<len;)
        {
            if(i==(len-1)||(myMap[s[i]]>=myMap[s[i+1]])){
                 num=myMap[s[i]];
                 i++;
            }
            else{
                num=myMap[s[i+1]]-myMap[s[i]];
                i+=2;
                    
            }
            sum=sum+num;
           
        }
        return sum;
    }
};

int main()
{
    string s;
    cout<<"Enter the roman numeral: "<<endl;
    cin>>s;
    Solution obj;
    int res=obj.romanToInt(s);
    cout<<"Roman To integer value is: "<<res;
    return 0;
}