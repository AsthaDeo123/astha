#include<stdio.h>
void input(int *a,int *b)
{
    printf("enter the first number");
    scanf("%d",a);
    printf("enter the second number");
    scanf("%d",b);
}

int commute(int a,int b)
{
int c;
c=a+b;
return c;
}
void output(int a,int b ,int c)
{

    printf("%d+%d=%d",a,b,c);

}
void main()

{
    int a,b,c=0;
    input(a,b);
    c= commute(a,b);
    output(a,b,c);
    
}


