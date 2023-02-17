#ifndef PATIENT_H
#define PATIENT_H

class Patient
{
    private:
    char patientType = 'I'; int days = 0; double rate = 0.0; double services = 0.0; double medication = 0.0;
    bool validateInput(int i)
    {
        if(i >= 0)
        return true;
        else
        return false;
    }
    bool validateInput(double d)
    {
        if(d >= 0)
        return true;
        else
        return false;
        
    }

    public:
    Patient() = default;
    Patient(char i, double b, double c) : patientType{i}, services{b}, medication{c} {};
    Patient(char i, int a, double b, double c, double d) : patientType{i}, days{a}, rate{b}, services{c}, medication{d} {};
    double calcTotalCharges(int, double, double, double);
    double calcTotalCharges(double, double);
    void setPatientType(char);
    void setDays(int);
    void setRate(double);
    void setServices(double);
    void setMedication(double);
    int getDays();
    double getRate();
    double getServices();
    double getMedication();
    char getPatientType();


};

#endif