#include <iostream>
#include <string>
using namespace std;

template<class T, class E>
class DataType{
    public:
        void print(T t, E e){
            cout<<"Size Of "<<t<<" is : "<<sizeof(t)<<" and size Of "<<e<<" is : "<<sizeof(e)<<endl;
        }
};
int main(){
    DataType<int,char>d1;
    DataType<float,int>d2;
    DataType<char,string>d3;
    d1.print(12,'C');
    d2.print(23.0,34);
    d3.print('A',"Arka");
}