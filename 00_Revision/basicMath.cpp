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
void divisor(int n){
    // for(int i=1; i<=n; i++){
    //     if(n%i==0){
    //         cout << i << " ";
    //     }
    // }
    //it takes less time complexity
    vector<int> ls;
        for(int i=1; i<=sqrt(n); i++){
            if(n%i==0){
                ls.push_back(i);
                if(n/i!=i){
                    ls.push_back(n/i);
                }
            }
        }
        sort(ls.begin(), ls.end());
        for(auto it:ls)cout<<it<<" ";
}
void checkPrime(int n){
    int cnt=0;
    for(int i=1; i<=sqrt(n); i++){
        if(n%i==0){
            cnt++;
            if(n/i != i) cnt++;
        }
    }
    if(cnt==2) cout<<"true";
    else cout<<"false";
}
void gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b=b%a;
    }
    if(a==0) cout<<b;
    else cout<<a;
}

int main() {
    int a, b;
    cin >> a >> b;
    gcd(a, b);
    return 0;
}
