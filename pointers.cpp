#include <iostream>
using namespace std;

void fillArray(int a[], int size);
int search(int a[], int size, int target);
typedef int *arrayPointer;
int main()
{
    int arraySize, target;
    printf("enter array size");
    cin >> arraySize;
    arrayPointer a;
    a = new int[arraySize];
    fillArray(a, arraySize);
    printf("Enter target value to search for\n");
    cin >> target;
    int result = search(a, arraySize, target);
    if ((result == -1))
    {
        cout << "Target not found\n";
    }
    else
    {
        cout << "Target is found at index " << result;
    }
    delete[] a;
}
void fillArray(int a[], int size)
{
    int next, index = 0;
    printf("Enter first array input\n");
    for (int index = 0; index < size; index++)
    {
        printf("Enter next number\n");
        cin >> a[index];
    }
}
int search(int a[], int size, int target)
{
    bool found = false;
    int index = 0;
    while ((!found) && (index < size))

        if (a[index] == target)

            found = true;

        else

            index++;
    if (found)
        return index;
    else
        return -1;
}