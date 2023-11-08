#include <stdio.h>

int main()

{

      char ch[106];

      int i,j,ck=1;

      scanf("%s",ch);

      for(i=1;ch[i]!='\0';i++)

      {

            if(ch[i]>=97&&ch[i]<=122)

            {

                  ck=0;

                  break;

            }

      }

      if(ck==1)

      {

            if(ch[0]>=65&&ch[0]<=90)

            ch[0]=ch[0]+32;

            else

            ch[0]=ch[0]-32;

            for(j=1;ch[j]!='\0';j++)

            {

                  ch[j]=ch[j]+32;

            }

      }

      printf("%s\n",ch);

      return 0;

}
