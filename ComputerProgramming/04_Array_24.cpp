#include <iostream>
#include <algorithm>
using namespace std;

void print(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int find_last_unsorted_index(int arr[], int sorted_arr[], int size) 
{
    while (arr[size - 1] == sorted_arr[size - 1])
    {
        size--;
    }
    return size - 1;
}

int find_max_index(int arr[], int limit) 
{
    return max_element(arr, arr + limit + 1) - arr;
}

int main() 
{
    int n;
    cin >> n;

    int pancake[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> pancake[i];
    }

    int sorted_pancake[n];
    copy(pancake, pancake + n, sorted_pancake);
    sort(sorted_pancake, sorted_pancake + n);

    print(pancake, n);

    while (!is_sorted(pancake, pancake + n)) 
    {
        int last_unsorted_index = find_last_unsorted_index(pancake, sorted_pancake, n);
        int max_index = find_max_index(pancake, last_unsorted_index);

        if (pancake[0] != pancake[max_index]) 
        {
            reverse(pancake, pancake + max_index + 1);
            print(pancake, n);
        }

        reverse(pancake, pancake + last_unsorted_index + 1);
        print(pancake, n);
    }
}