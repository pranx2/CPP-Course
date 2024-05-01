#include <iostream>
using namespace std;
class shopping{
   int ChocoHorn;
   int OrganicEggs;
   int Strawberry;
   float WholeWheatHalf;

public:
   shopping(){}; //if not declared then it not work;
   shopping(int ChocoHorn1, int OrganicEggs2, int Strawberry3, int WholeWheatHalf4);
   shopping(int ChocoHorn1, int OrganicEggs2, int Strawberry3, float WholeWheatHalf4);
   void show();
};
shopping ::shopping (int ChocoHorn1, int OrganicEggs2, int Strawberry3, int WholeWheatHalf4){
   ChocoHorn = ChocoHorn1;
   OrganicEggs = OrganicEggs2;
   Strawberry = Strawberry3;
   WholeWheatHalf = WholeWheatHalf4;
}
shopping ::shopping(int ChocoHorn1, int OrganicEggs2, int Strawberry3, float WholeWheatHalf4){
   ChocoHorn = ChocoHorn1;
   OrganicEggs = OrganicEggs2;
   Strawberry = Strawberry3;
   WholeWheatHalf = WholeWheatHalf4;
}
void shopping ::show(){
   cout << "ChocoHorn      :" << ChocoHorn << endl
        << "OrganicEggs    :" << OrganicEggs << endl
        << "Strawberry     :" << Strawberry << endl
        << "WholeWheatHalf :" << WholeWheatHalf << endl;
}
int main(){
   shopping crt1;
   int ChocoHorn;
   int OrganicEggs;
   int Strawberry;
   float WholeWheatHalf;
   cout << "Enter the Value :" << endl;
   cin >> ChocoHorn >> OrganicEggs >> Strawberry >> WholeWheatHalf;

   crt1 = shopping(ChocoHorn, OrganicEggs, Strawberry, WholeWheatHalf);
   crt1.show();
   return 0;
}