#include <iostream>
#include <math.h>
#include <fstream>
#include <string>

using namespace std;

int iSqCycle (int arr[], int size);
int CreateFiles (string name1, string name2);
int FileMerge (string header, string name1, string name2);

int main()
{
//    //Task1
//    int* ptrArr;
//    int length;
//    cout << "Enter size of your array (positive integer): ";
//    cin >> length;
//        if (length > 0)
//        {
//            ptrArr = new int[length];
//            iSqCycle (ptrArr, length);
//            delete[] ptrArr;
//            ptrArr = nullptr;
//        }
//        else
//            cout << "Your value is not proper. Exit" << endl;


//    //Task2
//    int** ptrArrMatrix;
//    int m = 4;
//    int n = 4;

//    // array memory allocation
//    ptrArrMatrix = new int * [m];
//    for (int i = 0; i < m; i++) {
//        ptrArrMatrix[i] = new int[n];
//    }

//    // array filling
//    cout << "Your random array 4x4: " << endl;
//    for (int i=0; i<m; i++){
//        for (int j=0; j<n; j++){
//            ptrArrMatrix[i][j]=arc4random();
//            cout << ptrArrMatrix[i][j] << " ";
//    }
//        cout << endl;
//   }

//    // freing memory
//    for (int i = 0; i < m; i++) {
//    delete [] ptrArrMatrix[i];
//    }
//    delete[] ptrArrMatrix;
//    ptrArrMatrix = nullptr;

    //Task3 and Task4
    string name1, name2, header;
    cout << "Enter the name of the first file: ";
    cin >> name1;
    name1 = name1+".txt";
    cout << "Enter the name of the second file: ";
    cin >> name2;
    name2 = name2+".txt";
    cout << "Enter the name of the merged file: ";
    cin >> header;
    header = header+".txt";

    CreateFiles (name1, name2);
    FileMerge(header,name1,name2);

    return 0;
}

int FileMerge (string header, string name1, string name2)
{
    ofstream fsub(header);
    ifstream fin1(name1);
    ifstream fin2(name2);

    if (fin1.is_open())
    {
        const size_t size = 1000;
        char buf1[size];
        while (!fin1.eof())
            {
            fin1.getline(buf1, size);
            fsub << buf1;
            }

        fin1.close();
        }
    else
        {
        cout << "Error. Can't open a file";
        }

    if (fin2.is_open())
    {
        const size_t size = 1000;
        char buf2[size];
        while (!fin2.eof())
            {
            fin2.getline(buf2, size);
            fsub << buf2;
            fsub.close();
            }
        fin2.close();
        }
    else
        {
        cout << "Error. Can't open a file";
        }
    return 0;
}

int CreateFiles (string name1, string name2)
{
    ofstream f1out(name1);
    f1out << "1. In my junior year of high school, this guy asked me on a date. He rented a Redbox movie and made a pizza. We were watching the movie and the oven beeped so the pizza was done. He looked me dead in the eye and said, “This is the worst part.” I then watched this boy open the oven and pull the pizza out with his bare hands, rack and all, screaming at the top of his lungs. We never had a second date.";
    f1out.close();

    ofstream f2out(name2);
    f2out <<"2. My whole class once got detention because I drew a penis with a glue stick on the whiteboard and when the teacher went to wipe off the board all the fluff came off and stuck to the glue. I never got in trouble for it because my whole class found it too funny to tell the teacher it was me.";
    f2out.close();
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
