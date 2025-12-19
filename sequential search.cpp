#include <iostream>
using namespace std;

int main(){
    string arr[] = {"sheila", "vemy", "meysa", "siska", "gallea", "elisa", "dila", "qeysha"};
    int size = sizeof(arr) / sizeof(arr[0]);
    bool find = false;

    string target = "meysa";

    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            cout << "nama " << arr[i] << " ditemukan pada index ke-" << i;
            find = true;
            break;
        }
    }

    if (!find){
        cout << "data tidak ditemukan";

    }
    return 0;
}