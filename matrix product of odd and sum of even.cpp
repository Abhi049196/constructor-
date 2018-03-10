using namespace std;
#include<iostream>
class calc
{
    int n[3][3],i,j,s=0,p=1;
public:
    calc(int x[3][3])
    {
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
           n[i][j]=x[i][j];

           }
            }
    }
            void check()
            {

        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                if(n[i][j]%2==0)
                    s+=n[i][j];
                else
                    p*=n[i][j];
            }
        }
        cout<<"sum"<<s<<endl;
        cout<<"product"<<p<<endl;
            }


};
main()
{

    int n[3][3],i,j;
    cout<<"Enter 3x3 matrix"<<endl;
    for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                cin>>n[i][j];
            }
        }
                calc ob(n);
                ob.check();

}
