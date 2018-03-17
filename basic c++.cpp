#include<iostream>
using namespace std;
#include<conio.h>
class mech
{
    public:
    int a,b,c;
    void getdata()
    {
        cout<<"enter the value";
        cin>>a>>b;
    }
    void sum()
    {
        c=a+b;
        cout<<"the sum is ";
        cout<<c;
    }
};
int  main()
{
    mech a;
    clrscr();
    a.getdata();
    a.sum();
    getch();
    return 0;
    
}
