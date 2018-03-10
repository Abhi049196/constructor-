using namespace std;
#include<iostream>
class calc
{
    int n[3][3],s[3][3],t[3][3],i,j;
public:
    calc(int x[3][3],int y[3][3])
    {
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
           n[i][j]=x[i][j];
           s[i][j]=y[i][j];
            }
        }
    }
        void check()
        {

             for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
            t[j][i]=n[i][j];
            }
        }
             for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
        s[i][j]=-1*t[i][j];



        cout<<s[i][j];
            }
            cout<<endl;
        }

        }
};
main()
{

    int n[3][3],s[3][3],i,j;
        cout<<"Enter matrix";
         for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
        cin>>n[i][j];
            }cout<<endl;
        }
        calc ob(n,s);
        ob.check();
}


