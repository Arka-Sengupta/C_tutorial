#include<iostream>
using namespace std;
void bakePizza();
void bakePizza(string topping1);
void bakePizza(string topping1, string topping2);
int main(){
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("pepperoni","chicken");
    return 0;
}
void bakePizza(){
    cout<<"This is your Pizza"<<endl;
}
void bakePizza(string topping1){
    cout<<"This is your "<<topping1<<" pizza"<<endl;
}
void bakePizza(string topping1, string topping2){
    cout<<"This is your "<<topping1<<" and "<<topping2<<" pizza"<<endl;
}