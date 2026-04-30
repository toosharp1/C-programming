#include<stdio.h>

int Addition(int NO1, int NO2)
{
    int Result=0;
    Result=NO1+NO2;
    return Result;
}
int main()
{
    int i=0, j=0, ans=0;
    printf("Enter First Number: \n");
    scanf("%d",&i);
    printf("Enter Second Number: \n");
    scanf("%d",&j);
    ans=Addition(i,j);
    printf("Addition is: %d",ans);
    return 0;
}