#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    //seeting types for variables
    int DNA_length, i;
    string DNA, s;

    //setting the variable as the command line
    s = argv[1];
    DNA_length = s.length();

    //iterates through each character to find its complement
    for(i = 0; i < DNA_length; i++){

        if (s[i] == 'A'){
            DNA += "T";
        }
        else if (s[i] == 'T'){
            DNA += "A";
        }
        else if(s[i] == 'G'){
            DNA += "C";
        }
        else if(s[i] == 'C'){
            DNA += "G";
        }
    }

    //prints out the DAN string & complement
    cout << "DNA STRING: " << s << endl;
    cout << "DNA COMPLEMENT: " << DNA << endl;
    return 0;
}
