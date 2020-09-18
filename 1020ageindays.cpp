#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int y, m, d, r, n;
    while(cin >> n)
    {
        y=n/365;
        r=n%365;
        m=r/30;
        d=r%30;
        printf("%d ano(s)\n", y);
        printf("%d mes(es)\n", m);
        printf("%d dia(s)\n", d);
    }
}
