#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void reverse(char s[],int i,int len)
{
    int m,n;
    n=len-(i+1);

    if(i<n)
    {
        m=s[i];
        s[i]=s[n];
        s[n]=m;

        reverse(s,++i,len);
    }
}

int main()
{
    char s[100]="mengjie";
    reverse(s,0,strlen(s));

    printf("%s\n",s);

    return 0;
}