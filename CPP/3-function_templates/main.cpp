#include <iostream>
using namespace std;
template <typename T>
T myMax(T x, T y){
    return (x>y)?x:y;
}
int main(){
    cout<<myMax(1,2)<<endl;
    cout<<myMax(1.3,2.1)<<endl;
    cout<<myMax('c','a')<<endl;
    return 0;
}