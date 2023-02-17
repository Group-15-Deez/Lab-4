#include <iostream>
#include <cmath>
#include <iomanip>
#include "Patient.h"

using namespace std;

int main(){
  Patient patient;
  char temp;
  double temper;
  cout << "Enter I for in-patient or O for out-patient: ";
  cin >> temp;
  patient.setPatientType(temp);
  if(patient.getPatientType()=='I'){
    cout << endl << "Days spent in hospital: ";
    cin >> temper;
    patient.setDays(temper);
    cout << endl << "Daily room rate ($): ";
    cin >> temper;
    patient.setRate(temper);
  }
  cout << endl << "Service charges ($): ";
  cin >> temper;
  patient.setServices(temper);
  cout << endl << "Medication charges ($): ";
  cin >> temper;
  patient.setMedication(temper);
  
  if(patient.getPatientType() == 'I'){
    cout << "Your total bill is ($): " << patient.calcTotalCharges(patient.getDays(), patient.getRate, patient.getServices(), patient.getMedication());
  }
  else{
    cout << "Your total bill is ($): " << patient.calcTotalCharges(patient.getServices(), patient.getMedication());
  }
}
