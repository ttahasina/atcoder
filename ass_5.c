#include <stdio.h>
int main()
{
    int arr1[4]= {1,2,3,4},arr2[4]= {2,5,7,8};
    int arr3[4];
    int i;
    for(i=0; i<4; i++)
    {
        arr3[i]=arr1[i]+arr2[i];
    }
    for(int i=0; i<4; i++)
    {
        printf("%d, ",arr3[i]);
    }
    printf("\n");

    return 0;
}

