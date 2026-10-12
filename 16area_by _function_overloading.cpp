#include<iostream>
#include<cmath>
using namespace std;

//Area of circle
double AREA(double r)
{
    return 3.14 * r * r;
}

//Area of Rectangle
double AREA(double l, double b)
{
    return l * b;
}

//Area of Triangle
double AREA(double a, double b, double c)
{
    double s = (a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main()
{
    double r, l, a, b, c;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"Area of circle: "<<AREA(r)<<endl;

    cout<<"Enter length and breadth of Rectangle: ";
    cin>>l>>b;
    cout<<"Area of Rectangle: "<<AREA(l, b)<<endl;
    
    cout<<"Enter three sides of Triangle: ";
    cin>>a>>b>>c;
    
    if (a+b>c && a+c>b && b+c>a){
        cout << "Area of triangle: "<<AREA(a,b,c)<<endl;
    }
    else{
        cout<<"Invalid Triangle"<<endl;
    }

    return 0;
}