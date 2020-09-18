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
    cout << arr[i];
     int temp;
      for(i=2; i>=0; i--)
      {
          for(j=0; j<i; j++)
          {
              if(arr[j]> arr[j+1])
              {
                  temp= arr[j];
                  arr[j] = arr[j+1];
                  temp = arr[j+1];
              }
          }
        //printf("%d\n", arr[j]);
      }
           for(i=0; i<3; i++)
           {
               printf("%d\n",arr[i]);
           }


}

