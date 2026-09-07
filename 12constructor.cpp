#include<iostream>
using namespace std;
class shape{
    float radius, length, width;

public:
    //constructor
    shape(float r, float l, float w)
    {
        radius = r;
        length = l;
        width = w;
        cout << "Constructor called: " << endl;
    }

    //calculate perimeter of circle
    float circlePerimeter()
    {
        return 2 * 3.14159 * radius;
    }

    //calculate perimeter of rectangle
    float rectanglePerimeter()
    {
        return 2 * (length + width);
    }

    //Destructor 
    ~shape()
    {
        cout<<"Destructor called."<<endl;
    }
};
int main(){
    float r, l, w;
    cout<<"Enter radius if circle: ";
    cin>>r;
    cout<<"Enter lenght of rectangle: ";
    cin>>l;
    cout<<"Enter width of rectangle: ";
    cin>>w;
    shape s (r, l, w);
    cout << "\nPerimeter of circle = "<<s.circlePerimeter()<<endl;
    cout<<"Perimeter of Rectangle = "<< s.rectanglePerimeter()<<endl;
    return 0;
}