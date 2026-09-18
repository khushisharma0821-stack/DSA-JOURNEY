#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int low =0;
    int high =n-1;
    int target;
    cout<<"target is:";
    cin>>target;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==target)
        {
            cout<<"element is at index :"<<mid<<endl;
        cout<<"the element is:"<<arr[mid];
        return 0;
        }
        else if (target>arr[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    cout<<"element not found";
    return -1;
    
    return 0;
}
