//Call by Address
 #include <iostream>
 using namespace std;
 void swap(int*, int*);
 int main(int argc, char** argv) {
    int a = 10, b = 20;
    cout<<"before swapping...,\n";
    cout << "a = " << a << " b = " << b << endl;
    swap(&a, &b);
    cout<<"after swapping...\n";
    cout << "a = " << a << " b = " << b << endl;
    return 0;
 }
 void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
 }