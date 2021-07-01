#include<bits/stdc++.h>
using namespace std;
int main()
{
   int i;
   int arr1[]={2,1,0};
   string arr2[]={"a","b","c"};
   string arr3[3];
   for(i=0;i<3;i++)
   {
       arr3[i]=arr2[arr1[i]];
   }
   for(i=0;i<3;i++)
   {
       cout<<arr3[i]<<" ";
   }
}