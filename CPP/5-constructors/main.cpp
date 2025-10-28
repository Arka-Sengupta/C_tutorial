#include<iostream>
using namespace std;
class Car{
    public:
        string brand;
        string color;
        int age;
        void display(){
            cout<<"That is a "<<color<<" "<<brand<<" of "<<age<<" years"<<endl;
        }
    Car(string brand, string color, int age){
        this->age=age;
        this->brand=brand;
        this->color=color;
    }
};
main(){
    Car car1("Tata","red",10);
    Car car2("Maruti","white",15);
    car1.display();
    car2.display();
    return 0;
}