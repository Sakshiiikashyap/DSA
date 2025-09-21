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
    cout << arr[2].first << " " << arr[2].second;
}

// store student name and marks in array using pair
void store() {
    pair<string, int> arr[] = {{"saks",98}, {"raj",89}, {"ishaan" , 99}};

     // size of array = total size / size of one element
    int n = sizeof(arr) / sizeof(arr[0]);
    //to print the array
    for (int i = 0; i < n; i++) {
    cout << arr[i].first << " " << arr[i].second << endl;
    //arr[i].first will print name of student 
    //arr[i].second will print marks of the students
    }
}

 int main() {
    store();
    return 0;
 }