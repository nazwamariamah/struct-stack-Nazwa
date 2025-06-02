#include <iostream>
#include <string>
using namespace std;

int main(){
    struct mahasiswa{
        string nim;
        string nama;
        string alamat;
        float ipk;
    };


    mahasiswa Nazwa;

    Nazwa.nim="C030324050";
    Nazwa.nama="Nazwa Mariamah";
    Nazwa.alamat="JL.Sungai Andai Komp Herlina Perkasa";
    Nazwa.ipk=3.7;

    cout << Nazwa.nim<<"\n";
    cout << Nazwa.nama<<"\n";
    cout << Nazwa.alamat<<"\n";
    cout << Nazwa.ipk<<"\n";
};