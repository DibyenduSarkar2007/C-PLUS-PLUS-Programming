#include<iostream>
using namespace std;
int main(){
    int num;
    long long fact = 1;
    cout<<"Enter a number you want the factorial of it: ";
    cin>>num;
    for (int i = 1; i<=num; i++)
    fact = fact*i;
    cout<<"factorial = "<<fact;
    return 0;
}