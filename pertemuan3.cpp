#include <iostream>
using namespace std;
float luas, d1, d2;

void prosedurinputdata(){
    cout << "masukkan diaonal 1 : ";
    cin >> d1;
    cout << "masukkan diagonal 2 : ";
    cin >> d2;
}

float HitungLuasparameter(float d1, float d2)
{
    return 0.5 * d1 * d1;
}

void proseduroutput(){
    cout << "luas ketupat : " << HitungLuasparameter(d1, d2);
}

void prosedurinputdata(){
    cout << "masukkan diaonal 1 : ";
    cin >> d1;
    cout << "masukkan diagonal 2 : ";
    cin >> d2;
}

float HitungLuasparameter(float d1, float d2)
{
    return 0.5 * d1 * d1;
}

void proseduroutput(){
    cout << "luas ketupat : " << HitungLuasparameter(d1, d2);
}

int main()
{
    prosedurinputdata();
    proseduroutput();

}