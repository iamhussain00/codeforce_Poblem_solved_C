#include<stdio.h>
#include<math.h>
int flag(long long y)
{
    for(int i=3; i<=(y/2+1); i+=2)
    {
        if(y%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);

    long long arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]==1)
        {
            printf("NO\n");
        }
        else if(arr[i]==4 || arr[i]==25)
        {
            printf("YES\n");
        }
        else if(arr[i]%10==1 || arr[i]%10==9)
        {

           long long y=sqrt(arr[i]);

            if(y*y==arr[i])
            {
                int r=flag(y);
                if(r==1)
                    printf("YES\n");
                else
                    printf("NO\n");

            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
