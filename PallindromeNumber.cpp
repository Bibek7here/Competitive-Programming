#include<iostream>
using namespace std;
int PallindromeOrNot(int num)
{
    int temp,rev=0;
    temp=num;
    if(temp<0)
    {
        return 0;
    }
    while(temp!=0)
    {
        rev=rev*10+temp%10;
        temp/=10;
    }
    if(num==rev)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int num,check;
    cout<<"Enter a number: ";
    cin>>num;
    if(PallindromeOrNot(num))
    {
        cout<<"True";
    }
    else 
    {
        cout<<"False";
    }
    return 0;
}