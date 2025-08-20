#include <iostream>
#include <string>

using namespace std;

int main() {
    string favFood = "Pizza\n";
    string favDrink = "Coke is my \"favorite\" drink."; 
    // i want to highlight favorite so here is a new character called ESCAPE CHARACTER '\'
    // Go to microsoft docs for Cpp to learn more about escape charracter

    cout << favFood << favDrink << endl;
    // we will add '\n' for new line
    cout << "Hello, World!\n";
    cout << "This is a new line.\n";

    return 0;
}