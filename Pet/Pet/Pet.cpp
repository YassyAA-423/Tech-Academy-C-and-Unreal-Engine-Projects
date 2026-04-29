#include <iostream>
#include <string>
using namespace std;

class Dog {       // The class for dog
private:            
    string breed; // Attribute (string variable)
    string color;
    int height;
    int weight;        // Attribute (int variable)

public:
    Dog(string breed, string color, int height, int weight) 
        : breed(breed), color(color), height(height), weight(weight) {}

    /*Methods for the dog
    The first method Shake will state the dog is shaking the water off*/
    void shake() {
        cout << "The " << breed << " is shaking the water off their " << color << " fur ... good dog.." << '\n';
    }
    //The second method states the dog is sitting
    void sit() {
        cout << "The " << breed << " is sitting down! Good Dog!" << '\n';
    }
    //The third method stated the dog is laying down
    void layDown() {
        cout << "The " << breed << " is laying down. Good Dog!" << '\n';
    }
};

int main()
{
    Dog myDog("Chiweenie", "Beige", 1, 14);
    myDog.shake();
    return 0;
}
