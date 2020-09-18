#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    float a, b, c, x;
    while(cin >> a >> b >> c)
    {
        x=(2*a+3*b+5*c)/10;
        printf("MEDIA = %.1f\n", x);

    }
}

