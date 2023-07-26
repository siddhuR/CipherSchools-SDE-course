#include <iostream>
using namespace std;

void simplesearch(int *arr, int l, int r, int val)
{
    for (int i = l; i <= r; i++) // Start the loop from index l to r (inclusive)
    {
        if (arr[i] == val)
        {
            cout << "Congratulations, your value is present in the array" << endl;
            return;
        }
    }

    cout << "Sad!!, your value is not present in the array" << endl;
}

int binarysearch(int *arr, int l, int r, int val)
{
    int middle = l + (r - l) / 2; // Calculate the middle index correctly

    if (r >= l)
    {
        if (arr[middle] == val)
        {
            return 1;
        }
        else if (arr[middle] > val)
        {
            return binarysearch(arr, l, middle - 1, val);
        }
        else
        {
            return binarysearch(arr, middle + 1, r, val);
        }
    }

    return -1;
}

int main()
{
    int arr[7] = {1, 3, 10, 2, 4, 7, 5};
    int size = 7;

    simplesearch(arr, 0, 6, 13);
    simplesearch(arr, 0, 6, 10);

    if (binarysearch(arr, 0, 6, 1) == -1)
    {
        cout << "Your value is not present in the array" << endl;
    } else cout<< "Your value is present in the array" << endl;

    return 0;
}
