#include<iostream>
using namespace std;

class Animal{
    public:
    bool isAlive = true;
    void eat(){
        cout<<"It is eating"<<endl;
    }
    void sleep(){
        cout<<"It is sleeping"<<endl;
    }
};

class Dog : public Animal{
    public:
        bool hasFur = true;
        void bark(){
            cout<<"The dog is barking"<<endl;
        }
};

class Fish : public Animal{
    public:
        bool hasScales = true;
        void sound(){
            cout<<"Fishes don't make any sound"<<endl;
        }
};

int main(){
    Animal animal;
    Fish fish;
    Dog dog;
    animal.eat();
    animal.sleep();
    dog.bark();
    fish.sound();
    dog.eat();
    fish.eat();
    return 0;
}