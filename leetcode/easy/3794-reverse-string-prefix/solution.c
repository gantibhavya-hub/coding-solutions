char* reversePrefix(char* s, int k) {
  int i;
    char temp;
    for(int i=0;i<k/2;i++)
    {
        temp=s[i];
        s[i]=s[k-i-1];
        s[k-i-1]=temp;
    }
    return s;
}