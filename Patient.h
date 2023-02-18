
#ifndef PATIENT_H_
#define PATIENT_H_

class Patient
{
private:
  int days;
  char patientType;
  double rate, services, medication;

  bool validateInput(int);
  bool validateInput(double);
  bool validateInput(char);


public:
  Patient();
  Patient(int, char, double, double, double);
  Patient(char, double, double);
  void setDays(int);
  void setRate(double);
  void setServices(double);
  void setMedication(double);
  void setPatientType(char);
  int getDays();
  double getRate();
  double getServices();
  double getMedication();
  char getPatientType();
  double calcTotalCharges();

};

#endif
