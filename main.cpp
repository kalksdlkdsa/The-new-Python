#include <iostream>
#include <climits>
#include <cfloat>
using namespace std;
//main.cpp
//n bit => -2^(n-1) -> 2^(n-1) - 1
//
//Kieu du lieu so:
//So nguyen
//int: 4byte = 32bit : -2^31 -> 2^31 - 1
//long long: 8 byte = 64 bit = -2^63 -> 2^63-1
//So thuc

int main() {
    cout << INT_MIN << ";" << INT_MAX << endl;
    cout << LLONG_MIN << ";" << LLONG_MAX << endl;
    return 0;
}