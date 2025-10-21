#include <bits/stdc++.h>
using namespace std;

void revNum(int n) {
    long revN = 0; //to store 8 bit
    while(n != 0){
        int ld = n % 10;
        revN = (revN * 10) + ld;
        n = n/10; 
        if (revN > INT_MAX || revN < INT_MIN); //to avoid overflow 
    }
    cout << revN;
}
int main() {
    int n;
    cout << "enter the num: ";
    cin >> n;
    revNum(n);
    return 0;
}