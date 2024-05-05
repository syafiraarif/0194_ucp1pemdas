//1. int bilangan; , string status; , float Luas; .
// 
//2. contoh implementasi dari prosedur adalah voidInputData(){memasukan data yang ingin di input};
//   dan contoh dari implementasi fungsi adalah int HitungLuas(){masukan rumus cara menghitung sebuah luas persegi};
// 
//3. contoh implementasi dari looping 
//   for(kondisi awal; kondisi akhir; pengubah kondisi){
//   proses yang diulang}
// 
//4. conditional statement adalah mengendalikan program sesuai situasi yang terjadi pada sebuah data dengan cara diuji menggunakan operatorr perbandingan. contoh implementasinya 
//   yaitu jika ada 3 kondisi maka apa yang harus dilakukan 
//   if(kondisi yang terjadi){status yang diberikan sesuai kondisi}
//   else if(kondisi){status yang diberikan }
//   else(kondisi){status yang diberikan}
// 
//5. contoh implementasi struct 
//   struct nama-struct {
//   buat akses modifier sesuai kebutuhan
//   deklarasi variabel yang digunakan
//   
//   void input(){}
//   void output(){}
//   };


#include <iostream> 
using namespace std;

struct KualitasUdara 
{
    int nilaisensor1, nilaisensor2, nilaisensor3, nRerata;
    string kota;
    string status;
};

int main() {
    
    KualitasUdara KU[3];
    for (int i = 0; i < 3; i++){
        cout << "Data Ke- " << (i + 1) << ": " << endl;
        cout << "Nama Kota : ";
        cin >> KU[i].kota;
        cout << "Masukan Nilai sensor pertama : ";
        cin >> KU[i].nilaisensor1;
        cout << " Masukan nilai sensor kedua : ";
        cin >> KU[i].nilaisensor2;
        cout << "Masukan nilai sensor ketiga : ";
        cin >> KU[i].nilaisensor3;
        cout << "statusnya aadalah : ";
        cin >> KU[i].status;

    }
    

    for (int i = 0; i < 3; i++) {
        cout << endl;
        cout << "Data daftar kualitas udara Ke- " << (i + 1) << ":" << endl;
        cout << "\n Nama Kota : " << KU[i].kota;
        cout << "\n sensor 1 : " << KU[i].nilaisensor1;
        cout << "\n sensor 2 : " << KU[i].nilaisensor2;
        cout << "\n sensor 3 : " << KU[i].nilaisensor3;
        cout << endl;
    }
    return 0;

}

    
