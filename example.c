/*Develop a C program to manage a dynamic list of customer orders in a restaurant system using
dynamic memory allocation. Define an Order structure with fields orderID, customerName, item,
quantity, and price. Use malloc, realloc, and free to handle memory allocation for an array of Order
records that can expand as new orders are added. Implement functions to add an order, view all
orders, calculate the total cost for each order, and delete an order based on orderID. In main(, allow
the user to interactively manage orders, demonstrating efficient use of dynamic memory allocation
to handle a varying number of records.*/
#include<stdio.h>
#include<stdlib.h>
struct Order{
    int orderID;
    char customerName;
    int item;
    int quantity;
    float price;
};
void addOrder();
void viewOrder();
void totalCost();
void deleteOrder(int orderID);
int main(){
    int* arr;
    struct Order order;
    printf("_-_-_-Welcome to Resto What do you Want-_-_-_\n");
    printf("Enter 1 to add order\n");
    printf("Enter 2 to view order\n");
    printf("Enter 3 to view total cost\n");
    printf("Enter 4 to view delete order\n");
    int choice;
    printf("Enter choice : ");
    scanf("%d",&choice);
    switch()
    return 0;
}