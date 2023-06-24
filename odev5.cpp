#include <iostream>
#include <string>

using namespace std;

class Hesap {
private:
    string ad;
    double bakiye;
public:
    Hesap(string ad, double bakiye) {
        this->ad = ad;
        this->bakiye = bakiye;
    }

    void paraCek(double miktar) {
        if (bakiye < miktar) {
            cout << "Yetersiz bakiye!" << endl;
        } else {
            bakiye -= miktar;
            cout << miktar << " TL cekildi. Yeni bakiye: " << bakiye << " TL" << endl;
        }
    }

    void paraYatir(double miktar) {
        bakiye += miktar;
        cout << miktar << " TL yatirildi. Yeni bakiye: " << bakiye << " TL" << endl;
    }

    void paraAktar(Hesap& hedef, double miktar) {
        if (bakiye < miktar) {
            cout << "Yetersiz bakiye!" << endl;
        } else {
            bakiye -= miktar;
            hedef.bakiye += miktar;
            cout << miktar << " TL " << hedef.ad << " hesabina aktarildi." << endl;
            cout << "Gonderen hesap bakiyesi: " << bakiye << " TL" << endl;
            cout << "Alici hesap bakiyesi: " << hedef.bakiye << " TL" << endl;
        }
    }

    void bakiyeGoruntule() {
        cout << "Hesap Sahibi: " << ad << endl;
        cout << "Hesap Bakiyesi: " << bakiye << " TL" << endl;
    }
};

int main() {
    Hesap A1("Ali", 0), A2("Fatma", 0);

    A1.paraYatir(500);
    A2.paraYatir(200);
    A1.paraCek(100);
    A1.bakiyeGoruntule();
    A2.paraCek(50);
    A2.bakiyeGoruntule();
    A1.paraAktar(A2, 150);

    return 0;
}

