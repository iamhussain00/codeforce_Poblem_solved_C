#include<stdio.h>


int main()
{

    int n;
    scanf("%d",&n);

    int p,q,sum=0;


    scanf("%d",&p);
    int X[p];
    for(int i=0; i<p; i++)
    {
        scanf("%d",&X[i]);
        sum+=X[i];

    }
    scanf("%d",&q);
    int Y[q];


    for(int i=0; i<q; i++)
    {
        scanf("%d",&Y[i]);

         int flag=0;
        for(int j=0; j<p; j++)
        {
            if(Y[i]==X[j])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            sum+=Y[i];

        }
    }



l

    int M=(n*(n+1))/2;
    if(sum==M){
        printf("I become the guy.\n");
    }
    else{
        printf("Oh, my keyboard!\n");
    }
    return 0;
}


