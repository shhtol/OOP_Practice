#include <math.h>       
#include <iostream>
#pragma pack(1)
using namespace std;


struct Pair {
    
    unsigned int first;
    float second;
    void Read();
    void Display();
    float power(unsigned int kk, float kg); 
};
void Pair::Read(){
    
    cout << "Enter your product's calorie per 100gr: "<<endl;
    cin >> first;
    cout << "Enter your product's weight in kg: "<<endl;
    cin >> second;
    
}
void Pair::Display(){
    cout << "Your result: " << power(first, second) << endl;
}
float Pair::power(unsigned int kk, float kg){
    return kk*10*kg;
}
int main()
{
    Pair pair;
    pair.Read();
    pair.power(pair.first, pair.second);
    pair.Display();

    return 0;
}
