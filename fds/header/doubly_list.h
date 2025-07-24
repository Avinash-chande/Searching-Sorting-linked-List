#ifndef DOUBLY_LIST_H
#define DOUBLY_LIST_H

#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *convertArr2DLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
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
}
Node *deleteHead(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *prev = head;

    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    free(prev);
    return head;
}
Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *newTail = tail->back;
    tail->back = nullptr;
    newTail->next = nullptr;
    free(tail);
    return head;
}

Node *deletePostion(Node *head, int k)

{ // If the list is empty or has only one node, return null
    if (head == NULL)
        return NULL;

    int cnt = 1;
    Node *temp = head;

    while (temp != NULL && cnt < k)
    {
        temp = temp->next;
        cnt++;
    }
    Node *prev = temp->back;
    Node *front = temp->next;
    // check three case
    if (prev == NULL && front == NULL)
        return NULL;
    else if (prev == NULL)
        return deleteHead(head);
    else if (front == NULL)
        return deleteTail(head);
    // then connect the prev->next to front and front->back to previous
    prev->next = front;
    front->back = prev;

    // store nullptr of temp back and next
    temp->back = temp->next = nullptr;
    delete temp;
    return head;
}

#endif
