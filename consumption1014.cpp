#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a;
    float y;
    while(cin >> a >> y)
    {
        printf("%.3f km/l\n", a/y);
    }
}
