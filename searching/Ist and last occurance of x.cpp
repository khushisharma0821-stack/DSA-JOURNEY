// ex:-arr[8]={2,8,8,8,8,8,11,13}
// Ist and last occurance of element 8 is 1 and 5
  
#include <iostream>
using namespace std;
int firstoccurrance(int arr[],int n ,int x ){
    int low =0;
    int high =n-1;
    int first=-1;

    while (low<=high){
        int mid=(low +high)/2;
        if (arr[mid]==x)
        {
            first=mid;
            high=mid-1;
        }
        else if (arr[mid]<x)
        {
            low=mid +1;
        }
        else
        {
          high=mid-1;
        }
    }
    return first;

}

int lastoccurrance(int arr[],int n,int x){
    int  low=0;
    int high=n-1;
    int last=-1;
    while (low<=high){
        int mid=(low +high)/2;
        if (arr[mid]==x)
        {
            last=mid;
            low=mid+1;
        }
        else if (arr[mid]<x)
        {
            low=mid +1;
        }
        else
        {
          high=mid-1;
        }
     }
     return last;
}
int main() 
{
     cout<<"size of array:"<<endl;
    int n;
    cin>>n;
   cout<<"elements of array:"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array is:"<<endl;
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"number of which first and last occurance is to be found:"<<endl;
    int x;
    cin>>x;
    int first=firstoccurrance(arr,n,x);
    int last=lastoccurrance(arr,n,x);
    cout<<"the first and last occurance of number :"<<x<<endl<<first<<"and"<<last;

}
