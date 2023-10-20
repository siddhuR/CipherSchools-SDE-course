#include<iostream>
using namespace std;

void merge(int * arr, int start, int end)
{
    int mid = (start+end)/2;
    int len1,len2;

    len1=mid-start+1;
    len2=end-mid;

    // creating a new arrays of size which we found.
    int *arr1 = new int[len1];
    int *arr2 = new int [len2];

    // creating the arrays by copying the elements.

    int main_arr_index; // so that we can track of which element of the main array the current array we are currently transversing
    main_arr_index=start;

    int i;
    for (i=0;i<len1;i++) {
        arr1[i] = arr[main_arr_index];
        main_arr_index++;
    }
    for (i=0;i<len2;i++) {
        arr2[i] = arr[main_arr_index];
        main_arr_index++;
    }
    // now we have copied both the arrays, we need to completely sort the main array

    int index_1, index_2;
    index_1=0;
    index_2=0;
    main_arr_index=start;
    while (index_1<len1 && index_2<len2)
    {
        if(arr[index_1]<arr[index_2])
        {
            arr[main_arr_index] = arr1[index_1];
            main_arr_index++;
            index_1++;
        }
        else {
            arr[main_arr_index] = arr2[index_2];
            main_arr_index++;
            index_2++;
        }
    }

    while (index_1<len1) {
        arr[main_arr_index] = arr1[index_1];
        main_arr_index++;
        index_1++;
    }
    while (index_2<len2) {
        arr[main_arr_index] = arr2[index_2];
        main_arr_index++;
        index_2++;
    }
}

void mergeSort(int *arr, int start, int end) {
    int mid;
    int (start>=end);
    
    mid = (start+end)/2;

    mergeSort(arr, start, mid);
    mergeSort(arr, mid-1,end);

}

int main()
{
    int size_arr;

    int arr[5] = {1,5,3,10,4};
    size_arr = 5;

    mergeSort(arr, 0,4);

    int k;
    for (k=0;k<size_arr;k++) {
        cout<<arr[k]<<" ";
    }
    return 0;

}