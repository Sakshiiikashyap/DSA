#include <bits/stdc++.h>
using namespace std;
//pass by value 
void doSomething(string s) {
    s[0] = 't';
    cout << s << endl; //copy value
}

int main() {
    string s = "raj";
    doSomething(s);
    cout << s;  //orignal value
}