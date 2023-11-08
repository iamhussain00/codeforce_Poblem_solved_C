#include<stdio.h>

int main()
{

    for (int i=1; ; i++)
    {
        int x;
        scanf("%d",&x);

        if (x==2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }

    }

    return 0;
}

