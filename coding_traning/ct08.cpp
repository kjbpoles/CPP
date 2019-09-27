#include <iostream>

using namespace std;

int main() {
    int people, pizzas, pieces;

    cout << "How many people? ";
    cin >> people;
    cout << "How many pizzas do you have? ";
    cin >> pizzas;
    cout << "How many pieces are in a pizza? ";
    cin >> pieces;
    cout << endl;
    cout << people << " people with " << pizzas << " pizzas." << endl;
    cout << "Each person gets " << pizzas * pieces / people << " pieces of pizza." << endl;
    cout << "There are " << pizzas * pieces % people << " leftover pieces." << endl;
    

    return 0;
}