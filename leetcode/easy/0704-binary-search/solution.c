#include<stdio.h>
int search(int* nums, int numsSize, int target) {
    int low=0,high=numsSize-1,mid=0,found=0;
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(nums[mid]==target)
        {
            found=1;
            break;
        }
        if(nums[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(found==1) return mid;
    else return -1;
}