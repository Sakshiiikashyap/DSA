#include <bits/stdc++.h>
using namespace std;

void reverseNum(int n){
    cout << endl;
    while(n>0) {
        int lastDigit = n%10;
        cout << lastDigit << endl;
        n = n/10;
    }
}
int main(){
    int n;
    cout << "Enter the num:";
    cin >> n;
    reverseNum(n);
    return 0;
}
