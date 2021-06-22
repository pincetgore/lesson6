#include <iostream>
#include <math.h>

using namespace std;

int iSqCycle (int arr[], int size);

int main()
{
    //Task1
    int* ptrArr;
    int length;
    cout << "Enter size of your array (positive integer): ";
    cin >> length;
        if (length > 0)
        {
            ptrArr = new int[length];
            iSqCycle (ptrArr, length);
            delete[] ptrArr;
            ptrArr = nullptr;
        }
        else
            cout << "Your value is not proper. Exit" << endl;
return 0;
}

int iSqCycle (int arr[], int size)
{
for (int i=1; i<size; i++)
{
    arr[i]=pow(2,i);
    cout << arr[i]<< endl;
}
return 0;
}
