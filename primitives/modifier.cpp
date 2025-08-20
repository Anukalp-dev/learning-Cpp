#include <iostream>

using namespace std;

int main(){
    
    // unsigned projects = -100;   
    // This will not compile because unsigned cannot hold negative values
    // cout << projects << endl;

    //We will not be able to assign negative values to unsigned variables
    unsigned projects = 100;

    cout << projects << endl; // This will compile and print 100

    
    // float longNumber = 100000000;
    // cout << longNumber << endl; 
    // This will compile and print the value of longNumber but in form of scientific notation

    // for this kind of operation we use long
    long largeNumber = 100000000; 
    cout << largeNumber << endl; // This will compile and print the value of largeNumber 

    // but these all operaters and methods have their limits you can go to Cpp docs available on many sites since CPP DOCS ARE PAID
    return 0;
}