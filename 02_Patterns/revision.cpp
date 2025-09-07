#include <bits/stdc++.h>
using namespace std;

void p1(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void p2(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void p3(int n) {
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
}
void p4(int n) {
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }
}
void p5(int n) {
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void p6(int n) {
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void p7(int n) {
    for(int i=1; i<=n; i++){
        //space
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        //star
        for(int j=0; j<2*i-1; j++){
            cout << "*"; 
        }
        //space
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void p8(int n) {
    for(int i=1; i<=n; i++){
        //space
        for(int j=0; j<i-1; j++){
            cout << " ";
        }
        //star
        for(int j=0; j<(2*n-2*i)+1; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void p9(int n) {
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n -i;
        for(int j=1; j<=stars; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void p10(int n) {
    int start = 1;
    for(int i=0; i<n; i++){
        if(i%2==0)start = 1;
        else start=0;
        for(int j=0; j<=i; j++){
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}
void p11(int n) {
    for(int i=1; i<=n; i++){
        //number
        for(int j=1; j<=i; j++){
            cout << j;
        }
        //space
        for(int j=1; j<=(2*n)-(2*i); j++){
            cout << " ";
        }
        //number
        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
    }
}
void p12(int n){
    int start = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << start << " ";
            start += 1;
        }
        cout << endl;
    }
}
void p13(int n){
    for(int i=0; i<n; i++){
        for(char j='A'; j<='A'+i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void p14(int n){
    for(int i=0; i<n; i++){
        for(char j='A'; j<'A'+n-i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void p15(int n){
    for(char i=0; i<n; i++){
        char ch='A'+i;
        for(int j=0; j<=i; j++){
            
            cout << ch << " ";
        }
        cout << endl;
    }
}
void p16(int n){
    for(int i=0; i<n; i++){
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        //alphabet
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1; j++){
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        } 
        //space
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << endl;
    }
}
void p17(int n) {
    for(int i=0; i<n; i++){
        for(char ch='E'-i; ch<='E'; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void p18(int n){
    //for first half
    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<2*i; j++){
            cout << " ";
        }
        //stars
        for(int j=0; j<n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
    //other half pattern
    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        //space
        for(int j=0; j<(2*n-2*i)-2; j++){
            cout << " ";
        }
        //stars
        for(int j=0; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    
}

void p19(int n){
    int space = 2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int stars=i;
        if(i>n) stars=2*n-i;
        //stars
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        //space
        for(int j=1; j<=space; j++){
            cout << " ";
        }
        //stars
        for(int j=1; j<=stars; j++){
            cout << "*";
        }
        cout << endl;
        if(i<n) space -=2;
        else space +=2;
    }
}

int main() {
    int n;
    cin >> n;
    p19(n);
}