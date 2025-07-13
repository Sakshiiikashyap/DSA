#include <bits/stdc++.h>
using namespace std;
void explainVector() {
    //define vector
    vector<int>v;       //creates empty container
    v.push_back(1);     //{1}
    v.emplace_back(2);  // {1, 2} dynamically increases the size

    //define vector of pair
    vector<pair<int,int>> vec;
    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5, 100);   //{100,100,100,100,100}

    vecotr<int> v(5);        //{0,0,0,0,0}
    //can you increase the size? yes by using push_back

    vector<int> v1(5, 20);

    vector<int> v2(v1)      //another container but copy of v1

    //how to access elements in vector.
    //{20, 10, 15, 6, 7}
    vector<int>::iterator it = v.begin();    //v.begin points to memory address of the vector.
    //to access the the element at the memory we use star                                 
    it++; 
    cout << *(it) << " ";   //10 will be printed.    

    it = it+2; //shifted exactly by 2 position.
    cout << *(it) << " "; //6 will be printed.

    vector<int>::iterator it=v.end();

    vector<int>::iterator it=v.rend();

    vector<int>::iterator it=v.rbegin();

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";

}
int main() {
    explainVector();
    return 0;
}