#include <bits/stdc++.h>
using namespace std;

//define vector
void explainVector() {
    vector<int>v;       //creates empty container
    v.push_back(1);     //{1}
    v.emplace_back(2);  //{1, 2} dynamically increases the size
}

//define vector of pair
void definePair() {
    vector<pair<int,int>> v;
    v.push_back({1,2});
    v.emplace_back(1,2);
}

void declare() {
    vector<int> v1(5, 100);//{100,100,100,100,100}
    vector<int> v2(5);     //{0,0,0,0,0}
}  

//can you increase the size? yes by using push_back
void declareAnother(){
    vector<int> v1(5, 20);
    vector<int> v2(v1);     //another container but copy of v1
}

//how to access elements in vector.
void accessIterator() {
    vector<int> v = {20, 10, 15, 6, 7};
    vector<int>::iterator it = v.begin();    //v.begin points to memory address of the vector.

    //to access the the element at the memory we use star                                 
    it++; 
    cout << *(it) << " "; //10 will be printed.    

    it+=2;                //shifted exactly by 2 position.
    cout << *(it) << " "; //6 will be printed.
}
    

  

int main() {
    accessIterator();
    return 0;
}