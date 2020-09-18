#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    double p=3.14159, r,A;
    while(cin >> r)
    {
        A= p*r*r;
        printf("A=%.4lf\n", A);

    }
}
