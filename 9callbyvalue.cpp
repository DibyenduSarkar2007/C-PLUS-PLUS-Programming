//call by value in c++
#include <iostream>
using namespace std;
void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "After swapping inside function: a = " << x << ", b = " << y << endl;
}
int main(){
    int a = 40, b = 50;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swapping in main: a = " << a << ", b = " << b << endl;
    return 0;
}