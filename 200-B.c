#include<stdio.h>

int main()
{
    int n,sum=0;

    scanf("%d",&n);

    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    double x=(((double)sum)/(n*100))*100;

    printf("%.12lf\n",x);

    return 0;

}
