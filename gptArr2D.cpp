#include <iostream>

using namespace std;

int main()
{
    // Membuat array 2 dimensi dengan ukuran 3 baris dan 4 kolom
    int array2d[3][4] = {{1, 2, 3, 4},
                        {5, 6, 7, 8},
                        {9, 10, 11, 12}};

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

    return 0;
}
