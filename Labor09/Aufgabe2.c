#include <stdio.h>
#include <string.h>

typedef struct
{
    int customerID;
    char customerFirstName[20];
    char customerLastName[20];
} Customer;

void printCustomer(Customer a)
{
    printf("%d: %s %s\n", a.customerID, a.customerFirstName, a.customerLastName);
}

int main(int argc, char *argv[])
{
    Customer customer1 = {1, "Hans", "Maurer"};

    Customer customer2;
    scanf("%d %s %s", &customer2.customerID, customer2.customerFirstName, customer2.customerLastName);

    printCustomer(customer1);
    printCustomer(customer2);

    return 0;
}
