#include <bits/stdc++.h>
using namespace std;

//declare vector
void explainVector() {
    vector<int>v;       //creates empty container
    v.push_back(1);     //{1}
    v.emplace_back(2);  //{1, 2} dynamically increases the size

    //to print vector
    for(auto it : v) {
        cout << it << " ";
    }
}

//declare vector of pair
void definePair() {
    vector<pair<int, int>> v;
    v.push_back({1,2});
    v.emplace_back(3, 4);

    for(auto it : v) {
        cout << " (" << it.first << "," << it.second << ") ";
    }
    cout << endl;
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

    //*(it)---> to access anything at memory
    //to access the the element at the memory we use star 

    it++; 
    cout << *(it) << " "; //10 will be printed.    
    it+=2;                //shifted exactly by 2 position.
    cout << *(it) << endl;; //6 will be printed.

    //print vector(3 methods)
    for(vector<int>::iterator it=v.begin(); it!=v.end(); it++){
        cout <<*(it) << endl;
    }
 
    //another method
    for(auto it=v.begin(); it!=v.end(); it++) {  //auto --> automatically defines the iterator.
        cout << *(it) << " ";
    }

    //other method(for each loop)
    for(auto it : v){        //{20, 30, 40} -->
        cout << it << " ";  // it, it, it
    }
    cout << endl;
}

void deletion() {
    //deletion
    //{20, 12, 13, 15, 19, 40}
    vector<int> v4 = {20, 12, 13, 15, 19, 40};
    v4.erase(v4.begin()+1); //12 will be deleted {20, 13, 15, 19, 40}
    for(auto it : v4){
        cout << it << " ";
    }
    cout << endl;
    //deletion in pair
    v4.erase(v4.begin()+2, v4.begin()+4); //13 and 15 are deleted 
    //{20, 13, 40} [start, end) -->start will be deleted and the elements before end
    for(auto it : v4){
        cout << it << " ";
    }
}

void insertion() {
    //insertion function
    vector<int> vec(2,100);           //{100, 100}
    vec.insert(vec.begin(), 20);      //{20, 100, 100}
    vec.insert(vec.begin() +1, 2, 5); //{20, 5, 5, 100, 100}
    for(auto it : vec){
        cout << it << " ";
    }
 }
    /*
    another iterators apart from v.begin.
    {20, 10, 15, 6, 7}
    v.end();  ---> points to the memory. location that is right after the last element.
    v.rend(); ---> reverse the vector ({7, 6, 15, 10, 20})
    then pointing the location right after the last element.
    v.rbegin  ---> pointing to first element of reversed iterator. i.e 7
    */

void func() {
    vector<int> v={10,20,89,70};
    cout << v.size(); //to check the size of vector
    cout << endl;

    // to pop out the element
    v.pop_back(); //last element is poped out
    for(auto it:v){
        cout << it << " ";
    }
    cout << v.empty();
    //will tell if your vector is empty or not 
    // 1--> empty 0--->> not empty

    //to swap two vectors
    cout << endl;
    vector<int> v1 = {10, 20};
    vector<int> v2 = {40, 50};
    v1.swap(v2);
    for(auto it:v1){
        cout << it << " ";
    }
    cout << endl;
    for(auto it:v2){
        cout << it << " ";
    }

    cout << endl;
    v1.clear();
    for(auto it : v1){
        cout << it;
    }
     cout << v2.empty();
}


int main() {
    func();
    return 0;
}