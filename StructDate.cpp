#include <iostream>
 using namespace std;
 struct Date {
    int day;
    int month;
    int year;
 } d1;
 int main(int argc, char** argv) {
    struct Date d2 = {1, 2, 2000};
    d1.day = 1;
    d1.month = 2;
    d1.year = 2025;
    cout << "Today's date = " << d1.day << "-" << d1.month << "-" << d1.year;
    return 0;
 }