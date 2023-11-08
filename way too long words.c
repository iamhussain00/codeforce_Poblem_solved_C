#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        char x[100];

        fgets(x,100,stdin);
        x[strcspn(x, "\n")] = '\0';
        int X=strlen(x);

        if(X<=10)
        {
            puts(x);

        }
        else if(X>10)
        {
            int y=X-2;
            printf("%c%d%c\n",x[0],y,x[X-1]);
        }


    }

    return 0;
}

