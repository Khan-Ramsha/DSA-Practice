// finding missing element in array which contains duplicate
#include <iostream>
using namespace std;
void findMissing(int *a, int n)
{
    // visited method
    for (int i = 0; i < n; i++)
    {
        int index = abs(a[i]);
        if (a[index - 1] > 0) // if not visited
        {
            a[index - 1] *= -1;
        }
    }
    cout << "Array elements after marking neg. positive nos index+1 are missing element"
         << "";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    // all positive indexes are missing
    cout << "Missing Elements are:"
         << " ";

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            int element = i + 1;
            cout << element << " ";
        }
    }
}

void sortingSwapping(int *a, int n)
{
    int i = 0;
    while (i < n)
    {
        int index = a[i] - 1;
        if (a[i] != a[index])
        {
            swap(a[i], a[index]);
        }
        else
        {
            ++i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {1, 3, 5, 3, 4};
    int n = sizeof(a) / sizeof(int);
    // findMissing(a,n); //expected output=> 3
    sortingSwapping(a, n);
}
