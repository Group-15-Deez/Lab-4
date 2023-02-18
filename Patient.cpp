#include <iomanip>
#include "Patient.h"
using namespace std;

bool Patient::validateInput(int in){
  if(in>=0)
  return true;
  else
  return false;
}

bool Patient::validateInput(double in){
  if(in>=0)
  return true;
  else
  return false;
}
bool Patient::validateInput(char inp){
  if(inp == 'O')
  return true;
  else
  return false;
}

Patient::Patient() : days{0}, patientType{'I'}, rate{0}, services{0}, medication{0}{}

Patient::Patient(int d, char p, double r, double s, double m) : days{d}, patientType{p}, rate{r},
services{s}, medication{m}{}

Patient::Patient(char p, double s, double m) : patientType{p}, services{s}, medication{m}{}
void Patient::setDays(int d){
  if(validateInput(d))
  days = d;
}

void Patient::setRate(double r){
  if(validateInput(r))
  rate = r;
}

void Patient::setServices(double s){
  if(validateInput(s))
  services = s;
}

void Patient::setMedication(double m){
  if(validateInput(m))
  medication = m;
}

void Patient::setPatientType(char p){
  if(validateInput(p))
  patientType = p;
}

int Patient::getDays(){
  return days;
}

double Patient::getRate(){
  return rate;
}

double Patient::getServices(){
  return services;
}

double Patient::getMedication(){
  return medication;
}

char Patient::getPatientType(){
  return patientType;
}

double Patient::calcTotalCharges(){
  return (days*rate)+medication+services;
}
