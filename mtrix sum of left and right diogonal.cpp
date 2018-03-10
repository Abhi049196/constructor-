using namespace std;
#include<iostream>
class calc
{
    int n[3][3],i,j,ld=0,rd=1;
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
                if(i==j)
                    ld+=n[i][j];
                if(i+j==2)
                rd+=n[i][j];
            }
        }
        cout<<"sum of ld"<<" "<<ld<<endl;
        cout<<"product of rd"<<" "<<rd<<endl;
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

