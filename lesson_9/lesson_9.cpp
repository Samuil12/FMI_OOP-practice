#include <iostream>
#include <string>

class Animal {
    
    std::string name;
    std::string type;

public:
	virtual void talk() = 0;
    Animal() : name(), type() {}
    Animal(std::string name, std::string type) : name(name), type(type) {
		std::cout << "Animal " << name << " of type " << type << " created." << std::endl;
	}
};

class Dog : public Animal {
public:
    void talk() override {
	std::cout << "Woof!" << std::endl;
}
    Dog() :Animal() {}
    Dog(std::string name, std::string type) :Animal(name, type) {}
};

class Cat : public Animal {
public:
    void talk() override {
        std::cout << "Meow!" << std::endl;
    }
    Cat(std::string name, std::string type) : Animal(name, type) {}
    Cat():Animal() {}

};


int main() {
    Cat Ivan("Ivan","cat");
    Cat Pesho("Pesho","cat");
    Dog Gosho("Gosho","dog");

    Ivan.talk();

    Animal* arrOfAnimals[] = {&Ivan,&Pesho, &Gosho};

    return 0;
}
