#include <bits/stdc++.h>
using namespace std;

void isPrimeNum(int n) {
    //if(n<0) return "False";
    int cnt = 0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i == 0){
            cnt++;
            if(n/i != i) cnt++;
        }
    }
    if(cnt == 2) cout << "True";
    else cout << "False";
}
int main() {
    int n;
    cin >> n;
    isPrimeNum(n);
    return 0;
}