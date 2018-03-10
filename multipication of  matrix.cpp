using namespace std;
#include<iostream>
class matrix
{

    int a[3][3],b[3][3],ans[3][3],i,j;
public:
    matrix()
    {

        cout<<"Enter 1st matrix"<<endl;
        for(i=0;i<=2;i++)

            for(j=0;j<=2;j++)
            cin>>a[i][j];
        cout<<"Enter 2st matrix"<<endl;
        for(i=0;i<=2;i++)
            for(j=0;j<=2;j++)
    cin>>b[i][j];
    }
    void multiplication()
    {

        cout<<"Multiplication"<<endl;

        for(i=0;i<=2;i++)
        {


            for(j=0;j<=2;j++)
            {


    ans[i][j]=0;
    for(int k=0;k<=2;k++)
        ans[i][j]+=a[i][k]*b[k][j];
    cout<<ans[i][j]<<"\t";

    }
    cout<<endl;
        }
    }
};
main()
{

    matrix ob=matrix();
    ob.multiplication();
    return 0;
}
