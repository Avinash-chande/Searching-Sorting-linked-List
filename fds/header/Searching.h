#ifndef SEARCHING_H
#define SEARCHING_H

#include <iostream>
#include <bits/stdc++.h>

int linear_search(std::vector<int> &arr, int val)
{
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == val)
            break;
        cnt++;
    }
    return cnt;
}

int binarySearch(std::vector<int> &arr, int low, int high, int x)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}
#endif