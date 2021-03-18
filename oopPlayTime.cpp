/*

Example from somewhere... It will be gone soon

// Create a Car class with some attributes
class Car {
  public:
    string brand;   
    string model;
    int year;
};

int main() {
  // Create an object of Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Create another object of Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Print attribute values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}


*/


#include <iostream>

class customer
{
    public:
        int cutWanted;
        std::string name;
        double payment;
        int appointmentDay;
};

class barber
{
    public:
        std::string name;
        int age;
        bool cutFinished = false;
    
    private:
        double moneyMade;
        int salary;
        bool receivedSalary;
};

class receptionist
{
    public:
        int day;
        std::string name;
        int age;
        int cutWanted;
        int invoiceNumber;
        bool hasPayed = false;
    
    private:
        int salary;
        bool receivedSalary;
};

int openShop(int dayStart){
    return dayStart = 1;
}

int haveCustomer(int customerCount){
    customerCount -=1;
    return customerCount;
}

int main()
{   
    int dayStart = 0;
    openShop(dayStart);
    
    if(dayStart=1){
        std::cout<<"Shop Open\n";
    }
    
    int customersInLine = 0;
    std::cout<<"How many customers do we have in line? ";
    std::cin>>customersInLine;

    int customerCount = customersInLine;
    if(customersInLine != 0){
        
        haveCustomer(customerCount);
    }

    int waitTime = customerCount * 30;
     
       customer john;
        john.name = "John";
        std::cout<<john.name; 


    return 0;
}