int missingNumber(int* nums, int numsSize) {
    int n,i;
    int ans;
    int s=0;
    for(i=0;i<numsSize;i++)
    {
        s+=nums[i];
    }
    n=numsSize*(numsSize+1)/2;
    ans=n-s;
    return ans;
    
}
    