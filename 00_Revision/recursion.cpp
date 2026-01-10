#include <bits/stdc++.h>
using namespace std;
//bakwass code
// {int cnt = 0;
// void count(){
//     if(cnt == 3) return;
//     cout<<cnt<<endl;
//     cnt++;
//     count();
// }}
void print(int i, int n){
    // if(i>n) return;
    // cout<<"sakshi"<<endl;
    // print(i+1, n);
    if(i>n) return;
    cout<<i<<" ";
    print(i+1, n);
}
int main(){
    int n;
    cin>>n;
    print(1, n);
}