#include<stdio.h>

int main()
{

    for (int i=1; ; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);

        if (x==y)
        {
            break;
        }
        else if(x<y)
        {
            printf("Crescente\n");
        }
        else if (x>y)
        {
            printf("Decrescente\n");
        }
    }

    return 0;
}
