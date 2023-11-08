#include<stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int k=1; k<=n; k++)
    {
        for(int j=0; j<n; j++)
        {
            if(k==arr[j])
            {
                printf("%d ",j+1);
            }
        }


    }
    return 0;
}
