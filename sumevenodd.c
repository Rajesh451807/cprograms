#include <stdio.h>
void main()
{
    int i,n,sumeven=0,sumodd=0;
    printf("enter n value");
    scanf("%d",&n);
    sumeven=0,sumodd=0;
for(i=1;i<=n;++i)
    {
if(i%2==0);
    sumeven=sumeven+i;
    }
    else
    {
        sumodd=sumodd+i;
        
    }
printf(" the differance is %d",(sumeven-sumodd));
    
}
