#include <iostream>
using namespace std;

int main() {
    const int totalPopulation = 80000;
    const double percentageMen = 52.0;
    const double percentageTotalLiteracy = 48.0;
    const double percentageLiterateMen = 35.0;

    int numberOfMen = (totalPopulation * percentageMen) / 100;
    int numberOfWomen = totalPopulation - numberOfMen;

    int literateMen = (totalPopulation * percentageLiterateMen) / 100;
    
    int illiterateMen = numberOfMen - literateMen;

    int totalLiterate = (totalPopulation * percentageTotalLiteracy) / 100;

    int literateWomen = totalLiterate - literateMen;

    int illiterateWomen = numberOfWomen - literateWomen;


    cout << "Total number of illiterate men: " << illiterateMen << endl;
    cout << "Total number of illiterate women: " << illiterateWomen << endl;

    return 0;
}
