// Soal 1 : Stack

struct Mahasiswa{
    string nama;
    double ipk;
    Mahasiswa(){}

    Mahasiswa(string a, double b){
        nama = a;
        ipk = b;
    }
};
struct MyStack{
    static const int STACK_SIZE = 10;
    Mahasiswa item[STACK_SIZE];
    int top;

    MyStack(){
        top = -1;
    }
    bool isEmpty(){
        return top < 0;
    }
    bool isFull() {
        return top >= STACK_SIZE - 1;
    }
    bool push(Mahasiswa mhs) {
        if (isFull()) {
            cout << "Stack is full. Cannot push item." << endl;
            return false;
        } else {
            item[++top] = mhs;
            return true;
        }
    }
    bool pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop item." << endl;
            return false;
        } else {
            top--;
            return true;
        }
    }

    Mahasiswa peek() {
        if (!isEmpty()) {
            return item[top];
        } else {
            cout << "Stack is empty. No items to peek." << endl;
            return Mahasiswa(); // Return default Mahasiswa
        }
    }
};


// Soal 4 : Buat fungsi dengan nama hapusBelakang(), 
//menghapus data depan (head), cetak "List kosong" jika tidak ada dlm List
//Dengan demikian kode untuk membuat fungsi tambahBelakang() diluar struct Mylist

void MyList::tambahBelakang(int databaru){
    Node *baru;
    baru = new Node;
    baru->data = databaru;
    baru->next = NULL;
    if(isEmpty()){
        head = baru;
    }else{
        Node *bantu = head;
        while (bantu->next != NULL){
            bantu = bantu -> next;
        }
        bantu -> next = baru;
    }

}
void MyList::hapusDepan(){
    if(head == NULL){
        cout<<"List Kosong"<<endl;
    }else{
        Node *hapus;
        hapus = head;
        head = head->next;
        delete hapus;
    }
}
void MyList::hapusBelakang(){
    if(isEmpty()){
        cout<<"List Kosong"<<endl;
    }else if( head->next == NULL){
        head = NULL;
    }else{
        Node *bantu = head;
        Node *prev = NULL;
        while(bantu->next != NULL){
            prev = bantu;
            bantu = bantu->next;
        }
        prev->next = NULL;
        delete bantu;
    }
}


// Soal 6 : Buat program input array of c-string sebanyak n dengan panjang maks. 20 char.
// akan menampilkan c-string dan panjang c-string

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    char arr[n];
    cin>> n;
    for(int i = 0; i < n; i++){
        cin.getline(arr[i], 21);
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" "<<strlen(arr[i])<<endl;
    }
}

// Soal 7 : Buat tipe data bentukan class dengan nama persegi yang memiliki public atribut
// atribut sisi = double, fungsi keliling() = double, luas() = double

#include <iostream>
using namespace std;

class Persegi{
    public:
    double sisi;
    double luas(){
        return sisi*sisi;
    }
    double keliling(){
        return 4 * sisi;
    }
};

// Soal 8 : Buat fungsi sum() dengan parameter : pointer int dan nilai int

int sum( int* x, int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total += x[i];
    }
    return total;
}

// Soal 9 : Terdapat N buah batu diberi nomor 1,2,..,N. i (1 <= i <= N)
// tentukan total biaya minimum yang mungkin terjadi sebelum katak mencapai batu N
// batasan : 2 <= N <+ 10^5. 1 <= hi <= 10^4
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int>height(N);
    for(int i = 0; i<N; i++){
        cin>>height[i];
    }
    vector<int> dp(N);
    dp[0] = 0;
    dp[1] = abs(height[1] - height[0]);

    for(int i = 2; i < N; i++){
        dp[i] = min(dp[i-1]+abs(height[i]-height[i-1]), dp[i-2]+abs(height[i]- height[i-2]));
    }
    cout<<dp[N-1]<<endl;
    return 0;
}


// Soal 10 : Terdapat N buah batu diberi nomor 1,2,..,N. i (1 <= i <= N)
// tentukan total biaya minimum yang mungkin terjadi sebelum katak mencapai batu N
// batasan : 2 <= N <+ 100,000. 1 <= K <= 100. 1 <= hi <= 10,000

#include <iostream>
#include <vector>
#include <climits>
#include <cmath>

using namespace std;
int main(){
    int N, K;
    cin>>N>>K;

    vector<int>height(N);
    for(int i = 0; i < N; i++){
        cin>>height[i];
    }
    vector<int>minCost(N,INT_MAX);
    minCost[0] = 0;
    for(int i = 2; i < N; i++){
        for(int j = 1; j <= K && i-j >=0; j++){
            int cost = abs(height[i]-height[i-j]) + minCost[i-j];
            minCost[i] = min(minCost[i], cost);
        }
    }
    cout<<minCost[N-1]<<endl;
    return 0;
}
