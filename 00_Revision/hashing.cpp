#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    // cout<<"write the size of arr: "<<endl;
    cin>>n;
    int arr[n];
    // cout<<"enter arr: "<<endl;
    //using map
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    
    int q;
    // cout<<"enter the no. query: "<<endl; 
    cin>>q;
    // cout<<"Enter the numbers to hash: "<<endl;
    while(q--){
        int no;
        cin>>no;
        cout<< mpp[no] << endl;
    }
}
    //for string
// int main() {
//     string s;
//     cin>>s;
//     int hash[26] = {0};
//     for(int i=0; i<s.size(); i++){
//         hash[s[i]-'a']++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char a;
//         cin>>a;
//         cout<<hash[a-'a']<<endl;;
//     }
//     return 0;
// }