#include <bits/stdc++.h>
#include "header/doubly_list.h"
using namespace std;

int main()
{
    cout << "Enter The Size Of List :";
    int n;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the List Element : \n";
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    Node *head = convertArr2DLL(arr);

    cout << "|| IN DOUBLY LINKED LIST WHICH OPERTION YOU PERFROM || \n";
    cout << "       || 1 . DELETION  || \n ";
    cout << "      || 2 . INSERTION || \n ";
    int ope;
    cin >> ope;
    switch (ope)
    {
    case 1:
    {
        cout << " || IN DELETION WHICH ||    \n";
        cout << "     1.Delete The Head       \n ";
        cout << "    2.Delete The Tail       \n";
        cout << "     3.Delete The any value  \n   ";

        int e;
        cin >> e;
        if (e == 1)
        {
            head = deleteHead(head);
            cout << "New List :";
            print(head);
            break;
        }
        else if (e == 2)
        {
            head = deleteTail(head);
            cout << "New List :";
            print(head);
            break;
        }
        else if (e == 3)
        {
            cout << " then entere position :";
            int n;
            cin >> n;
            head = deletePostion(head, n);
            cout << "New List :";
            print(head);
            break;
        }

        break;
    }
    case 2:
    {
        break;
    }
    }

    return 0;
}