
#include "Patient.h"

void Patient :: setPatientType(char t)
{
    
    patientType = t;
    if(patientType != 'I' && patientType != 'O')
    patientType = 'I';
}
void Patient :: setDays(int d)
{
    days = 1;
    if(validateInput(d))
    days = d;
}
void Patient :: setRate(double d)
{
    rate = 1.0;
    if(validateInput(d))
    rate = d;
}
void Patient :: setServices(double d)
{
    services = 1.0;
    if(validateInput(d))
    services = d;   
}
void Patient :: setMedication(double d)
{
    medication = 1.0;
    if(validateInput(d))
    medication = d;
}
char Patient :: getPatientType()
{
    return patientType;
}
int Patient :: getDays()
{
    return days;
}
double Patient :: getRate()
{
    return rate;
}
double Patient :: getServices()
{
    return services;
}
double Patient :: getMedication()
{
    return medication;
}
double Patient :: calcTotalCharges(double i, double d)
{
    return i + d;
}
double Patient :: calcTotalCharges(int i, double a, double b, double c)
{
    return (i * a) + b + c;
}