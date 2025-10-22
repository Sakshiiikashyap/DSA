#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int dup = n;
    long sum = 0;
    while(n != 0) {
        int ld = n % 10;
        sum = sum + (ld*ld*ld);
        n = n/10;
    }
    if(dup == sum) cout << "true";
    else cout << "false";
}

int main(){
    int n;
    cin >> n;
    isArmstrong(n);
    return 0;
}