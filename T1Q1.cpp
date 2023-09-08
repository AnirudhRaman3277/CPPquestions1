#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;
    string college;

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter your college name: ";
    getline(cin, college);

    cout << "Your full name is " << name << ", your age is " << age <<" and your college name is " << college << endl;
   

    return 0;
}
