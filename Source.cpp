#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
  
  double nr_Oxygen, nr_Carbon, nr_Sulfur, nr_Hydrogen, nr_Nitrogen;
  double oxygen, carbon, sulfur, hydrogen, nitrogen;
  
  cout << "Input number of Oxygen atoms: "; cin << oxygen;
  cout << "Input number of Carbon atoms: "; cin << carbon;
  cout << "Input number of Sulfur atoms: "; cin << sulfur;
  cout << "Input number of Hydrogen atoms: "; cin << hydrogen;
  cout << "Input number of Nitrogen atoms: "; cin << nitrogen;
  
  
  double final_Amino_Acid = (nr_Oxygen * oxygen) + (nr_Nitrogen * nitrogen) + (nr_Carbon * carbon) + (nr_Sulfur * sulfur) + (nr_Hydrogen * hydrogen);

  cout << "The mass of this Amino Acid is: " << final_Amino_Acid << setprecision(3) << endl;

  system("pause");
  return 0;
}
