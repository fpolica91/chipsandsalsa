#include <bits/stdc++.h>
using namespace std;

enum Salsa
{
  MILD,
  MEDIUM,
  HOT,
  SWEET,
  ZESTY,
};

class Sales
{
public:
  Salsa salsa;
  int quantity;
  double price;
  Sales(Salsa salsa, int quantity, double price)
  {
    this->salsa = salsa;
    this->quantity = quantity;
    this->price = price;
  }
};
void makeReport(Sales sales[], int n)
{
  double total = 0;
  unordered_map<Salsa, string> m = {
      {MILD, "Mild"},
      {MEDIUM, "Medium"},
      {HOT, "Hot"},
      {SWEET, "Sweet"},
      {ZESTY, "Zesty"},
  };
  for (int i = 0; i < n; i++)
  {
    cout << "Jars sold last month for: " << m[sales[i].salsa] << ": " << sales[i].quantity << endl;
    cout << "Amount earned for " << m[sales[i].salsa] << ": " << sales[i].quantity * sales[i].price << endl;
    total += sales[i].quantity * sales[i].price;
  }
  cout << "Your total sales for the month: $" << total << endl;
};

int main()
{

  Sales sales[5] = {
      Sales(MILD, 10, 10),
      Sales(MEDIUM, 10, 10),
      Sales(HOT, 10, 10),
      Sales(SWEET, 10, 10),
      Sales(ZESTY, 10, 10)};
  makeReport(sales, 5);

  return 0;
}
