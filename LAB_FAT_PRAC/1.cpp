#include<iostream>
#include<string>
class Order{
    private:
        std::string items[10];
        int quantities[10];
        int itemCount;
    public:
        Order(){
            itemCount=0;
        }
        void addItem(std::string itemName, int quantity){
            if(itemCount>=5){
                std::cout<<"Limit exceeded"<<std::endl;
            }
            items[itemCount] = itemName;
            quantities[itemCount]=quantity;
            itemCount++;
        }
        int cost(){
            int result=0;
            for(int i=0;i<itemCount;i++){
                if(items[i]=="item1"){
                    result += 5 * quantities[i];
                }else if(items[i]=="item2"){
                    result += 10 * quantities[i];
                }
            }
            return result;
        }
};
int main(){
    Order order;
    std::string itemName;
    int quantity;
    while(true){
        std::cin>>itemName;
        if(itemName=="done"){
            break;
        }
        std::cin>>quantity;
        order.addItem(itemName,quantity);
    }
    std::cout<<"Total Cost: "<<order.cost()<<std::endl;
    return 0;
}