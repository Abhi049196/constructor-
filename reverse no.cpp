using namespace std;
#include<iostream>
class rev
{

    int n,s;
public:
    rev(int x)
    {
         n=x;s=0;
    }
    void check()
    {
        int d,b;
        while(n!=0)
        {
            d=n%10;
            s=s*10+d;
            n/=10;

        }
        cout<<"rev"<<s;

    }
};

main()
{
    int n;
    cout<<"Enter no";
    cin>>n;
    rev ob(n);
    ob.check();

}
