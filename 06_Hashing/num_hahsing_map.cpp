#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    //precompute
    map <int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    int q;
    cout<<"Enter the no. of queries: ";
    cin>>q;
    while(q--){
        int c;
        cout<<"Enter the numbers: ";
        cin>>c;
        //fetch
        cout<<mpp[c]<<endl;
    }
    return 0;
}