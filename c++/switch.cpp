#include <bits/stdc++.h>
using namespace std;
/*
Take the day no. and print the corresponding day 
for 1 print monaday
for 2 print tuesday and so on for 7 print sunday
*/

int main() {
    int day;
    cout << " Enter the number: ";
    cin >> day;
    switch(day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tueday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "saturday";
            break;
        case 7:
            cout << "Sunaday";
            break;
        default:
            cout << "Invalid";    
    }
}