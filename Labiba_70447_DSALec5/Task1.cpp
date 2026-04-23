#include <iostream>
using namespace std;

class Animal {
public:
    string name;
    string breed;
    int age;

    void eat() {
        cout << name << " is eating." << endl;
    }

    void play() {
        cout << name << " is playing." << endl;
    }

    void sleep() {
        cout << name << " is sleeping." << endl;
    }
};

int main() {
    Animal dog;

    dog.name = "Buddy";
    dog.breed = "Golden Retriever";
    dog.age = 5;

    cout << "My dog's name is " << dog.name << endl;

    dog.eat();
    dog.play();
    dog.sleep();

    return 0;
}