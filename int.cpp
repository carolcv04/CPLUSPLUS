#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int b, sum, difference, product, quotient;
    string s;
    const int num = 10;

    getline(cin,s);
    stringstream my_stream(s);
    my_stream >> b;

    sum = b + num;
    difference = num - b;
    product = b*num;
    quotient = num/b;

    cout << "constant number: " << num << endl;
    cout << "sum: " << sum << endl;
    cout << "difference: " << difference << endl;
    cout << "product: " << product << endl;
    cout << "quotient: " << quotient << endl;
    cout << "sucessful (1) & unsucessful(0): " << my_stream.fail() << endl;
    return 0;
}