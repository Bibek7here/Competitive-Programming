#include<iostream>
using namespace std;
void ReadData(int *arr,int length)
{
    for(int i=0 ;i<length; i++)
    {
        cin>>arr[i];
    }
}
int peakIndex(int *arr,int length)
{
    int start=0,end=length-1,mid=(start+end)/2;
    while(start<end)
    {
        if(arr[mid]>arr[mid+1])
        {
            if(arr[mid]>=arr[mid-1])
            {
                return mid;
            }
            end=mid;
        }
        else
        {
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return mid;
}
int main()
{
    int arr_length;
    cin>>arr_length;
    int arr[arr_length];
    ReadData(arr,arr_length);
    int index=peakIndex(arr,arr_length);
    cout<<index;
    return 0;
}