#include <iostream>
#include <cmath>
#include <iomanip>
#include "Patient.h"

using namespace std;

int main(){
  Patient p1;
  char temp;
  double temper;
  cout << "Enter I for in-patient or O for out-patient: ";
  cin >> temp;
  p1.setPatientType(temp);
  if(p1.getPatientType()=='I'){
    cout << endl << "Days spent in hospital: ";
    cin >> temper;
    p1.setDays(temper);
    cout << endl << "Daily room rate ($): ";
    cin >> temper;
    p1.setRate(temper);
  }
  cout << endl << "Service charges ($): ";
  cin >> temper;
  p1.setServices(temper);
  cout << endl << "Medication charges ($): ";
  cin >> temper;
  p1.setMedication(temper);
  cout << "Your total bill is ($): " << p1.calcTotalCharges();

}
