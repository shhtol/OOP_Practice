#include <math.h>       
#include <iostream>
#pragma pack(1)
using namespace std;


struct Pair {
    
    float first;
    int second;
    void Read();
    void Display();
    float power(float num, int power);
};
void Pair::Read(){
    cout << "Enter your number: "<<endl;
    cin >> first;
    cout << "Enter its power: "<<endl;
    cin >> second;
}
void Pair::Display(){
    cout << "Your result: " << power(first, second) << endl;
}
float Pair::power(float num, int power){
    return pow(num, power);
}
int main()
{
    Pair pair;
    pair.Read();
    pair.power(pair.first, pair.second);
    pair.Display();

    return 0;
}
