#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of arr: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //precompute
    int hash[13] = {0};
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout<<"Write the number of queries: ";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the numbers: ";
        cin>>number;
        //fetch
        cout << hash[number] << endl;
    }
    return 0;
    
}