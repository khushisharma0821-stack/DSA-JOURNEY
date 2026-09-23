ex:-arr={14,15,16,11,12,13}
  minimum elemnt is 11
// array must be unique  no duplicates

#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;
int minelement(int arr[],int n)
{
    int low=0;
    int high =n-1;
    int ans =INT_MAX;
    
    while(low<=high)
    {
        
        int mid=(low+high)/2;
        if(arr[low]<=arr[mid])
        {
            ans=min(ans,arr[low]);
            low=mid+1;
        }
        else
        {
            ans=min(ans,arr[mid]);
        high=mid-1;
            
        }
    }
    return ans;
}
int main()
{
 cout<<"size of the array:"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"elements in the array to be inserted"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    int result=minelement(arr, n);
    cout<<"minimum element is "<<result<<endl;
}
