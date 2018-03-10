using namespace std;
#include<iostream>
class palin
{
    int n;
public:
    palin(int x)
    {
        n=x;
    }
    void check()
    {
        int s=0,d,b;
        b=n;
        while(b!=0)
        {
            d=b%10;
            s=s*10+d;
            b/=10;
        }
        if(s==n)

            cout<<"palindrome";
            else
                cout<<"not";



    }
};
main()
{

    int n;
    cout<<"Enter number to check palindrome or not";
    cin>>n;
    palin ob(n);
    ob.check();

}
