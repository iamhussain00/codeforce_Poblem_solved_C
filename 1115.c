#include<stdio.h>

int main()
{

    for (int i=1; ; i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);

        if (x==0 || y==0)
        {
            break;
        }
        else if(x>0 && y>0)
        {
            printf("primeiro\n");
        }
        else if(x<0 && y>0)
        {
            printf("segundo\n");
        }
        else if(x<0 && y<0)
        {
            printf("terceiro\n");
        }
        else if(x>0 && y<20)
        {
            printf("quarto\n");
        }

    }

    return 0;
}

