#include <bits/stdc++.h>
using namespace std;
void storeV() {
    pair<int, int> saks = {1, 2};
    cout << saks.first << " " << saks.second;
}

//to store more than one value
void valueV() {
    pair<int, pair<int,int>> p;
    cout << "Enter the values";
    cin >> p.first >> p.second.first >> p.second.second;
    cout << p.second.first;
}

// to store the arr[]
void arrV() {
    pair<int,int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout << arr[2].first;
    
}

 int main() {
    arrV();
    return 0;
 }