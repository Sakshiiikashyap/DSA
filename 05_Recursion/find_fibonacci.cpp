#include <bits/stdc++.h>
using namespace std;
int f(int n){
    if(n<=1) return n;
    int last = f(n-1);
    int sLast = f(n-2);
    return last + sLast;
}
int main(){
    int n;
    cin>>n;
    cout << f(n);
}