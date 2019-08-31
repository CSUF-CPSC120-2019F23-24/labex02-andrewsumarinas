#include <iostream>

int main()

{
  double initialCost, TaxRate, myTip, totalCost;

  std::cout<<"Thank you for staying with us. We hope to see you again next time!" <<std::endl;
  std::cout<<"What is the total meal cost: ";
  std::cin>>initialCost;

  TaxRate= initialCost*0.0775;

  std::cout<<"Tax: ";
  std::cout<<TaxRate <<std:: endl;

  totalCost = initialCost + TaxRate;
  std::cout<<"Total Cost: ";
  std::cout<<totalCost <<std:: endl;

  myTip = initialCost*0.20;

  std::cout<<"Recommended tip: ";
  std::cout<<myTip <<std:: endl;

  std::cout<<"Please come again!" <<std:: endl;
  


  return 0;




}// Name:
// This program calculates the tax and tip on a restaurant bill.
