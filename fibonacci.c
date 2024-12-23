// Online C compiler to run C program online
#include <stdio.h>
void main()
{
    int i,a,b,n;
    a=0;
    b=1;
    
    printf("enter the values:");
    scanf("%d",&n);
    {
    printf("%d,%d",&a&b);
    }
    for(i=2;i<n;i++);
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        
    }
}
