#include <iostream>
#include <cstring>
using namespace std;

class Person
{
    char name[64];
    int age;
    char address[64];
    float salary;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> ws;
        cin.getline(name, 64);

        cout << "Enter age: ";
        cin >> age;

        cout << "Enter address: ";
        cin >> ws;
        cin.getline(address, 64);

        cout << "Enter salary: ";
        cin >> salary;
    }

    int getAge()
    {
        return age;
    }

    const char* getName()
    {
        return name;
    }

    inline static int youngest(Person p[], int n)
    {
        int minAge = p[0].age;

        for (int i = 1; i < n; i++)
        {
            if (p[i].age < minAge)
                minAge = p[i].age;
        }

        return minAge;
    }

    inline static int eldest(Person p[], int n)
    {
        int maxAge = p[0].age;

        for (int i = 1; i < n; i++)
        {
            if (p[i].age > maxAge)
                maxAge = p[i].age;
        }

        return maxAge;
    }
};

int main()
{
    Person p[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "\nEnter details of Person " << i + 1 << ":\n";
        p[i].input();
    }

    int youngAge = Person::youngest(p, 10);
    int oldAge = Person::eldest(p, 10);

    cout << "\nYoungest Person(s):\n";
    for (int i = 0; i < 10; i++)
    {
        if (p[i].getAge() == youngAge)
            cout << p[i].getName() << " - Age: " << youngAge << endl;
    }

    cout << "\nEldest Person(s):\n";
    for (int i = 0; i < 10; i++)
    {
        if (p[i].getAge() == oldAge)
            cout << p[i].getName() << " - Age: " << oldAge << endl;
    }

    return 0;
}