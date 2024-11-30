#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1 = "Hello";
    string s2 = " World, ";
    char greet[] = "Good Day!";
    s1 += s2; //  concatenates s1 and s2
    s1 += greet; //  concatenates s1 and greet
    cout << s1 << endl;
}
