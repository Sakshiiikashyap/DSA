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
    cout << *(it) << endl;; //6 will be printed.

    //print vector
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

    //deletion
    //{20, 12, 13, 15, 19, 40}
    v.erase(v.begin()+1); //12 will be deleted {20, 13, 15, 19, 40}
    //deletion in pair
    v.erase(v.begin()+2, v.begin()+3); //13 and 15 are deleted 
    //{20, 12, 19, 40} [start, end) -->start will be deleted and the elements before end

    //insertion function
    vector<int> vec(2,100);           //{100, 100}
    vec.insert(vec.begin(), 20);      //{20, 100, 100}
    vec.insert(vec.begin() +1, 2, 5); //{20, 5, 5, 100, 100}

}
    /*
    another iterators apart from v.begin.
    {20, 10, 15, 6, 7}
    v.end();  ---> points to the memory. location that is right after the last element.
    v.rend(); ---> reverse the vector ({7, 6, 15, 10, 20})
    then pointing the location right after the last element.
    v.rbegin  ---> pointing to first element of reversed iterator. i.e 7
    */
  

int main() {
    accessIterator();
    return 0;
}