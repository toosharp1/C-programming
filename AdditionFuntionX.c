#include<stdio.h>

int Addition(int NO1,int  NO2)
{
    int Ans = 0;
    Ans = NO1 + NO2;
    return Ans;
}

int main()

{
    int ret = 0, A = 20, B = 30;
    ret = Addition (A,B);
    printf("Addition is: %d\n",ret);
    return 0;
}

