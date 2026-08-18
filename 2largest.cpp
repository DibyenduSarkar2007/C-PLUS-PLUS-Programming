#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter a: "<<endl;
    cin>>a;
    cout<<"Enter b: "<<endl;
    cin>>b;
    cout<<"Enter c: "<<endl;
    cin>>c;
    if (a>=b && a>=c)
    cout<<"Largest = "<<a;
    else if (b>=c && b>=a)
    cout<<"Largest = "<<b;
    else
    cout<<"Largest = "<<c;
    return 0;
}