#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    int biggest;
    cout << "Enter 3 numbers" << endl;
    cin >> a >> b >> c;
    biggest = a;
    if(a<b){
        biggest = b;
    }
    if(a<c){
        biggest = c;
    }
    if(a==b || a==c || c==b){
        cout << "2 of the numbers inputted are equal, please enter 3 different numbers" << endl;
        return 0;
    }
    cout << "The biggest number is " << biggest << endl;
    return 0;
}