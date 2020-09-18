#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
    double a, b, c;
    while(cin >> a >> b>> c)
    {
        if(a >= b+c)
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if(a*a == b*b+c*c)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if(a*a> b*b + c*c)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if(a*a< b*b + c*c)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        else if(a==b && b==c && a==c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if(a==b && a!=c && b!=c || a==c && a!=b && c!=b || b==c && b!=a && c!=a)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }


}
