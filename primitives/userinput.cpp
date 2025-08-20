#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: \n";
    getline(cin, name); //cin comes from iostream and getline is just a method to take input

    cout << "Welcome " << name << " Enter your age: "; //this is just for making an optimization user will se his/her name
    cin >> age; //not necessary to use getline we could use cin but notice: cin has changed the diamond brackets now these are going towards age that means cin is saving inside age

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    return 0;
}