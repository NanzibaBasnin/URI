#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int arr[3];
    int i, j;
    for(i=0; i<3; i++)
    {
        cin >> arr[i];
    }
    for(i=2; i>=0; i--)
    {    int temp;
        for(j=0; j<i; j++)
        {
            if(arr[j]> arr[j+1] )
            {
                arr[j]=temp;
                arr[j]= arr[j+1];
                temp = arr[j+1];
            }
        }
       printf("%d\n", arr[j]);

    }
}
