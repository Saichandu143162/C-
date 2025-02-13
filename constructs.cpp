//Default constructor
 #include <iostream>
 using namespace std;
 class A {
 public:
    // Compiler "declares" constructor
 };
 class B {
 public:
    // User defined constructor
    B() {
        cout << "B class Constructor" << endl;
    }
 };
 // Driver Code
 int main() {
    A d1;
    B b1;
    return 0;
 }
