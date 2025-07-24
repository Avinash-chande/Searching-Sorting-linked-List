#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convertArrToLl(std::vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *curr = new Node(arr[i]);
        mover->next = curr;
        mover = curr;
    }
    return head;
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *deleteHead(Node *head)
{
    if (head == NULL)
        return head;
    Node *curr = head;
    head = head->next;
    free(curr);
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    free(curr->next);
    curr->next = nullptr;
    return head;
}

Node *delete_val(Node *head, int val)
{
    if (head == NULL)
        return NULL;

    if (head->data == val)
    {
        return deleteHead(head);
    }
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL)
    {
        if (curr->data == val)
        {
            prev->next = prev->next->next;
            free(curr);
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    return head;
}

Node *insertHead(int val, Node *head)
{
    return new Node(val, head);
}
Node *insertTail(int val, Node *head)
{
    if (head == NULL)
        return new Node(val);
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    Node *newNode = new Node(val);
    curr->next = newNode;
    newNode->next = nullptr;
    return head;
}

Node *insertAtPostion(Node *head, int val, int index)
{
    if (head == NULL)
    {
        if (index == 1)
        {
            return new Node(val);
        }
        else
            head;

        if (index == 1)
        {
            return new Node(val, head);
        }
    }
    Node *curr = head;
    for (int i = 1; i < index - 1; i++)
    {
        curr = curr->next;
    }
    Node *newNode = new Node(val);
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}
#endif
