#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using std::string;

class Animal {
private:
    static inline int count = 0;
    string name;
public:
    static int getCount() {
        return count;
    }

    string getName() {
        return name;
    }

    Animal(string name) : name(name) {
        count++;
    }
};

class Hyena : public Animal{
private:
    static inline int count = 0;

public:
    static int getCount() {
        return count;
    }

        Hyena(string name) : Animal(name) {
        count++;
    }
};

int main() 
{

    Hyena Joe("joe");
    Animal John("John");

    std::cout << "Animals: " << Animal::getCount() << "\n";

    std::cout << "Hyenas: " << Hyena::getCount() << "\n";

    return 0;
}