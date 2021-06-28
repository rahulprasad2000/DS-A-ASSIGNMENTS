//REMOVE DUPLICATES FROM ARRAY
#include<iostream>
using namespace std;
int rmdupli(int nums[],int n)
{
  if(n==0)
    return n;
 int i=0,j;
 for(j=1;j<n;j++)
 {
     if (nums[j] != nums[i])
       {
          i++;
         nums[i] = nums[j];
       }
 }
 return i+1;
}
int main()
{
    int n,i,k;
    cout<<"enter size of array: ";
    cin>>n;
    int nums[n];
    cout<<"enter the elements in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    k=rmdupli(nums,n);
    for(int i=0;i<k;i++)
     {
        cout<<nums[i]<<" ";
     }
}