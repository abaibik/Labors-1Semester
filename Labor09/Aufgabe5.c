#include <stdio.h>
#include <stdlib.h>

typedef struct numberItem
{
    int data;
    struct numberItem *next;
} numberItem;

numberItem *createItem(int number)
{
    numberItem *newItem = (numberItem *)malloc(sizeof(numberItem));
    newItem->data = number;
    newItem->next = NULL;
    return newItem;
}

void append(numberItem **root, int number)
{
    if (*root == NULL)
    {
        *root = createItem(number);
    }
    else
    {
        numberItem *cur = *root;

        while (cur->next != NULL)
        {
            cur = cur->next;
        }

        cur->next = createItem(number);
    }
}

void print(numberItem *root)
{
    if (!root)
    {
        return;
    }

    for (numberItem *cur = root; cur != NULL; cur = cur->next)
    {
        printf("%d \n", cur->data);
    }
}

void clear(numberItem **root)
{
    if (!*root)
    {
        return;
    }
    numberItem *cur = *root;
    numberItem *next;

    while (cur != NULL)
    {
        next = cur->next;
        free(cur);
        cur = next;
    }
    *root = NULL;
}

int main()
{
    numberItem *root = NULL;
    append(&root, 42);
    append(&root, 1);
    append(&root, 2);
    append(&root, 3);
    print(root);
    clear(&root);

    return 0;
}