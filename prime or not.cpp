using namespace std;
#include<iostream>
class prime
{

    int n,c,i;
    public:
    prime(int x)
    {
        n=x,c=0;
    }
    void check()
    {
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
                c++;

        }
        if(c==2)
            cout<<"prime";
        else

            cout<<"not";

    }
};
main()
{

    int n;
    cout<<"enter number";
    cin>>n;
    prime ob(n);
    ob.check();


}
