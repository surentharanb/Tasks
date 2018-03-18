#include<iostream>
using namespace std;
class student
{
    private:
    int admno;
    char sname[20];
    float eng,math,science;
    float total,avg;
    float ctotal()
    {
        total=eng+math+science;
        avg=total/3;
        return total;
    }
    public:
    void Takedata()
    {
        cout<<"Enter admn no.:";
        cin>>admno;
        cout<<"Enter student name:";
        cin>>sname;
        cout<<"Enter English marks:";
        cin>>eng;
        cout<<"Enter Math marks:";
        cin>>math;
        cout<<"Enter Science marks:";
        cin>>science;
        ctotal();
    }
    void Showdata()
    {
        cout<<"Admission no.:"<<admno<<"\nStudent Name:"<<sname<<"\nEnglish:"<<eng<<"\nMath:"<<math<<"\nScience:"<<science<<"\nTotal:"<<total;
    
        cout<<"\naverage"<<avg;
    }
}a;
int main()
{
    a.Takedata();
    a.Showdata();
    return 0;
}
