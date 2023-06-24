#include <iostream>
#include <cmath>

using namespace std;

class Nokta {
    float x, y;
public:
    Nokta(float xKoordinati, float yKoordinati) : x(xKoordinati), y(yKoordinati) {}
    Nokta(int xKoordinati, int yKoordinati) : x(float(xKoordinati)), y(float(yKoordinati)) {}
    void Goruntule() {
        cout << "Noktanin koordinatlari: (" << x << ", " << y << ")" << endl;
    }
    bool Karsilastir(Nokta baskaNokta) {
        if (x == baskaNokta.x && y == baskaNokta.y) {
            return true;
        }
        else {
            return false;
        }
    }
    float Uzaklik(Nokta baskaNokta) {
        return sqrt(pow((x - baskaNokta.x), 2) + pow((y - baskaNokta.y), 2));
    }
    Nokta OrtaNokta(Nokta baskaNokta) {
        float ortaX = (x + baskaNokta.x) / 2;
        float ortaY = (y + baskaNokta.y) / 2;
        Nokta ortaNokta(ortaX, ortaY);
        return ortaNokta;
    }
};

int main() {
    Nokta n1(3, 4);
    Nokta n2(6, 8);
    n1.Goruntule();
    n2.Goruntule();
    if (n1.Karsilastir(n2)) {
        cout << "Iki nokta ayni." << endl;
    }
    else {
        cout << "Iki nokta farkli." << endl;
    }
    cout << "Iki nokta arasindaki uzaklik: " << n1.Uzaklik(n2) << endl;
    
    
    Nokta ortaNokta = n1.OrtaNokta(n2);
    
    
    cout << "Iki nokta arasindaki orta nokta: ";
    ortaNokta.Goruntule();
    return 0;
}

