#include <iostream>
#include <iomanip>
using namespace std;

class Person
{
    char name[64];
    int age;
    char address[64];
    float salary;

public:
    // Constructor
    Person(const char n[], int a, const char addr[], float s)
    {
        int i;

        for (i = 0; n[i] != '\0'; i++)
            name[i] = n[i];
        name[i] = '\0';

        age = a;

        for (i = 0; addr[i] != '\0'; i++)
            address[i] = addr[i];
        address[i] = '\0';

        salary = s;
    }

    void salarySlip()
    {
        float basic, hra, da, gross;

        basic = salary * 0.50;
        hra = salary * 0.20;
        da = salary * 0.10;
        gross = basic + hra + da;

        cout << "\n========== SALARY SLIP ==========\n";
        cout << "Name    : " << name << endl;
        cout << "Age     : " << age << endl;
        cout << "Address : " << address << endl;

        cout << fixed << setprecision(2);
        cout << "Basic Salary : Rs. " << basic << endl;
        cout << "HRA          : Rs. " << hra << endl;
        cout << "DA           : Rs. " << da << endl;
        cout << "---------------------------------\n";
        cout << "Gross Salary : Rs. " << gross << endl;
        cout << "=================================\n";
    }
};

int main()
{
    Person p("Rahul Kumar", 20, "Kolkata", 30000);

    p.salarySlip();

    return 0;
}