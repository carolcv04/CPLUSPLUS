#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main() {
    //declaring the types of all the variables.
    int b, sum, difference, product, quotient;
    string s;
    const int num = 10;

    //input operator to obtain int from user. 
    getline(cin,s);
    stringstream my_stream(s);
    my_stream >> b;

    //completes sum, quotient, product & difference utilixing input int
    // & const number (10)
    sum = b + num;
    difference = num - b;
    product = b*num;
    quotient = num/b;

    //prints out the const num & all the results of the calculations
    //as well as if it is successful or unsucessful. 
    cout << "constant number: " << num << endl;
    cout << "sum: " << sum << endl;
    cout << "difference: " << difference << endl;
    cout << "product: " << product << endl;
    cout << "quotient: " << quotient << endl;
    cout << "sucessful (1) & unsucessful(0): " << my_stream.fail() << endl;
    return 0;
}