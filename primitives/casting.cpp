#include <iostream>

using namespace std;

int main(){

    float price = 100.99;
    // int roundedPrice = (int) price;
    int roundedPrice = (short) price;

    cout << roundedPrice << endl;
    // this will print 100 leaving .99 behind in both cases

    int products = 5;
    // int totalProductsPrice = price * products; This will cause an error if price is a float

    // we could use this instead of above both are valid
    int totalProductsPrice = roundedPrice * products;
    // int totalProductsPrice = (int) (price * products);

    cout << totalProductsPrice << endl;// But here is a huge mistake it will print 500 which is not the correct total cause it will cause you .99*5 dollars loss.

    return 0;
}