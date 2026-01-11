#include <bits/stdc++.h>
using namespace std;
//print sum of n
void parameter(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    parameter(i-1, sum+i);
}
int main() {
    int n;
    cin>>n;
    parameter(n, 0);
    
}