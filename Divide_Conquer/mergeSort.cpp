#include<iostream>
#include<vector>
using namespace std;

// Merge Function
void merge(int arr[], int si, int ei, int mid)
{
    vector<int> temp;

    int i = si;        // Left half
    int j = mid + 1;   // Right half

    while(i <= mid && j <= ei)
    {
        if(arr[i] <= arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    // Remaining elements of left half
    while(i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    // Remaining elements of right half
    while(j <= ei)
    {
        temp.push_back(arr[j]);
        j++;
    }

    // Copy back to original array
    int x = 0;
    for(int idx = si; idx <= ei; idx++)
    {
        arr[idx] = temp[x++];
    }
}

// Merge Sort Function
void mergeSort(int arr[], int si, int ei)
{
    if(si >= ei)
        return;

    int mid = si + (ei - si) / 2;

    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);

    merge(arr, si, ei, mid);
}

// Print Function
void printArr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

 
int main()
{
    int arr[] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    cout << "Original Array: ";
    printArr(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    printArr(arr, n);

    return 0;
}