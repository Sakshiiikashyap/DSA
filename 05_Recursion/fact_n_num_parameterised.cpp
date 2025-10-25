// Problem statement
// Write a program to find the factorial of a number.
// Factorial of n is:
// n! = n * (n-1) * (n-2) * (n-3)....* 1
// Output the factorial of 'n'. If it does not exist, output 'Error'.

#include <bits/stdc++.h>
using namespace std;
void f(int i, int fact){
    if(i<1){
        cout << fact;
        return;
    }
    f(i-1, fact*i);
}
int main() {
    int n;
    cin>>n;
    f(n,1);
    return 0;
}