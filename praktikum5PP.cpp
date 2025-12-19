#include <iostream>
using namespace std;

int main(){
  int tanggal[12] = {3, 8, 15, 6, 27, 19, 13, 20, 31, 22, 4, 10};
  cout << "tanggal" << tanggal[9];
  
  string hari[7] = {"senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"};
  cout << "hari" << hari[4] << endl;
  
  char namaP[] = { 'k', 'a', 'i'};
  cout << "nama panggilan (char) : " << namaP << endl;
  
  string namaL = "kai penakluk dunia";
  cout << "nama lengkap (string) : " << namaL << endl << endl;
  
  int i = 0;
  while( i < 7 ){
    cout << "hari ke-" << (i + 1) << " : " << hari[i] << endl;
    i++;
  }
  cout << endl;
  
  int panjang = sizeof(hari) / sizeof(hari[0]);
  cout << "panjang array hari adalah : " << panjang << endl;
  cout << "kai menaklukan dunia dalam " << panjang << "hari." << endl << endl;
  
  int jumlahhari = 7;
  int penjualan[jumlahhari];
  int totalpenjualan = 0;
  float ratarata;
  
  cout << "masukkan penjualan berapa porsi chiken katsu selama " << jumlahhari << "hari:" << endl;
  for (int j = 0; j < jumlahhari; j++){
    cout << "penjualanhari" << hari[j] << " : ";
    cin >> penjualan[j];
    totalpenjualan += penjualan[j];
  }
  
  ratarata = (float)totalpenjualan / jumlahhari;
  cout << "total porsi chiken katsu yang telah terjual : " << totalpenjualan << "porsi." << endl;
  cout << "rata-rata penjualan chiken katsu selama" << jumlahhari << "hari adalah" << ratarata << "porsi." << endl << endl;
  
  int matriks[100][100];
  int jumlahbaris, jumlahkolom;
  
  cout << "masukkan jumlah bulan dan tanggal buka kedai chiken katsu : " << endl;
  cout << "input jumlah bulan (baris matriks) : ";
    cin >> jumlahbaris;
  cout << "input jumlah tanggal (kolom matriks) : ";
  cin >> jumlahkolom;
  
  for(int x = 0; x < jumlahbaris; x++){
    for(int y = 0; y < jumlahkolom; y++){
      cout << "baris" << i + 1 << ", kolom" << y + 1 << "=";
      cin >> matriks[x][y];
    }
  }
  
  cout << "kedai chiken katsu buka selama : " << jumlahbaris << "bulan di tanggal tertentu." << endl;
  
  for(int x = 0; x < jumlahbaris; x++){
    for(int y = 0; y < jumlahkolom; y++){
      cout << matriks[x][y] << " ";
    }
    cout << endl;
  }
  
  return 0;
                  }
