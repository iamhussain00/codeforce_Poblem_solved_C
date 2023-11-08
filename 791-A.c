#include<stdio.h>
#include<math.h>

int main()
{

    int a,b;
    scanf("%d %d",&a,&b);



    for(int i=1;;i++)
    { double x=pow(3,i);
      double y=pow(2,i);
        if(x*a>y*b)
        {
            printf("%d\n",i);
            break;
        }
    }


    return 0;

}
