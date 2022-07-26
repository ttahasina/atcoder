#include <stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter your array size :\n");
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
    return 0;

}
