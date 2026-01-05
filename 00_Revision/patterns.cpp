#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<(n-i); j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=(n-i+1); j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // for(int i=1; i<=n; i++){
    //     //space
    //     for(int j=0; j<(n-i); j++){
    //         cout<<" ";
    //     }
    //     //star
    //     for(int j=0; j<(2*i-1); j++){
    //         cout<<"*";
    //     }
    //     //space
    //     for(int j=0; j<(n-i); j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=1; i<=n; i++){
    //     for(int j=0; j<=i-1; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<(2*n-2*i)+1; j++){
    //         cout<<"*";
    //     }
    //     for(int j=0; j<=i-1; j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=0; j<stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    pattern(n);
}