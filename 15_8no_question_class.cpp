#include <iostream>
#include <string>
using namespace std;

// Base class
class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayStudent()
    {
        cout << "\nRoll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class from Student
class Exam : public Student
{
protected:
    float marks[6];

public:
    void getMarks()
    {
        cout << "\nEnter marks of 6 subjects:\n";

        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void displayMarks()
    {
        cout << "\nMarks:\n";

        for (int i = 0; i < 6; i++)
        {
            cout << "Subject " << i + 1 << ": "
                 << marks[i] << endl;
        }
    }
};

// Derived class from Exam
class Result : public Exam
{
private:
    float total;

public:
    void calculate()
    {
        total = 0;

        for (int i = 0; i < 6; i++)
        {
            total += marks[i];
        }
    }

    void displayResult()
    {
        displayStudent();
        displayMarks();

        cout << "\nTotal Marks = " << total << endl;
    }
};

int main()
{
    Result student;

    cout << "===== STUDENT RESULT =====\n";

    student.getStudent();
    student.getMarks();
    student.calculate();

    cout << "\n===== RESULT =====";
    student.displayResult();

    return 0;
}