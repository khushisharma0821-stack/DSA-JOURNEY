#include <iostream>
using namespace std;
void funct(int arr[], int low, int high, int target)
{
    if(low>high)
    {
       cout<<"element not found";
       return;
    }
     int mid=(low+high)/2;
    if(target==arr[mid])
    {
        cout<<"element is at index"<<mid;
        return;
    }
    else if (target>arr[mid])
    {
      return  funct(arr,mid+1,high,target);
    }
    else
    {
        return funct(arr,low,mid-1,target);
    }
}
int main()
{
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
    int target;
    cout<<"target is:";
    cin>>target;
     funct(arr,0,n-1,target);
    
    return 0;
}
