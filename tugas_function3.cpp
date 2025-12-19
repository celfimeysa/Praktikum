#include <iostream>
using namespace std;

int main(){
  int n;
    cout << "formasi 1" << endl;
  for(int i = 1; i < n; i++){
    for(int j = 1; j < n - i; j++){
      cout << ' ';
    }
    for(int j = 0; j < i; j++){
      cout << '*';
    }
    cout << endl;
  }
  
  cout << "formasi 2" << endl;
  for(int a = 5; a > 0; a--){
    for(int b = 0; b < a; b++){
      cout << '*';
    }
    cout << endl;
  }
}