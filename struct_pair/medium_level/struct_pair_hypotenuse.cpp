#include <math.h>       
#include <iostream>
#pragma pack(1)
using namespace std;


struct Pair {
    
    float first;
    float second;
    void Read();
    void Display();
    float hypotenuse(float x, float y); 
};
void Pair::Read(){
    
    cout << "Enter the first leg : "<<endl;
    cin >> first;
    cout << "Enter the second leg: "<<endl;
    cin >> second;
  
   
    
}
void Pair::Display(){
    cout << "Your result: " << hypotenuse(first, second) << endl;
}
float Pair::hypotenuse(float x, float y){
    return sqrt(x*x+y*y);
}
int main()
{
    Pair pair;
    pair.Read();
    pair.hypotenuse(pair.first, pair.second);
    pair.Display();

    return 0;
}
