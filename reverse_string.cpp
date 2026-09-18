#include <iostream>
#include <string>
using namespace std;

int main() {
    string* str = new string;

    cout << "Enter a string: ";	//User Input
    getline(cin, *str);

    int length = str->length();	//String Length	

    //String reverse
    for (int i = 0; i < length / 2; i++) {
        char temp = (*str)[i];
        (*str)[i] = (*str)[length - 1 - i];
        (*str)[length - 1 - i] = temp;
    }
    cout << "Reversed string: " << *str << endl;

    //Free up Allocated memory
    delete str;
    str = nullptr;

    return 0;
}
