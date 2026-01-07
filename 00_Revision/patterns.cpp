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

    // for(int i=1; i<=2*n-1; i++){
    //     int stars = i;
    //     if(i>n) stars = 2*n-i;
    //     for(int j=0; j<stars; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int start=1;
    // for(int i=0; i<n; i++){
    //     if(i%2==0) start=1;
    //     else start=0;
    //     for(int j=0; j<=i; j++){
    //         cout<<start;
    //         start = 1-start;
    //     }
    //     cout<<endl;
    // }

    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<j;
    //     }
    //     for(int j=0; j<2*n-2*i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=i; j>=1; j--){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // int num =1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<num<<" ";
    //         num=num+1;
    //     }
    //     cout<<endl;
    // }
    
    // for(int i=0; i<n; i++){
    //     for(char j='A'; j<='A'+i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<n; i++){
    //     for(char j='A'; j<'A'+(n-i); j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }

    
    // for(int i=0; i<n; i++){
    //     char alpha ='A'+i;
    //     for(int j=0; j<=i; j++){
    //         cout<<alpha<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<n; i++){
    //     for(char chr='E'-i; chr<='E'; chr++){
    //         cout<<chr<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<n; i++){
    //     //space
    //     for(int j=0; j<n-i-1; j++){
    //         cout<<" ";
    //     }
    //     char chr='A';
    //     int breakpoint = (2*i+1)/2;
    //     for(char j=1; j<=2*i+1; j++){
    //         cout<<chr;
    //         if(j<=breakpoint) chr++;
    //         else chr--;
    //     }
    //     for(int j=0; j<n-i-1; j++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i; j++){
    //         cout<<"*";
    //     }
    //     for(int j=0; j<2*i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=0; j<n-i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     for(int j=0; j<2*n-2*i; j++){
    //         cout<<" ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    int space = 2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars=2*n-i;
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n) space -= 2;
        else space += 2;
    }

}


int main(){
    int n;
    cin>>n;
    pattern(n);
}