#include<iostream>
#include<string>
using namespace std;

//Base Class
class student{
    protected:
    int rollNo;
    string name;
    public:
        void getstudent()
        {
            cout<<"Enter Roll Number: ";
            cin>>rollNo;

            cin.ignore();
            cout<<"Enter Name: ";
            getline(cin, name);
        }

        void displaystudent()
        {
            cout<<"\nRoll NUmber: " << rollNo << endl;
            cout<<"Name: "<<name<<endl;
        }
};

class exam : public student
{
    protected:
        float marks[6];
    public:
        void getMarks()
        {
            cout<<"\nEnter marks of 6 subjects:\n";
            for (int i = 0; i < 6; i++){
                cout<<"subject"<< i + 1 << ": ";
                cin>>marks[i];
            }
        }
        void displayMarks()
        {
            cout<<"\nMarks:\n";

            for (int i = 0; i < 6; i ++){
                cout<<"subject"<<i + 1<<": "<<marks[i]<<endl;
            }
        }
};

class Result : public exam
{
    private:
        float total;
    public:
        void calculate()
        {
            total = 0;
            for (int i = 0; i<6; i++)
            {
                total += marks[i];
            }
        }
        void displayResult()
        {
            displaystudent();
            displayMarks();
            cout << "\nTotal marks = "<< total << endl;
        }
};
int main()
{
    Result student;
    cout << "===== STUDENT RESULT =====\n";
    student.getstudent();
    student.getMarks();
    student.calculate();

    cout<<"\n===== RESULT =====";
    student.displayResult();
    return 0;
}