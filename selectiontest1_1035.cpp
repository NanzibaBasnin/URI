#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
     int a, b;
     unsigned int c, d;
    while(cin >> a >> b >> c >> d)
    {

        if(b>c && d>a && c+d>a+b && a%2==0){
                printf("Valores aceitos\n");}
        else
        {
            printf("Valores nao aceitos\n");
        }
    }
}
