#include <string>
#include<iostream>
using namespace std;

class Animal{
private:
	//properties
	string name;
	string breed;

	int age;

public:
	
	//methods
	void run(){cout<<"Status: Running"<<endl;}
	void eat(){cout<<"Status: Eating"<<endl;}
	void sleep(){cout<<"Status: Sleeping"<<endl;}

	//age
	void setAge(int age){this->age = age;}//setter
	int getAge(){return this->age;}//getter

	//name
	void setName(string name){this->name = name;}//setter
	string getName(){return this->name;}//getter

	//breed
	void setBreed(string breed){this->breed = breed;}//setter
	string getBreed(){return this->breed;}//getter
};
	class Dog: public Animal {public: void bark(){cout<<"Status: Barking"<<endl;}};
	class Cat: public Animal {public: void meow(){cout<<"Status: Meowing"<<endl;}};
	
