#include<iostream>
using namespace std;

int main(){
    float f;
    cout << "Enter temprature in fahrenheit\n";
    cin >> f;

    float c=(f - 32)*5/9;
    cout << "Tempature in celsius is " << c;

}