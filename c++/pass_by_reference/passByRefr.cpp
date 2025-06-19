#include <bits/stdc++.h>
using namespace std;
//pass by refrence
void doSomething(string &s) {
    s[0] = 't';
    cout << s << endl; //chnages done in original value

}
//here they are dealing with original value
int main() {
    string s = "rahul";
    doSomething(s);
    cout << s;
}