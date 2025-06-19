#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct customer
{
    int id;
    char *customerFirstName;
    char *customerLastName;
    struct customer *next;
} customer;

customer *createCustomer(int id, char *customerFirstName, char *customerLastName)
{
    customer *c = malloc(sizeof(customer));

    if (!c)
    {
        perror("malloc failed");
        exit(EXIT_FAILURE);
    }

    c->id = id;
    c->customerFirstName = customerFirstName;
    c->customerLastName = customerLastName;
    c->next = NULL;

    return c;
}

bool addCustomer(customer **root, customer *newCustomer)
{
    if (!*root || !newCustomer)
    {
        printf("addCustomer(..). Fehler! root ist NULL\n");
        return false;
    }

    customer *prev = NULL;
    customer *cur = *root;
    while (cur && cur->id < newCustomer->id)
    {
        prev = cur;
        cur = cur->next;
    }

    newCustomer->next = cur;
    if (prev)
    {
        prev->next = newCustomer;
    }
    else
    {
        *root = newCustomer;
        newCustomer->next = cur;
    }
    return true;
}

void printList(customer *root)
{
    for (const customer *cur = root; cur; cur = cur->next)
    {
        printf("%d: %s %s\n", cur->id, cur->customerFirstName, cur->customerLastName);
    }
}

int customerCount(customer *root)
{
    int cnt = 0;
    while (root)
    {
        cnt++;
        root = root->next;
    }
    return cnt;
}

void clearList(customer *root)
{
    if (!root)
    {
        return;
    }

    customer *cur = root;
    while (cur)
    {
        customer *next = cur->next;
        free(cur);
        cur = next;
    }
}

int main(int argc, char *argv[])
{
    customer *root = NULL;
    customer *new_customer = createCustomer(1, "Hans", "Maurer");  // neuen Knoten erstellen ...

    if (!addCustomer(&root, new_customer))  // ... und versuche, ihn zur leeren Liste hinzuzufügen
    {
        root = new_customer;  // bei Fehlschlag ersten Knoten manuell setzen
    }

    addCustomer(&root, createCustomer(3, "Tatjana", "Roth"));
    addCustomer(&root, createCustomer(2, "Anna-Maria", "Schmidt"));

    printf("Momentan sind %u Kunden erfasst.\n", customerCount(root));
    printList(root);

    clearList(root);
    root = NULL;

    printf("Momentan sind %u Kunden erfasst.\n", customerCount(root));
    printList(root);
    return 0;
}
