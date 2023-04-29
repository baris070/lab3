
[14:31, 23.03.2022] Mehmet Ali Bilici: #ifndef LAB_H_INC
#ifndef LAB_H_INCLUDED
#define LAB_H_INCLUDED

#include <iostream>
using namespace std;

class Hasta
{
private:
    string isim;
    string soyisim;
    int id;
    int hastalikBaslamaYili;
    int evre;
    string ilacDoz;
    string hastalikTuru;
    int ilacDozu;
    void ilacDozHesapla() {

        ilacDozu = (evre+1) * (2022-hastalikBaslamaYili) * 100;

    }

    public:

    //hasta(string isim, string soyisim, int id, int hastalikBaslamaYili, int evre, string hastalikTuru);
    void isimAl() {

        cout << "isim giriniz" << endl;
        cin >> isim;
    }
    void soyisimAl() {

        cout << "soyisim giriniz" << endl;
        cin >> soyisim;
    }
    void idAl() {

        cout << "id giriniz" << endl;
        cin >> id;
    }
    void hastalikBaslamaYiliAl() {

        cout << "hastalik baslama tarihi giriniz" << endl;
        cin >> hastalikBaslamaYili;
    }
    void evreAl() {

        cout << "evre giriniz( 0-4 )" << endl;
        cin >> evre;

        ilacDozHesapla();
    }
    void hastalikTuruAl() {

        cout << "hastalik turu giriniz" << endl;
        cin >> hastalikTuru;
    }

    void ilacDozYazdir() {

        if (ilacDozu < 1000) {

            ilacDoz = "Dusuk risk";
        }
        else if (ilacDozu > 50) {

            ilacDoz = "Yuksek risk";
        }
        else {

            ilacDoz = "Orta risk";
        }

        cout << ilacDoz << " : " << ilacDozu << endl;
    }
      voýd hastalýk dýrumu

};


#endif // LAB3_H_INCLUDED



