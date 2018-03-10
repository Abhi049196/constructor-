using namespace std;
#include<iostream>
class table
{
    int n,i;
public:
    table(int x)
    {
        n=x;
    }
    void check()
    {
        int i,n;
        for(i=1;i<=10;i++)
        {
            cout<<n*i;
        }

    }
};
main()
{
int n;
    cout<<"Enter no";
    cin>>n;
    table ob(n);
    ob.check();

}
