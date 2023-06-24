#include <iostream>
#include <algorithm> // std::sort fonksiyonunu kullanmak için
using namespace std;

double urunlerinToplami() {
  double urunler[4];
  for(int i=0; i<4; i++){
      cout << i+1 << ". urunun fiyatini girin: ";
      cin >> urunler[i];
  }
  sort(urunler, urunler+4); 

  string kullaniciTuru;
  cout << "Kullanici turunu girin (ogrenci ya da yetiskin): ";
  cin >> kullaniciTuru;

  if (kullaniciTuru == "ogrenci") {
    return (urunler[0] + urunler[1]) / 2.0+  urunler[2] + urunler[3]; 
  } else {
    return urunler[0] + urunler[1] + urunler[2] + urunler[3]; 
  }
}

int main() {
  double toplamUcret = urunlerinToplami();
  cout << "Toplam ucret: " << toplamUcret << endl;
  return 0;
}

