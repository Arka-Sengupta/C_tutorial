#include <iostream>
using namespace std;
class Human{
    public:
        string name;
        int age;
        string occupation;
        void eat(){
            cout<<name<<" is eating"<<endl;
        }
        void sleep(){
            cout<<name<<" is sleeping"<<endl;
        }
};
int main(){
    Human h1;
    Human h2;
    h1.name = "Rick";
    h1.occupation="Scientist";
    h1.age=75;
    h2.name="Morty";
    h2.occupation="Student";
    h2.age=19;
    h1.eat();
    h1.sleep();
    h2.eat();
    h2.sleep();
}