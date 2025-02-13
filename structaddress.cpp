#include <iostream>
 using namespace std;
 struct Address {
    char *dno;
    char *building;
    int flatno;
    char *street;
    char *city;
    int pincode;
 };
 int main(int argc, char** argv) {
    struct Address a1;
    a1.dno = "4-1-2";
    a1.building = "Balaji Residency";
    a1.flatno = 402;
    a1.street = "Abid Nagar";
    a1.city = "vizag";
    a1.pincode = 530016;
    cout << "My Address...,\n";
    cout << a1.dno << endl;
    cout << a1.flatno << " ,";
    cout << a1.building << endl;
    cout << a1.street << endl;
    cout << a1.city << endl;
    return 0;
 }