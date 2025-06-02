#include <iostream>
#include <string>
using namespace std;

    struct mahasiswa{
        string nim;
        string nama;
        string alamat;
        float ipk;
    };

    void inputdata(mahasiswa *prodi_TI){
    cout << "masukkan nama : ";
    cin >> prodi_TI->nama;
    cout << "masukkan nim : ";
    cin >> prodi_TI->nim;
    cout << "masukkan alamat : ";
    cin >> prodi_TI->alamat;
    cout << "masukkan ipk : ";
    cin >> prodi_TI->ipk;
}

int main(){
    mahasiswa Nazwa;

    Nazwa.nim="C030324050";
    Nazwa.nama="Nazwa Mariamah";
    Nazwa.alamat="JL.Sungai Andai Komp Herlina Perkasa";
    Nazwa.ipk=3.7;

    cout <<"Nim: "<< Nazwa.nim<<"\n";
    cout <<"Nama: "<< Nazwa.nama<<"\n";
    cout <<"Alamat: "<< Nazwa.alamat<<"\n";
    cout <<"ipk: "<< Nazwa.ipk<<"\n";

    
};