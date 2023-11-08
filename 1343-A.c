#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {


        int n,x;

        scanf("%d",&n);
        int i;
        for(i=2;;i++)
        {
             double r=2.00,k=(double)i;
             double result=pow(r,k);
            int S=((int)result)-1;
            if(n%S==0)
            {
                x=n/S;
                break;
            }
        }

        printf("%d\n",x);

    }
    return 0;
}
