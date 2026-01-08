#include <bits/stdc++.h>
using namespace std;

void cntDigits(int n){
    int cnt = 0;
    while(n>0){
        // int lastDigit=n%10; :for extraction
        cnt += 1;
        n=n/10;
    }
    cout<<cnt;
}
void revNum(int n){
    int rev=0;
    while(n>0){
        int ld = n%10;
        rev = (rev*10)+ld;
        n = n/10;
    }
    cout<<rev;
}
void palindrome(int n){
    int rev = 0;
    int dup = n;
    while(n>0){
        int ld = n%10;
        rev = (rev*10)+ld;
        n = n/10;
    }
    if(rev == dup) cout<<"The no. is palindrome";
    else cout<<"is not a palindrome";
}
void checkArm(int n){
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

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    checkArm(n);
    return 0;
}
