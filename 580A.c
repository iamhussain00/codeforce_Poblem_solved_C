#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int  arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    int x=arr[0],count=1,maxlen=1;
    for(int i=1; i<=n-1; i++)
    {
        if(arr[i]>=x)
        {
            x=arr[i];
            count++;
            if(i==n-1 ){
            if(count>maxlen){
                maxlen=count;
                break;
            }
            else{
                break;
            }
        }
        }
        else
        {

            if(count>maxlen)
            {
                maxlen=count;
            }
            x=arr[i];
            count=1;
        }
    }

    printf("%d\n",maxlen);

}

