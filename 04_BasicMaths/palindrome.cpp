#include <bits/stdc++.h>
using namespace std;
//chack if num is palindrome or not
bool checkPal(int n){
    // if(n < 0) return false;
    int dup = n;
    long revN = 0;

    while(n > 0){
        int ld = n % 10;
        revN = (revN * 10) + ld;
        n = n / 10;
    }
    // return dup == revN;
    if(revN == dup) cout << "True";
    else cout << "False";
}

int main(){
    int n;
    cin >> n;
    checkPal(n);
    return 0;
}