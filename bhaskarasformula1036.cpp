#include<stdio.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a, b ,c, x, y, z;
    float r1, r2;
    while(cin >> a >> b >> c)
    {
        y=(b*b) - (4*a*c);


        if(a!=0 && y>0){
                 z=2*a;
        r1= (-b+ sqrt(y))/z;
        r2=(-b-sqrt(y))/z;
        printf("R1 = %.5f\n", r1);
        printf("R2 = %.5f\n", r2);}
        else{
            printf("Impossivel calcular\n");
        }

    }
}
