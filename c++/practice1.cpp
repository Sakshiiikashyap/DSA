#include <bits/stdc++.h>
using namespace std;

//pass by reference ==> where original value is passed.

void doSomething(int &num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main() {
    int num = 10;
    doSomething(num);
    cout << num;
    return 0;
}