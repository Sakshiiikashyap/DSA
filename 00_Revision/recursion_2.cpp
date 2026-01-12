#include <bits/stdc++.h>
using namespace std;
//print sum of n
void facto(int i, int fac){
    // if(i<1){
    //     cout<<sum;
    //     return;
    // }
    // parameter(i-1, sum+i);
    if(i<1){
        cout<<fac;
        return;
    }
    facto(i-1, fac*i);
}
int fact(int n){
    // if(n==0) return 0;
    // return n + sum(n-1);
    if(n==1) return 1;
    return n * fact(n-1);
}

int main() {
    int n;
    cin>>n;
    facto(n, 1);
    
}