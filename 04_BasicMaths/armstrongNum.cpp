#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    // int dup = n;
    // long sum = 0;
    // while(n != 0) {
    //     int ld = n % 10;
    //     sum = sum + (ld*ld*ld);
    //     n = n/10;
    // }
    // if(dup == sum) cout << "true";
    // else cout << "false";

    //corret code
    int num = n;
    int dup = n;
    int cnt = 0;
    while(dup!=0){
        cnt += 1;
        dup = dup/10;
    }
    cout<<cnt<<endl;
    int sum = 0;
    dup = n;
    while(dup!=0){
        int ld = dup%10;
        int power = 1;
        for(int  i=1; i<=cnt; i++){
            power = power*ld;
        }
        sum = sum + power;
        dup = dup/10;
    }
    if(sum == num) cout<<"yes its is";
    else cout << "no its not";
}

int main(){
    int n;
    cin >> n;
    isArmstrong(n);
    return 0;
}