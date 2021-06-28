//REMOVE DUPLICATE KEY FROM ARRAY
#include<iostream>
using namespace std;
int rmoccur(int arr[],int n,int k)
{
    if(n==0)
      return n;

   int i=0,j;
   for(j=0;j<n;j++)
   {
       if(arr[j]!=k)
       {
          arr[i]=arr[j];
          i++;
       }
   }
   return i;
}
int main()
{
    int n,i,l,key;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key ";
    cin>>key;
    l=rmoccur(arr,n,key);
    for(int i=0;i<l;i++)
     {
        cout<<arr[i]<<" ";
     }
}