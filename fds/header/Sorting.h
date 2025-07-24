#ifndef SORTING_H
#define SORTIN_H

#include <iostream>
#include <bits/stdc++.h>

std::vector<int> bubble_sort(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }

        if (didSwap == 0)
            break;
    }
    return arr;
}

std::vector<int> selection_sort(std::vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int small = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[small] > arr[j])
            {
                small = j;
            }
        }
        int temp = arr[small];
        arr[small] = arr[i];
        arr[i] = temp;
    }
    return arr;
}

std::vector<int> insertion_sort(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    return arr;
}
#endif