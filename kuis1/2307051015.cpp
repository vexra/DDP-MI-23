#include <iostream>
using namespace std;

int main(){
    float alas, tinggi;
    cin >> alas >> tinggi;
    float luas = (alas * tinggi) / 2;

    cout << "Luas Segitiga Alas= " << alas << " tinggi= " << tinggi << " adalah= " << luas << endl;
    return 0;
}