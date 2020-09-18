#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    float c;

    while(cin >> a >> b >> c)
    {
        printf("NUMBER = %d\n", a);
        printf("SALARY = U$ %.2f\n", b*c);
    }
}
