#include<iostream>
using namespace std;
int main()
{
    int n,mul=1,count=0;
    cout<<"How many number?"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of an aray: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]!=0)
        {
            mul*=arr[i];
        }
        else 
        {
            count++;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            if(count>0)
            {
                arr[i]=0;
            }
            else
            {
                arr[i]=mul/arr[i];
            }
        }
        else 
        {
            if(count>1)
            {
                arr[i]=0;
            }
            else
            {
                arr[i]=mul;
            }
        }
        cout<<arr[i]<<endl;
    }
    return 0;
}