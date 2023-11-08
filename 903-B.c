#include<stdio.h>


int main()
{
    int t;
    scanf("%d",&t);

    while(t--){
        int x,y,z;
        int a,b=10,c=10;
        scanf("%d %d %d",&x,&y,&z);
        if(x<=y && x<=z && y%x==0 && z%x==0){
            a=x;
            b=y/a;
            c=z/a;
        }
        else if(x>=y && y<=z && z%y==0 && x%y==0){
            a=y;
            b=x/a;
            c=z/a;
        }
        else if(x>=z && y>=z && y%z==0 && x%z==0){
                a=z;
                b=x/a;
                c=y/a;

        }

        if(b+c<=5){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }

    }
    return 0;
}

