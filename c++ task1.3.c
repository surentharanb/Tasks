#include<iostream>
using namespace std;
#include<conio.h>
class test
{
public:
    int tcode;
    char des[200];
    int nocan,nocen;
    void shedule()
    {
        cout<<"enter the test code,describtion,no of candidate";
        cin>>tcode>>des>>nocan;
    }
    void calcntr()
    {
      nocen=nocan/(100+1);
    }
    void disptest()
    {
        cout<<"test code:"<<tcode;
        cout<<endl<<"describtion:"<<des;
        cout<<endl<<"number of candidate :"<<nocan;
        cout<<endl<<"number of centers"<<nocen;
    }
};
int main()
{
    test a;
    clrscr();
    a.shedule();
    a.calcntr();
    a.disptest();
    getch();
    return 0;
}

