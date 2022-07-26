#include <iostream>
using namespace std;

int main()
{
    int arraySize, next;
    int index = 0;
    printf("Enter  array size\n");
    cin >> arraySize;
    int a[arraySize];
    printf("Enter first array element\n");
    cin >> next;
    while ((next >= 0) && (index < arraySize))
    {
        printf("Enter next array element\n");
        cin >> next;
        a[index] = next;
        index++;
    }
    int numberUsed = index;

    // cout << a[index] << " ";
    // cout << endl;
    printf("The reversed array is\n");

    for (index = numberUsed - 1; index >= 0; index--)
    {

        cout << a[index] << " ";
    }
}