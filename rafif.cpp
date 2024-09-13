#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    char check, choose;
    int a, b;

    cout << "Program mencari KPK dan FPB" << endl;
    cout << "Apakah anda ingin memulai? (y/n)" << endl;

    while(cin >> check){
        if(check == 'y'){
            cout << "Masukkan nilai pertama dan kedua \n";
            cout << "nilai pertama : "; cin >> a;
            cout << "nilai kedua : "; cin >> b;
            cout << "Apa yang ingin anda cari?" << endl;
            cout << "1. FPB\t\t 2. KPK\t\t 3. Keduanya" << endl;
            cin >> choose;
            switch(choose){
                case '1' :
                    cout << "FPB nya adalah : " << __gcd(a, b) << endl;
                    break;
                case '2' :
                    cout << "KPK nya adalah : " << (a * b)/__gcd(a, b) << endl;
                    break;
                case '3' :
                    cout << "Nilai FPB : " << __gcd(a, b) << endl;
                    cout << "Nilai KPK : " << (a*b)/__gcd(a, b) << endl;
                    break;
                default :
                    cout << "salah input, ulangi dari awal!" << endl;
                    break;
            }
            cout << "Ingin bermain lagi? (y/n)" << endl;
        }else if(check == 'n'){
            cout << "Terima kasih sudah bermain mencari FPB dan KPK!" << endl;
            break;
        }else{
            cout << "Inputan anda salah, ingin mencoba lagi? (y/n)" << endl;
        }
    }
    return 0;
}