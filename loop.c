#include <stdio.h>
void add();
int sub();
int mul(int a, int b);
void div(int x, int y);

int main()
{
    int a,b,x,y;
    add();
    sub();
    mul(a, b);
    div(x, y);
    return 0;
}

void add()
{
    int p = 5;
    int q = 6;
    int sum = p + q;
    printf("The addition function adds: %d \n",sum);
}

int sub()
{
    int a = 10;
    int b = 5;
    int diff = a - b;
    printf("The sub function subtracts: %d \n",diff);
    return 0;
}

int mul(int a, int b)
{
    a = 5;
    b = 10;
    int multiplication = a * b;
    printf("The mul function multiplies %d\n",multiplication);
    return 0;
}

void div(int a, int b)
{
    a = 10;
    b = 5;
    float division = a/b;
    printf("The div function divides %f\n",division);
}

    