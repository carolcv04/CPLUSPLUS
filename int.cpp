#include <iostream>
#include <string>
using namespace std;

int main() {
    int b, sum, difference, product, quotient;
    const int num = 10;
    cin >> b;

    sum = b + num;
    difference = num - b;
    product = b*num;
    quotient = num/b;

    cout << "constant number: " << num << endl;
    cout << "sum: " << sum << endl;
    cout << "difference: " << difference << endl;
    cout << "product: " << product << endl;
    cout << "quotient: " << quotient << endl;
    return 0;
}