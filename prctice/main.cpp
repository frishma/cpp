




#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Animal {
public:
	virtual void makeSound() const = 0; 
};
class Dog : public Animal {
public:
	void makeSound() const override { 
		cout << "��������" << endl;
	}
};
class Cat : public Animal {
public:
	void makeSound() const override { 
		cout << "��������" << endl;
	}
};
vector<Animal*> operator+(vector<Animal*>& vec, Animal* animal) {
	vec.push_back(animal);
	return vec;
}
class Zoo {
private:
	vector<Animal*> animals; 
public:
	friend void addAnimal(Zoo& zoo, Animal* animal); 
	void showAnimals() const { 
		for (auto animal : animals) {
			animal->makeSound();
		}
	}
};
void addAnimal(Zoo& zoo, Animal* animal) {
	zoo.animals + animal; 
}
int main() {
	Zoo zoo;
	addAnimal(zoo, new Dog());
	addAnimal(zoo, new Cat());
	zoo.showAnimals();
	try {
		throw "�����쳣����";
	}
	catch (const char* e) {
		cerr << "�����쳣��" << e << endl;
	}

	return 0;
}
