#include<bits/stdc++.h>

using namespace std;
void bubblesorts(int arr[],int n,int brr[],int a)
{
    for (int i=0; i<n-1; i++)
    {
        int flag=0;
        for(int j=0; j<n-1-i; j++)
        {

            if (arr[j]<arr[j+1] )
            {
                if(brr[j]>brr[j+1])
                {
                    int temp1=brr[j];
                    brr[j]=brr[j+1];
                    brr[j+1]=temp1;
                }
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                flag=1;
            }
        }

        if(flag==0)
            break;
    }
}
int main()
{
    int t;

    scanf("%d",&t);

    while(t--)
    {
        int n;

        scanf("%d",&n);

        int arr[n],brr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            brr[i]=i+1;
        }

        bubblesorts(arr,n,brr,n);
       for(int i=0; i<n-1; i++)
        {
            printf("%d ",arr[i]);

        }
        printf("%d\n",arr[n-1]);

    }
    return 0;
}
