#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;
    do{
        cout << "letters only :)" << endl;
        cin >> x;
    }
    while (!isalpha(x)){
        cout << "bad" << endl;
        cin >> x;
    }
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
        cout << "vowel" << endl;
    }
    else if(!isalpha(x)){
        cout << "bad" << endl;
    }
    else {
        cout << "consonant" << endl;
    }

    return 0;
}