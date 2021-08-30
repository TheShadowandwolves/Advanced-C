// Ex06.04.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include "LinkedList.h"
/// @brief prints all values in list
/// @param list is the list!
void PrintList(List* list)
{
    printf("List: ");
    Node* current = GetListHead(list);
    while (current != NULL)
    {
        printf("%d ", GetValue(current));
        current = GetNextNode(current);
    }
    printf("\n");

}
int main()
{
    // Create a linked list
    List* list = CreateList();
    int searchNum = 0;

    PushFront(list, 1);
    PushFront(list, 2);
    PushFront(list, 3);
    PushFront(list, 4);
    PushFront(list, 5);
    PushFront(list, 6);
    PushFront(list, 7);
    PushFront(list, 8);
    PushFront(list, 9);
    PushBack(list, 10);
    // prints list before changes
    PrintList(list);
    // Find value of given number
    printf_s("Enter a number that should be found and deleted: \n");
    scanf_s("%d", &searchNum);
    Node* node = Find(list, searchNum);
    // if not empty - its found!!!
    if (node != NULL)
    {
        printf("Found value %d at %p\n", searchNum, node);
    }

    // Remove value 
    DeleteValue(list, searchNum);

    // Find value 
    node = Find(list, searchNum);
    if (node == NULL)
    {
        printf("Value %d was removed\n", searchNum);
    }

    // Pop front
    PopFront(list);

    // Pop back
    PopBack(list);

    // Print the size of the list
    printf("Size of list: %lu\n", GetListSize(list));

    // Print the elements of the list after changes
    PrintList(list);
    // deallocate memory - must be done!!!!!!!!!!
    FreeList(list);

    return 0;
}