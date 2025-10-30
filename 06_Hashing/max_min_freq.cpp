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
    //sorted order
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }
     int maxFreq = 0, minFreq = INT_MAX;
    int maxElem = -1, minElem = -1;

    for (auto it : mpp) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
            maxElem = it.first;
        }
        if (it.second < minFreq) {
            minFreq = it.second;
            minElem = it.first;
        }
    }
    cout << "Element with highest frequency: " << maxElem<<endl;
    cout << "Element with lowest frequency: " << minElem<<endl;
    //queries
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