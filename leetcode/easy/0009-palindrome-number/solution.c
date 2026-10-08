bool isPalindrome(int x) {
    int temp=x;
    int r;
    double rev=0;
    while(x>0)
    {
        r=x%10;
        rev=rev*10+r;
        x=x/10;
    }
    if(temp==rev) return true;
    else return false;
}