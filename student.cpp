#include <iostream>
using namespace std;

class student
{
    private:
        int roll, day, month, year, marks;

    public:
        // void accept()
        // {
        //     cout<<"\nEnter the Roll no:";
        //     cin>>roll;
        //     cout<<"\nEnter the  Date of Birth:";
        //     cin>>day>>month>>year;
        //     cout<<"\nEnter the Marks:";
        //     cin>>marks;
        // }   
        
        student()
        {
            roll =0;
            day = month = year = marks = 0;
        }

        student(int r, int d, int m, int y, int mks)
        {
            roll = r;
            day = d;
            month = m;
            year = y;
            marks = mks;
        }

        void display()
        {
            cout<<"Roll no:"<<roll<<"\n"<<"DoB:"<<day<<"/"<<month<<"/"<<year<<"\n"<<"marks:"<<marks<<endl;
        }
};

int main()
{
    student s[10];
    int r, d, m, y, mks;

    for (int i = 0; i < 10 ; i++)
    {
        cout<<"\nEnter the Roll no:";
            cin>>r;
            cout<<"\nEnter the  Date of Birth:";
            cin>>d>>m>>y;
            cout<<"\nEnter the Marks:";
            cin>>mks;

            s[i] = student(r, d, m, y, mks);
    }

        cout<<"=======================Data of 10 Students========================";

    for (int i = 0; i < 10; i++)
    {
        s[i].display();
    }
    return 0;
    //s1.display();
}





