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
//reverse an array
void reverse(int i, int arr[], int n){
    // if(l>=r) return;
    // swap(arr[l], arr[r]);
    // reverse(l+1, arr, r-1);
    // using one pointer
    if(i>=n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverse(i+1, arr, n);
}
bool palin(int i, string &s){
    if(i>=s.size()/2)return true;
    if(s[i]!= s[s.size()-i-1]) return false;
    return palin(i+1, s);
}
//find nth fibonacci using multiple recusrsion
int fibo(int n){
    if(n<=1) return n;
    int last=fibo(n-1);
    int sLast=fibo(n-2);
    return last + sLast;
}

int main() {
    int n;
    cin>>n;
    // int arr[n];
    //     cin>>arr[i];
    // }
    // reverse(0, arr, n);
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }
    // string s;
    // cin>>s;
    cout<<fibo(n);
}