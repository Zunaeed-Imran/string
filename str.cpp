#include <iostream>
#include <string>

using namespace std;

int main() {
    string Name;
    cout << "Enter your name: ";
    getline(cin, Name);
    cout << "You entered: " << Name << endl;
    return 0;
}
