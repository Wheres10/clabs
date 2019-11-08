#include<stdio.h>
int main()
{
    unsigned int bit,b;
    long long int max;
    bit=1;
    b=0;
    max=1;
    while(bit!=0)
    {
        bit=bit<<1;
        b=b+1;
 max=max*2;   }
 max=max-1;
      printf("%d\n",b);
      printf("%lld\n",max);
}