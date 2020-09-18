#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    double r, p= 3.14159;
    while(cin >> r)
    {
        printf("VOLUME = %.3lf\n", (4/3.0)*p*r*r*r);
    }
}
