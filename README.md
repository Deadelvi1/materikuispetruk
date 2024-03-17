### materikuispetruk

##function
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

##array dan pointer
#include <iostream>
using namespace std;

void printArray(int *arr,int size){
    for(int i = 0;i <size;i++){
        cout << arr[i] <<" ";
    }
}

int main(){
    // char name[20];

    // cout << "Please write your name : ";
    // cin >> name;
    // cout << "Hello " << name << "!" <<endl;

    // int myArr[5]={10,20,30,40,50};
    // for(int i = 4 ; i>-1; i--){
    //     cout <<"value off element "<<i<<" is "<<myArr[i]<<endl;
    // }

//array 2 dimensi
//  cout << "input baris : ";
// int baris; cin >> baris;
//  cout << "input kolom : ";
// int kolom;cin >>kolom;

// int angka[baris][kolom];
// for (int i = 0;i<baris;i++){
//     for(int j = 0; j<kolom;j++){
//         cout << "Baris ke " << i << ", kolom ke " << j << ": ";;
//         cin >> angka[i][j];
//     }
// }
// cout << "Matriks A " << baris << "x" <<kolom<< ": \n";
// for(int i = 0;i<baris;i++){
//     for (int j = 0;j<kolom;j++){
//         cout << angka[j][i]<<" ";
//     }
//     cout <<endl;
// }

    //function
    int arr[] = {1,2,3,4,5,6,7};//output panjang array
    int size = sizeof(arr)/sizeof(int);

    printArray(arr,size);
    cout << endl;
    cout << size;

//pointer
    // int angka_1=1;
    // int* ptr1 = &angka_1;
    // cout << "Nilai : "<<*ptr1<<", Alamat Variabel : "<<ptr1;
    // cout << "\nAlamat pointer : "<<&ptr1 <<endl;
    
    // int arr[5] = {10,20,30,40,50};
    // int *ptr = arr;

    // for(int i = 0; i<5 ; i++){
    //     cout << "Value of arr[" << i <<" ] = " << *ptr << endl;
    //     ptr++;
    // }
    return 0;
}
