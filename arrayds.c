#include<stdio.h>
int main()
{
    int i,n,a[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
