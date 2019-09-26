/*
=========================================================================================
Assignment : INHERITANCE
Name : Gaurav Ghati
class : SE 10
Batch : F 10
Problem Statement :

Design a base class with name, date of birth, blood group and another base class
consisting of the data members such as height and weight.
Design one more base class consisting of the insurance policy number and contact
address. The derived class contains the data members’ telephone numbers and
driving license number.
Write a menu driven program to carry out the following things:

1) Build a master table
2) Display Record
3) Insert a record
4) Delete record
5) Edit record
6) Search for a record
==========================================================================================
*/

#include<iostream>
using namespace std;

class BioData{
    char name[20];
    char blood[5];
    char dob[10];            // date of Birth
public:
    const char *getName() const {
        return name;
    }

    const char *getBlood() const {
        return blood;
    }

    const char *getDob() const {
        return dob;
    }

    BioData(char *name, char *blood, char *dob) : name(name), blood(blood), dob(dob) {}
};

class Physical{
    int height;
    int weight;

public:
    Physical(int height, int weight) : height(height), weight(weight) {}

    int getHeight() const {
        return height;
    }

    void setHeight(int height) {
        Physical::height = height;
    }

    int getWeight() const {
        return weight;
    }

    void setWeight(int weight) {
        Physical::weight = weight;
    }
};

class BankDetails{
    int insNumber;
    char address[100];

public:
    BankDetails(int insNumber, char *address) : insNumber(insNumber), address(address) {}

    int getInsNumber() const {
        return insNumber;
    }

    void setInsNumber(int insNumber) {
        BankDetails::insNumber = insNumber;
    }

    const char *getAddress() const {
        return address;
    }
};

class Human: private BioData, private Physical, private BankDetails{
private:
    int telNumber;
    int DLNumber;
public:
    Human(char *name, char *blood, char *dob, int height, int weight, int insNumber, char *address, int telNumber,
          int dlNumber) : BioData(name, blood, dob), Physical(height, weight), BankDetails(insNumber, address),
                          telNumber(telNumber), DLNumber(dlNumber) {}

    int getTelNumber() const {
        return telNumber;
    }

    void setTelNumber(int telNumber) {
        Human::telNumber = telNumber;
    }

    int getDlNumber() const {
        return DLNumber;
    }

    void setDlNumber(int dlNumber) {
        DLNumber = dlNumber;
    }
};


