#include <iostream>
using namespace std;
int gaji=7500,a=10000,b=13000,hasil;
int pokok(int jjk){
    return hasil=gaji*jjk;
}
int lembur(int jjk){
    return hasil=gaji*1.5*(jjk-8);
}
int makan(){
    return a;
}
int transport(){
    return b;
}
int main(){
    int NIP,jjk;
    string nama;
    cout << "Masukkan NIP: ";
    cin >> NIP;
    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "Masukkan jam kerja anda: ";
    cin >> jjk;
    system("cls");
    cout << "\nNomor Identitas Pegawai: " << NIP;
    cout << "\nNama pegawai           : " << nama;
    cout << "\nJumlah jam kerja       : " << jjk;
    cout << "\n==================================";
    if(jjk<=8){
        cout << "\nGaji pokok     : " << pokok(jjk);
        cout << "\nGaji lembur    : -";
        cout << "\nUang makan     : -";
        cout << "\nUang transport : -";
        cout << "\n==================================\n";
    }else if(jjk==9){
        cout << "\nGaji pokok     : " << pokok(8);
        cout << "\nGaji lembur    : " << lembur(jjk);
        cout << "\nUang makan     : " << makan();
        cout << "\nUang transport : -";
        cout << "\n==================================\n";
    }else{
        cout << "\nGaji pokok     : " << pokok(8);
        cout << "\nGaji lembur    : " << lembur(jjk);
        cout << "\nUang makan     : " << makan();
        cout << "\nUang transport : " << transport();
        cout << "\n==================================\n";
    }
    return 0;
}
