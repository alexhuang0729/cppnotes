#include <iostream>
using namespace std;

int main() {
    int x = 8;
    int* ptr = nullptr;

    cout << ptr << '\n';

    ptr = &x;
    cout << ptr << '\n';

    cout <<*ptr << '\n';
}