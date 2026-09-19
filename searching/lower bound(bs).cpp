#include <iostream>
using namespace std;
//n is size of array 
int funct(int arr[],int x, int n)
{
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=x)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
  return ans;
}
int main()
{
     cout<<"size of array:"<<endl;
    int n;
    cin>>n;
   
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
     cout <<"number to be searched:";
    int x;
    cin>>x;
   
   
     int result=funct(arr,x,n);
     cout<<result;
    
    return 0;
}
