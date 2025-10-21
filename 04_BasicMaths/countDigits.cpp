#include <bits/stdc++.h>
using namespace std;
// You are given an integer n. You need to return
// the number of digits in the number.

void countDigits(int n){
    int cnt = 0;
    while(n>0){
        int lastDigit = n%10;
        cnt = cnt+1;
        n = n/10;
    }
    cout << cnt;
};
int main(){
    int n;
    cout << "Enter the num:";
    cin >> n;
    countDigits(n);
    return 0;
};