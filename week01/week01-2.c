// C語言
# include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    b=a/50;
    c=a%50/5;
    d=a%5/1;
    printf("%d=50*%d+5*%d+1*%d\n",a,b,c,d);
}