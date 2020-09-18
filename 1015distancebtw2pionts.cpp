
#include<cmath>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    double x1, y1, x2, y2, d;
    while(cin >> x1 >> y1 >> x2 >> y2)
    {
        d= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        printf("%.4lf\n", d);
    }
}
