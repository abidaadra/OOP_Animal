#include<string>
#include<iostream>
#include "animal.h"
using namespace std;
int main(){
	//barkie is an object of class Dog
	Dog barkie;
	Cat charlie;

	barkie.setAge(20);// dog's age is 20
	cout<<"Dog's age is: "<<barkie.getAge()<<endl;//prints 20

	barkie.setName("Barkie");//dog's name is barkie
	cout<<"Dog's name is: "<< barkie.getName()<<endl;//prints barkie

	barkie.setBreed("Husky");//dog's breed is husky
	cout<<"Dog's breed is: "<< barkie.getBreed()<<endl;//prints husky

	barkie.bark();

	cout<< endl;

	barkie.sleep();
	barkie.eat();
	barkie.run();

	cout<<endl;

	charlie.setAge(20);// cat's age is 20
	cout<<"Cat's age is: "<<charlie.getAge()<<endl;//prints 20

	charlie.setName("Charlie");//cat's name is charlie
	cout<<"Cat's name is: "<< charlie.getName()<<endl;//prints barkie

	charlie.setBreed("Scottish");//cat's breed is scottish
	cout<<"Cat's breed is: "<< charlie.getBreed()<<endl;//prints scottish

	charlie.meow();

	cout<<endl;


system("pause");


}
