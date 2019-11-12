#include<stdio.h>
#include<stdio.h>
int main()
{
   int num=0 ;
   printf("Enter an integer");
   scant("%d",&num);
   printf("%d has %d 1 in the Binary sequence\n",num,bitcount(num));
   system("pause");
   return 0; 
}
int bitcount(int num)
{
    int t=0;
    int i=0;
    for(i=0;i<32;i++)
    {
        if((num&1)==1)
        t++;
        num=(num>>1);
    }
    return t;
}

