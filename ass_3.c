#include <stdio.h>
int main()
{
    int size,i, j;
    printf("Enter your array size :\n");
    scanf("%d",&size);
    int reverse[size];
    for(i=0; i<size; i++)
    {
        scanf("%d",&reverse[i]);
    }
    for(i = 0, j = size - 1; i < size / 2; i++, j--)
    {
        int temp = reverse[i];
        reverse[i] = reverse[j];
        reverse[j] = temp;
    }
    for (i = 0; i < size; i++)
    {
        printf("%d ", reverse[i]);
    }
    printf("\n");
    return 0;


}
