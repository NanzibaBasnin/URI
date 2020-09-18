#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a, b ,c;
    while(cin >> a >> b >> c)
    {
        if(a>b)
        {
            if(a>c)
            {
                printf("%d eh o maior\n", a);
            }
            else
            {
                printf("%d eh o maior\n", c);
            }
        }
        else
        {
            if(b>c)
            {
                printf("%d eh o maior\n", b);

            }
            else
            {
                printf("%d eh o maior\n", c);
            }

        }

    }
}
