#include<stdio.h>
void main()
{
    int a,b;
    char op;
printf("enter a,b values and operator");
    scanf("%d% %c",&a,&b, &op);
    switch(op)
    {
        case'+':("the addition is %d",a+b);
        break;
    case'-':("the subtraction is %d",a-b);
    break;
case'*':("the multiplication is %d",a*b);
break;
case'/':("the division is %d",a/b);
break;
case'%':("the modulus is %d",a%b);
break;
default:("invalid output");
break;
    }
}
