#include <math.h>       
#include <iostream>
#pragma pack(1)
using namespace std;


struct Pair {
    
    float first;
    float second;
    void Read();
    void Display();
    float distance(float x, float y); 
};
void Pair::Read(){
    
    cout << "Enter x for A(x, y): "<<endl;
    cin >> first;
    cout << "Enter y for A(x, y): "<<endl;
    cin >> second;
  
   
    
}
void Pair::Display(){
    cout << "Your result: " << distance(first, second) << endl;
}
float Pair::distance(float x, float y){
    return sqrt(x*x+y*y);
}
int main()
{
    Pair pair;
    pair.Read();
    pair.distance(pair.first, pair.second);
    pair.Display();

    return 0;
}
