#include<iostream>
using namespace std;
class Stove{
    private:
        int temp = 0;
    public:
        int getTemp(){
            return temp;
        }
        void setTemp(int temp){
            this->temp = temp;
        }
};
int main(){
    int temp;
    Stove s;
    cout<<"The temperature is "<<s.getTemp()<<endl;
    cout<<"Enter a new temperature value: ";
    cin>>temp;
    s.setTemp(temp);
    cout<<"The new temperature value is : "<<s.getTemp();
    return 0;
}