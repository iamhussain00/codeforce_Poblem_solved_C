#include <bits/stdc++.h>
#include <limits>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int  n,m,k;
        cin>>n>>m>>k;

        int a[n];

        int b[m];

        int min_a=numeric_limits<int>::max();
        int min_b=numeric_limits<int>::max();
        int max_a=-1,max_b=-1;

        int a1,a2,b1,b2;

        int s=0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(min_a>a[i])
            {
                min_a=a[i];
            }
            if(max_a<a[i])
            {
                max_a=a[i];
            }
            s+=a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];

            if(min_b>b[i])
            {
                min_b=b[i];
            }
            if(max_b<b[i])
            {
                max_b=b[i];
            }
        }





        for(int i=1;i<=k;i++)
        {

            a1=min_a;
            a2=max_a;
            b1=min_b;
            b2=max_b;


            if(i%2==1){
                if(a1<b2)
                {
                     s=s-a1+b2;

                     int temp;

                     temp=a1;
                     a1=b2;
                     b2=temp;

                     min_a=min(a1,a2);
                     max_a=max(a1,a2);
                     min_b=min(b1,b2);
                     max_b=max(b1,b2);

                }
            }

            else
            {
                if(b1<a2)
                {
                     s=s-a2+b1;

                     int temp;

                     temp=a2;
                     a2=b1;
                     b1=temp;

                     min_a=min(a1,a2);
                     max_a=max(a1,a2);
                     min_b=min(b1,b2);
                     max_b=max(b1,b2);

                }
            }
        }

        cout<<s<<endl;

    }

    return 0;
}
