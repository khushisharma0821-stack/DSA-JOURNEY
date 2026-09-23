ex:-arr[]={3,3,4,1,2,3}
  search element 1 index=3;
timecomplexity O(logbase2 n)

#include <iostream>
using namespace std;
int searchinrotatedsortedarray(int arr[],int n,int key)
{
    

int low=0;
int high =n-1;

while(low<=high)
{
    int mid=(low+high)/2;
    if(arr[mid]==key)return mid;
    
    //duplicates element
    if(arr[low]==arr[mid]&&arr[high]==arr[mid])
    {
        low++;
        high--;
        continue;
    }
    if (arr[low]<=arr[mid]){
        if (arr[low]<=key && key<arr[mid])
        {
            high=mid-1;
        }
        else
    {
            low=mid+1;
    }
    }
    else{
        if(arr[mid]<key&&key<=arr[high])
        {
            low=mid+1;
            
        }
        else{
            high=mid-1;
        }
    }
}
return -1;
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
    cout<<"number to be searched in sorted rotated array "<<endl;
    int key;
    cin>>key;
    int result=searchinrotatedsortedarray(arr, n, key);
    cout<<"index of searching element is "<<result<<endl;
}
