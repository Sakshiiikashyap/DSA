#include <bits/stdc++.h>
using namespace std;
void checkGCD(int a, int b){
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    if (a == 0) cout << b;
    else cout << a;
    // for(int i=min(n1,n2); i>=1; i--){
    //     if(n1%i == 0 && n2%i == 0){
    //         cout << i;
    //         break;
    //     }
    // }
}
int main() {
    int a, b;
    cin >> a >> b;
    checkGCD(a, b);
    return 0;
}