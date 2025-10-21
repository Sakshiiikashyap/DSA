#include <bits/stdc++.h>
using namespace std;

void reverseNum(){
    int n;
    cout << "Enter the num:";
    cin >> n;
    cout << endl;
    while(n>0) {
        int lastDigit = n%10;
        cout << lastDigit << endl;
        n = n/10;
    }
    cout << endl;
}
int main(){
    reverseNum();
    return 0;
}
