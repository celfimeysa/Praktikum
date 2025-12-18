#include <iostream>
#include <fstream>
using namespace std;

int main(){
fstream myfile;

myfile.open("data.txt" , ios::out);
myfile << "Hello World! nama saya celfi";

myfile.close();
}