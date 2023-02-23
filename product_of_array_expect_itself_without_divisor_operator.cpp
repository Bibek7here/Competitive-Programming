#include<iostream>
using namespace std;
int* productExceptSelf(int* nums, int numsSize) {
    int *ret=(int*)malloc(numsSize*sizeof(int));
    ret[0]=1;
    for(int i=1;i<numsSize;i++){
        ret[i]=nums[i-1]*ret[i-1];
    }
    int temp=1;
    for(int i=numsSize-1;i>=0;i--){
        ret[i]*=temp;
        temp*=nums[i];
    }
    return ret;
}
int main()
{
    int n;
    cout<<"How many numbers?"<<endl;
    cin>>n;
    int nums[n];
    for(int i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    int *result=productExceptSelf(nums,n);
    for(int i=0; i<n; i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}