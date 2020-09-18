#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    string name;
    double a, b;
    while(cin >> name >> a >> b)
    {
        printf("TOTAL = R$ %.2lf\n", b*0.15+a);
    }
}
