#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    float a, b, c, t;
    while(cin >>a >>b >> c)
    {
        if(a+b>c && a+c>b && b+c>a)
        {
            printf("Perimetro = %.1f\n", a+b+c);
        }
        else
        {
            t= (a+b)/2*c;
            printf("Area = %.1f\n", t);
        }
    }
}
