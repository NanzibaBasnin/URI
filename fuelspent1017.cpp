#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    float t, v;
    while(cin >> v >> t)
    {
        printf("%.3f\n", v*t/12);

    }
}
