#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    int smallest;
    cout << "Enter 3 numbers" << endl;
    cin >> a >> b >> c;
    smallest = a;
    if(a>b){
        smallest = b;
    }
    if(a>c){
        smallest = c;
    }
    if(a==b || a==c || c==b){
        cout << "2 of the numbers inputted are equal, please enter 3 different numbers" << endl;
        return 0;
    }
    cout << "The smallest number is " << smallest << endl;
    return 0;
}