#include<iostream>
#define pi 3.14

using namespace std;

int main()
{
    int pilihan;
    float angka1;
    float angka2;
    float angka3;
    float jumlah;

    cout << ("masukan volume yang ingin anda hitung\n");
    cout << ("1 = Kubus\n");
    cout << ("2 = Balok\n");
    cout << ("3 = Limas Segitiga\n");
    cout << ("4 = LImas Segiempat\n");
    cout << ("5 = Prisma Segitiga\n");
    cout << ("6 = Tabung\n");
    cout << ("7 = Kerucut\n");
    cout << ("8 = Bola\n");
    cout << ("masukan bangunb ruang yang ingin anda hitung  ");
    cin  >> pilihan;


    switch (pilihan){
        case 1:
            cout << ("masukan panjang dari rusuk kubus");
            cin >> angka1;
            jumlah =  angka1*angka1*angka1;
            cout << ("hasil dari bangun kudus adalah ") << jumlah << endl;
            break;
        case 2:
            cout << ("masuka nili panjang ");
            cin >> angka1;
            cout << ("masukan nilai lebar");
            cin >> angka2;
            cout << ("masukan nilai tinggi");
            cin >> angka3;
            jumlah  = angka1*angka2*angka3;
            cout << ("hasil dari bangun balok adalah ") << jumlah << endl;
            break;
        case 3:
            cout << ("masukan nilai alas segitiga");
            cin >> angka1;
            cout << ("masukan nilai tinggi segitiga");
            cin >> angka2;
            cout << ("masukan nilai tinggi limas");
            cin >> angka3;
            jumlah = (1/3)*(1/2)*angka1*angka2*angka3;  
            cout << ("hasil dari bangun limas segitiga adalah ") << jumlah << endl;
            break;
        case 4:
            cout << ("masukan nilai Rusuk segiempat");
            cin >> angka1;
            cout << ("masukan nilai tinggi limas segiempat");
            cin >> angka2;
            jumlah = (1/3)*angka1*angka1*angka2;
            cout << ("hasil dari bangun limas segiempat adalah ") << jumlah << endl;
            break;
        case 5:
            cout << ("masukan nilai alas segitiga");
            cin >> angka1;
            cout << ("masukan nilai tinggi segitiga");
            cin >> angka2;
            cout << ("masukan nilai tinggi prisma");
            cin >> angka3;
            jumlah = (1/2)*angka1*angka2*angka3;  
            cout << ("hasil dari bangun limas segitiga adalah ") << jumlah << endl;
            break;
        case 6:
            cout << ("masukan nilai jari-jari lingkaran");
            cin >> angka1;
            cout << ("masukan nilai tinggi tinggi tabung");
            cin >> angka2;
            jumlah = pi*angka1*angka1*angka2;
            cout << ("hasil dari bangun tabung adalah ") << jumlah << endl;
            break;
        case 7:
            cout << ("masukan nilai jari-jari lingkaran");
            cin >> angka1;
            cout << ("masukan nilai tinggi tinggi kerucut");
            cin >> angka2;
            jumlah = (1/3)*pi*angka1*angka1*angka2;
            cout << ("hasil dari bangun kerucut adalah ") << jumlah << endl;
            break;
        case 8:
            cout << ("masukan nilai jari-jari lingkaran");
            cin >> angka1;
            jumlah = (4/3)*pi*angka1*angka1*angka1;
            cout << ("hasil dari bangun bola adalah ") << jumlah << endl;
        default:
            cout << ("bangun yang anda pilih tidak ada\n");
            break;
    }
    return 0;
}
