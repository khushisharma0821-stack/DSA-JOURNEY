SEARCH IN ROTATED SORTED ARRAY
ex:-arr[]={7,8,9,10,11,1,2,3,4,5,6}
number to be searched in sorted rotated array is : 11
index=4

#include <iostream>
using namespace std;
int rotatedsortedarraysearch  (int arr[],int n,int x)
{
    int low =0;
    int high =n-1;
    while(low<=high)
    {
        int mid =(low+high)/2;
        if (arr[mid]==x)
        {
            return mid;
        }
        if(arr[low]<=arr[mid])
        {
            if(arr[low]<=x&&x<=arr[mid])
            {
                high=mid-1;
                
            }
            else
            {
                low=mid+1;
            }
        }
        else
        {
            if(arr[mid]<=x&& x<arr[high])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            
        }
        
    }
    return -1;
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
     cout <<"target number  in rotated sorted array:";
    int x;
    cin>>x;
   
   
     int result=rotatedsortedarraysearch(arr,x,n);
     cout<<result;
}
