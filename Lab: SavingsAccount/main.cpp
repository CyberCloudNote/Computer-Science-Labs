#include <iostream>
#include "SavingsAccount.h"

using namespace std;

int main() 
{
  SavingsAccount bank1;
  cout << "Open account with $200.50" << endl;
  cout << "My Account has: ";
  bank1.openAcc(200,50);
  cout << bank1.getDollars() << " Dollars and "<< bank1.getCents() << " cents." << endl << endl;

  cout << "Amount deposited to my account $40.50" << endl;
  cout << "My Account has: ";
  bank1.deposite(40,50);
  cout << bank1.getDollars() << " Dollars and "<< bank1.getCents() << " cents." << endl << endl;

  cout << "Amount widthdrawn from my account $100.98" << endl;
  cout << "My Account has: ";
  bank1.withdrawal(100,98);
  cout << bank1.getDollars() << " Dollars and "<< bank1.getCents() << " cents." << endl << endl;
}
