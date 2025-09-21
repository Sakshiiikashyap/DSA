#include <bits/stdc++.h>
using namespace std;

void explainV() {
    vector<int> saks;
    saks.push_back(1);
    saks.emplace_back(2);
    for(auto it:saks){
        cout << it << endl;
    }
}

/*You are given N students, each with a name and marks.
 You need to store them in a vector<pair<string, int>> and then print all students.*/ 

void ques() {
    vector<pair<string, int>> students;
    students.push_back({"sakshi", 80});
    students.emplace_back("raj", 90);
    students.emplace_back("riya", 70);
    cout << "list:" << endl;
    //to print pair when used in vectors
    for (auto &it : students) {  
    cout << it.first << " " << it.second << endl;
    }
}

//increase size of vector
void prac(){
    vector<int> v1(5,20);
    for(auto it:v1){
        cout << it << " ";
    }
    cout << endl;
    //here we have increased the size using push_back
    v1.push_back(21);
    for(auto it:v1){
        cout << it << " ";
    }
}


int main() {
    prac();
}