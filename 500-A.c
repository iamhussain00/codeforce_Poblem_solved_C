
#include<stdio.h>

int main()
{
    int n,t;

    scanf("%d %d",&n,&t);

    int arr[n-1],arr2[n];

    for(int i=0; i<n-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    arr2[0]=1;
    int j=1,k=0;

    while(k<n)
    {
        arr2[j]=arr[k]+(k+1);
        j++;
        k=0;
        k+=(arr2[j-1]-1);
    }

    int flag=0;
    for(int i=0; i<j-1; i++)
    {
        if(t==arr2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
