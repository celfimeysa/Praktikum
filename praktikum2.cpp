// #include <iostream>
// using namespace std;

// int main() {
//   string nama;
//   string NPM;
//   int umur;
  
//   cin >> nama;
//   cin >> NPM;
//   cin >> umur;
  
//   cout << "nama " << nama << endl;
//   cout << "NPM " << NPM << endl;
//   cout << "umur " << umur << endl;
  
//   return 0;
// }

#include <iostream>
using namespace std;

int main() {
  int a = 2;
  int b = 3;
  int c = a + b;
  
  cout << "nilai a : " << a << endl;
  cout << "nilai b : " << b << endl;
  cout << "nilai c : " << c << endl;
  
  a = a + b; // sama dengan a += b
  
  cout << "nilai a setelah (a = a +b) : " << a << endl;
  
  return 0;
}