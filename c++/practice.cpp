#include <bits/stdc++.h>
using namespace std;

/* 
if whe use "int" function we will write return to return the value 
for "void" we will use cout to return the value
*/

void maxx(int num1, int num2){
    if(num1 >= num2) {
        cout << num1;
    }
    else cout << num2;

}

int main() {
    int num1, num2;
    cout << "enter the numbers : ";
    cin >> num1 >> num2;
    maxx(num1, num2);
}