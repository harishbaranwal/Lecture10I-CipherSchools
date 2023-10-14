#include <iostream>
using namespace std;

void printHi(){
    cout << "Hi" << endl;
    return;
}

int sum(int a, int b){
    int c;
    c= a+b;
    a=500;
    cout << "the value of c is: "<< c << endl;
    return c;
}

int main(){

    printHi();
    int a,b;
    int c =75;

    a=4;
    b=6;
    int d;
    d= sum(a,b);

    // cout << "the sum is: " << d << " the value of a is: " << a <<endl;
    cout << "the value of c is: "<< c << endl; // gives a garbage value till it is assigned.



    return 0;
}
