class SavingsAccount
{
  private:
    int dollars;
    int cents;
  public:
  SavingsAccount();
  void openAcc(int doll, int cent);
  void deposite(int doll, int cent);
  void withdrawal(int doll, int cent);
  int getDollars();
  int getCents();
};
