#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int cp1, np1, cp2, np2;
    float pp1, pp2;
    while(cin >> cp1 >> np1 >> pp1 >> cp2 >> np2 >> pp2)
    {
        printf("VALOR A PAGAR: R$ %.2f\n", np1*pp1+np2*pp2);
    }
}
