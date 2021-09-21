#include <iostream>
#include "SavingsAccount.h"

using namespace std;

  SavingsAccount::SavingsAccount()
  {
    dollars = 0;
    cents = 0;
  }
  void SavingsAccount::openAcc(int doll, int cent)
  {
    dollars = doll;
    cents = cent;
  }
  void SavingsAccount::deposite(int doll, int cent)
  {
    if(cent >= 100)
    {
      int addDoll = cent/100;
      int newCent = cent - addDoll;
      dollars = dollars + addDoll;
      cents = newCent;
    }
    else
    {
      dollars += doll;
      cents += cent;
    }
  }
  void SavingsAccount::withdrawal(int doll, int cent)
  {
    if(cent >= 100)
    {
      int addDoll = cent/100;
      int newCent = cent - addDoll;
      dollars = dollars - addDoll;
      cents = newCent;
    }
    else
    {
      dollars -= doll;
      cents -= cent;
    }
  }
  int SavingsAccount::getDollars()
  {
    return dollars;
  }
  int SavingsAccount::getCents()
  {
    return cents;
  }
