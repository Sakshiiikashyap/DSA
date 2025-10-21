#include <bits/stdc++.h>
using namespace std;

void extractNum(int n){
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
    extractNum(n);
    return 0;
}
