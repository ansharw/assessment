#include <iostream>

using namespace std;

void garis()
{
    cout << "\n##================================##";
}

float luasSegitiga(float alas, float tinggi)
{
    float luas;
    luas = alas*tinggi/2;
    return luas;
}

float volumeBalok(float panjang, float tinggi, float lebar)
{
    float volume;
    volume = panjang*lebar*tinggi;
    return volume;
}

float volumeTabung(float jari, float tinggi)
{
    float phi = 3.14, volume;
    volume = phi*jari*jari*tinggi;
    return volume;
}

float volumeKubus(float sisi)
{
    float volume;
    volume = sisi*sisi*sisi;
    return volume;
}

int main()
{
    float alas, tinggi, lebar, jari, panjang, sisi;
    garis();
    cout << "\nMenghitung ";
    garis();
    cout << "\nLuas Segitiga = alas x tinggi / 2 \n";
    cout << "\n1. Volume Balok = panjang x lebar x tinggi \n";
    cout << "\n2. Volume Kubus sisi^3 \n";
    cout << "\n3. Volume Tabung phi x r^2 X tinggi \n";
    cout << "\nMasukkan alas, tinggi, jari-jari, lebar, sisi dan panjang";
    cout << "\nAlas : "; cin >> alas;
    cout << "\nPanjang : "; cin >> panjang;
    cout << "\nLebar : "; cin >> lebar;
    cout << "\nJari-Jari : "; cin >> jari;
    cout << "\nTinggi : "; cin >> tinggi;
    cout << "\nSisi : "; cin >> sisi;
    garis();
    cout << "\nLuas Segitiga : " << luasSegitiga(alas,tinggi);
    cout << "\nVolume Balok : " << volumeBalok(panjang,lebar,tinggi);
    cout << "\nVolume Tabung : " << volumeTabung(jari,tinggi);
    cout << "\nVolume Kubus : " << volumeKubus(sisi);
    garis();

    float arr[4]= {luasSegitiga(alas,tinggi),volumeBalok(panjang,lebar,tinggi),volumeTabung(jari,tinggi),volumeKubus(sisi)};
    float terbesar=0;

    for(int i=0; i<4;i++){
        if (arr[i]> terbesar){
            terbesar = arr[i];
        }
    }
    cout << "\nNilai yang terbesar adalah : " << terbesar << "\n";

    if(luasSegitiga(alas,tinggi) > volumeBalok(panjang,lebar,tinggi) && luasSegitiga(alas,tinggi) > volumeKubus(sisi) && luasSegitiga(alas,tinggi) > volumeTabung(jari,tinggi))
        cout << "\nLuas Segitiga lebih besar\n";
    else if(volumeBalok(panjang,lebar,tinggi) > luasSegitiga(alas,tinggi) && volumeBalok(panjang,lebar,tinggi) > volumeKubus(sisi) && volumeBalok(panjang,lebar,tinggi) > volumeTabung(jari,tinggi))
        cout << "\nVolume Balok lebih besar\n";
    else if(volumeTabung(jari,tinggi) > luasSegitiga(alas,tinggi) && volumeTabung(jari,tinggi) > volumeBalok(panjang,lebar,tinggi) && volumeTabung(jari,tinggi) > volumeKubus(sisi))
        cout <<"\nVolume Tabung lebih besar\n";
    else
        cout << "\nVolume Kubus lebih besar\n";



    return 0;
}
