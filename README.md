# materikuispetruk
#function
#include <iostream>
//#include <cmath>
using namespace std;

// double luas_lingkaran(double r){
//         double phi = M_PI;
//         return (phi*r*r);
//     }

void absen(string nama, int npm){
    cout << "Nama saya :" <<nama<<endl;
    cout << "npm saya :" << npm;
}

int main(){
    // double r;
    // cout<<"r : ";cin>>r;
    // cout<<"luas lingkaran : "<<luas_lingkaran(r)<<endl;

    string nama;
    int npm;
    cout << "Masukan nama : ";
    getline(cin,nama);
    cout << "maukan npm : ";
    cin >> npm;

    absen(nama,npm);
    return 0;
}
