#include <iostream>

using namespace std;

int main()
{
    // Membuat pointer untuk array 2 dimensi
    int **array2d;

    // Alokasi memori untuk array 2 dimensi
    array2d = new int*[3];
    for (int i = 0; i < 3; i++)
        array2d[i] = new int[4];

    // Mengisi elemen array 2 dimensi
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            array2d[i][j] = i * 4 + j + 1;

    // Menampilkan nilai elemen array 2 dimensi
    cout << "Nilai elemen array 2 dimensi: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << array2d[i][j] << " ";
        }
        cout << endl;
    }

    //
}