using namespace std;
#include<iostream>
class add
{
    int a[3][3],b[3][3],c[3][3],i,j;
public:
    add(int x[3][3],int y[3][3])
    {
        for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
           a[i][j]=x[i][j];
           b[i][j]=y[i][j];
            }
        }
    }
        void check()
        {
            cout<<"addition of matrix"<<endl;
             for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                cout<<c[i][j]<<" ";


        }
        cout<<endl;
    }
        }
};
main()
{
    int a[3][3],b[3][3],i,j;
    cout<<"Enter 1st 3x3 matrix"<<endl;
     for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                cin>>a[i][j];
            }
        }
        cout<<"Enter 2nd 3x3 matrix"<<endl;
         for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                cin>>b[i][j];
            }

        }
        add ob(a,b);
        ob.check();

}

