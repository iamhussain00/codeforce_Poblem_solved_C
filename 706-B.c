#include<stdio.h>
void bubblesort(int arr[],int n)
{
    for(int i=1; i<=n-1; i++)
    {
        int flag=0;
        for(int j=0; j<=n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}
/*int numberofshops(int arr[],int n,int m)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=m)
        {
            count++;
        }


    }
    return count;

}*/
int upper_bound(int arr[], int n, int x) {
    int l = 0, r = n;
    while (l < r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] > x) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    return l;
}
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n+1];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);




    int q;
    scanf("%d",&q);


    for(int i=0; i<q; i++)
    {
        int m;
        scanf("%d",&m);
        //printf("%d\n",numberofshops(arr,n,m));
        printf("%d\n",upper_bound(arr,n,m));
    }



    return 0;
}
