#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cout << "Enter the char: ";
    cin >> n;

    //precompute
    int hash[26] = {0};
    for(int i=0; i<n.size(); i++){
        hash[n[i]-'a']++;
    }
    int q;
    cout<<"Enter the no. of queries: ";
    cin>>q;
    while(q--){
        char c;
        cout<<"enter the characters: ";
        cin>>c;
        //fetch
        cout<<hash[c-'a'] << endl;
    }
    return 0;
}