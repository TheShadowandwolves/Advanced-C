#pragma once

#include <stdlib.h>

/// @file LinkedList.h

typedef int ListDataType;

typedef struct Node_t Node;

typedef struct List_t List;

struct Node_t
{
    ListDataType data;
    Node* next;
};

struct List_t
{
    Node* head;
};


 ///@brief Create a List 
List* CreateList();


 /// @brief Free all memory allocated

void FreeList(List* list);


 /// @brief Get the size of the list
 ///@return size_t The size of the list
size_t GetListSize(List* list);


/// @brief Get the list's head
///@return Node* The list's head
Node* GetListHead(List* list);

 ///@brief Get the next node for the given node
 ///@param currentNode The node to get the next node for
 ///@return Node* The next node
Node* GetNextNode(Node* currentNode);


 ///@brief Get the value of the Node
 ///@return ListDataType The value of the Node

 ListDataType GetValue(Node* node);

/// @brief Inserts a new node after the given node.
///@param after The node after which the new node is inserted.
Node* Insert(Node* after, ListDataType newValue);

///@brief Appends a new node to the head of the list.
///@param newValue The value to include.
Node* PushFront(List* list, ListDataType newValue);

/// @brief puts a new Node to the back of list
Node* PushBack(List* list, ListDataType newValue);

/// @brief removes node from front of list
ListDataType PopFront(List* list);

/// @brief removes node from end of list
ListDataType PopBack(List* list);

/// @brief removes node from the given target
void DeleteNode(List* list, Node* target);

/// @brief Deletes a node from the list given the value
Node* DeleteValue(List* list, ListDataType value);


 ///@brief Finds the first node with the given value.
 ///@param list The list to search.
 ///@param value The value to search for.
 ///@return Node* The first node with the given value.
Node* Find(List* list, ListDataType value);