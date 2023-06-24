#include <iostream>
using namespace std;

int main() {
    int yillar[6] = {2018, 2019, 2020, 2021, 2022, 2023};
    int altin[6] = {0, 0, 0, 0, 0, 0};
    int gumus[6] = {0, 0, 0, 0, 0, 0};
    int bronz[6] = {0, 0, 0, 0, 0, 0};
    int puan[6] = {0, 0, 0, 0, 0, 0};
    int maxPuanyili = 0, maxAltinyili,r = 0, maxAltin = 0;

    for (int i = 0; i < 6; i++) {
        cout << " Altin, gumus ve bronz madalya sayisini girin " << yillar[i] << ": ";
        cin >> altin[i] >> gumus[i] >> bronz[i];
        puan[i] = altin[i]*5 + gumus[i]*3 + bronz[i];
        if (puan[i] > puan[maxPuanyili]) {
            maxPuanyili = i;
        }
        if (altin[i] > maxAltin) {
            maxAltin = altin[i];
            maxAltinyili = i;
        }
    }

    cout << "En cok puan alinan yil " << yillar[maxPuanyili] << " ve " << puan[maxPuanyili] << " puandir." << endl;
    cout << "En cok altin madalya alinan yil " << yillar[maxAltinyili] << " ve " << maxAltin << " altin madalyadir." << endl;

    return 0;
}

