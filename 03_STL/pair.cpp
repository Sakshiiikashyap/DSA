#include <bits/stdc++.h>
using namespace std;
void explainPair() {
    // to store 2 variables.
    pair <int, int> p = {1, 4};
    cout << p.first << " " << p.second;
}
void multipleVar() {
    // To store multiple variables.
    pair <int, pair <int, int>> p = {1,{3, 4}};
    cout << p.first << " " << p.second.first << " " << p.second.second;
}
    
void storeArr() {
    // to store arr in pairs
    pair <int, int> arr[] = {{1,2}, {3,4}, {4,5}};
    cout << arr[1].second;

}
    


int main() {
    storeArr();
    return 0;
}