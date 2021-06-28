
#include<stdio.h>
#include<stdlib.h>
int main()
{
        int arr[]={1,2,3,4,5,5};
        int size=*(&arr+1)-arr;
        /* &arr -> points the address of same array (ex:1000)
          &arr+1 -> points the address after end of the array
          *(&arr+1) -> points the last element array in array
          *(&arr+1)-arr ->subtract with last element address with first element address */

        printf("Array size in bytes %d\n",size*4);
}
