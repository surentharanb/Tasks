#include<iostream>
using namespace std;
class student
{
    private:
    int batcode;
    char bname[20];
    int innings,notout,runs;
    float batavg;
    float calavg()
    {
        batavg =runs/(innings-notout);
        return batavg;
    }
    public:
    void readdata()
    {
        cout<<"Enter batsman code.:";
        cin>>batcode;
        cout<<"Enter batsman name:";
        cin>>bname;
        cout<<"Enter innings:";
        cin>>innings;
        cout<<"Enter notout:";
        cin>>notout;
        cout<<"Enter runs:";
        cin>>runs;
        calavg();
      
    }
    void displaydata()
    {
        cout<<" batsman code.:"<<batcode<<"\nbatsman Name:"<<bname<<"\ninnings:"<<innings<<"\nnotout:"<<notout<<"\nruns:"<<runs<<"\nbataverage:"<<batavg;
    }
};
int main()
{
   student a; 
    a.readdata();
    a.displaydata();
    return 0;
}
