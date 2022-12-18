#include <iostream>

using namespace std;

int main(){
    cout<<"Sample Array 2 Dimensi"<<endl;
    int arr[10][5];
    for (int i = 0; i < 10; i++){
        for (int k = 0; k < 5; k++){
            arr[i][k] = k+1;
        }
    }

    for (int i = 0; i < 10; i++){
        for (int k = 0; k < 5; k++){
            cout<<" index:["<<i<<"]["<<k<<"]:"<<arr[i][k];
        }
        cout<<endl;
    }
    return 0;
}