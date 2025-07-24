#include <bits/stdc++.h>
#include "header/Searching.h"
#include "header/Sorting.h"
#include "header/single_Linked_list.h"

using namespace std;

int main()
{
    int n;
    cout << "   || WHAT DO YOU WANT DO  ||   \n";
    cout << "      || 1.SEARCHING    ||   \n";
    cout << "      || 2.SORTING      ||   \n";
    cout << "      || 3.LINKED LIST  ||   \n";
    cin >> n;

    switch (n)
    {
    case 1:
    {
        int size;
        cout << "Enter the size of vector :";
        cin >> size;

        cout << "Enter the vector element : \n";
        std::vector<int> arr(size);

        for (int i = 0; i < arr.size(); i++)
        {
            std::cin >> (arr[i]);
        }
        int target;
        cout << "Enter the target value : ";
        cin >> target;

        int a;
        cout << "WHICH OPRETION YOU PERFORM :\n";
        cout << "|| 1. LINEAR SEARCH  || \n";
        cout << "|| 2. BINERY SEARCH  || \n";
        cin >> a;

        switch (a)
        {
        case 1:
        {
            cout << "given target value at index of  : " << linear_search(arr, target) << endl;
            break;
        }
        case 2:
        {
            int result = binarySearch(arr, 0, arr.size(), target);
            if (result == -1)
            {
                cout << "is  not present ";
            }
            else
            {
                cout << "is present ";
            }
            break;
        }
        }
        break;
    }

    case 2:
    {
        int s;
        cout << "Enter the size of vector :";
        cin >> s;
        cout << "Enter the vector Element in the unsorted form : \n";
        std::vector<int> arr(s);
        for (int i = 0; i < arr.size(); i++)
        {
            std::cin >> (arr[i]);
        }

        int b;
        cout << "WHICH OPRETION YOU PERFORM :" << endl;
        cout << "|| 1. BUBBLE SORT     || \n";
        cout << "|| 2. SELECTION SORT  || \n";
        cout << "|| 3. INSERTION SORT  || \n";
        cin >> b;

        switch (b)
        {
        case 1:
        {
            cout << "before using bubble sort :";
            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            bubble_sort(arr);
            cout << "after using bubble sort : ";
            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            break;
        }

        case 2:
        {
            cout << "before using selection sort :";
            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            selection_sort(arr);
            cout << "after using selection sort : ";
            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i] << " ";
            }
            break;
        }

        case 3:
        {
            cout << "before using insertion sort :";
            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            selection_sort(arr);
            cout << "after using insertion sort : ";
            for (int i = 0; i < arr.size(); i++)
            {
                cout << arr[i] << " ";
            }
            break;
        }
        }
        break;
    }

    case 3:
    {
        int s;
        cout << "Enter the size Linked list :\n";
        cin >> s;
        cout << "Enter the list element : \n";
        std::vector<int> arr(s);
        for (int i = 0; i < arr.size(); i++)
        {
            std::cin >> (arr[i]);
        }

        int c;
        cout << "WHICH OPRETION YOU PERFORM :" << endl;
        cout << "|| 1. SINGLY LINKED LIST    || \n";
        cout << "|| 2. DOUBLY LINKED LIST (doubly linked list in another file )   || \n";
        cin >> c;

        switch (c)
        {
        case 1:
        {
            int d;
            cout << " || IN SINGLY LIST  WHICH OPERTION YOU PERFROM || \n";
            cout << "          ||1. DELETING OPERTION   || \n";
            cout << "          ||2. INSERTION OPERTION  || \n";
            cin >> d;

            switch (d)
            {
            case 1:
            {
                cout << " || IN SINGLY LIST  WHICH OPERTION YOU PERFROM || \n";
                cout << "     1. DELETE TEH HEAD \n";
                cout << "     2. DELETE THE TAIL \n";
                cout << "     3. DELETE THE SPECIFIC VALUE \n";

                int e;
                cin >> e;

                Node *head = convertArrToLl(arr);
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
                    cout << "enter the target value :";
                    int target;
                    cin >> target;
                    head = delete_val(head, target);
                      cout<<"New List :";
                    print(head);
                    break;
                }
                break;
            }

            case 2:
            {
                cout << " || IN INSERTION SINGLY LIST  WHICH OPERTION YOU PERFROM || \n";
                cout << "    1. INSERT THE HAID \n";
                cout << "    2. INSERT AT THE TAIL  \n";
                cout << "    3. INSERT THE SPECIFIC POSITION \n";

                int f;
                cin >> f;

                Node *head = convertArrToLl(arr);
                if (f == 1)
                {
                    int ele;
                    cout << "Enter the  new head element :";
                    cin >> ele;
                    head = insertHead(ele, head);
                    cout << "your new list :";
                    print(head);
                    break;
                }
                else if (f == 2)
                {
                    cout << "Enter the those element,you will insert into at tail:";
                    int vall;
                    cin >> vall;
                    head = insertTail(vall, head);
                    cout << "your new list :";
                    print(head);
                    break;
                }
                else if (f == 3)
                {
                    cout << "Enter the Element : ";
                    int vall;
                    cin >> vall;
                    cout << "Enter the Position :";
                    int pos;
                    cin >> pos;
                    head = insertAtPostion(head, vall, pos);
                    print(head);
                }
            }
            }
            break;
        }
        }
    }

    break;
    }
    return 0;
}
