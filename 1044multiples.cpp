#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    while(cin>> a>> b)
    {
        if(b%a==0 || a%b==0)
        {
            printf("Sao Multiplos\n");
        }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }
}
