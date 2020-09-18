
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a, n, n100=0, n50=0, n10=0, n5=0, n1=0, n20=0, n2=0;
    while(cin >> n)
    {   printf("%d\n", n);
        if(n>=100)
        {
            n100=n/100;
            n=n%100;
        }
        if(n>=50)
        {
            n50=n/50;
            n=n%50;
        }
        if(n>=20)
        {
            n20=n/20;
            n=n%20;
        }
        if(n>=10)
        {
            n10=n/10;
            n=n%10;
        }
        if(n>=5)
        {
            n5=n/5;
            n=n%5;
        }
        if(n>=2)
        {
            n2=n/2;
            n=n%2;
        }
        if(n>=1)
        {
            n1=n/1;
            n=n%1;
        }
        //printf("%d\n", n);
        printf("%d nota(s) de R$ 100,00\n", n100);
        printf("%d nota(s) de R$ 50,00\n", n50);
        printf("%d nota(s) de R$ 20,00\n", n20);
        printf("%d nota(s) de R$ 10,00\n", n10);
        printf("%d nota(s) de R$ 5,00\n", n5);
        printf("%d nota(s) de R$ 2,00\n", n2);
        printf("%d nota(s) de R$ 1,00\n", n1);

    }
}
