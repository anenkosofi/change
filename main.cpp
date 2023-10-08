#include <iostream>

using namespace std;

int main()
{
  const int dollar_cents{100};
  const int quarter_cents{25};
  const int dime_cents{10};
  const int nickel_cents{5};
  const int penny_cents{1};

  cout << "Enter an amount in cents:\n"
       << endl;

  int cents{0};
  cin >> cents;

  cout << "You can provide change for this change as follows:" << endl;

  int dollars{0};
  int quarters{0};
  int dimes{0};
  int nickels{0};
  int pennies{0};

  dollars = cents / dollar_cents;
  quarters = (cents % dollar_cents) / quarter_cents;
  dimes = ((cents % dollar_cents) % quarter_cents) / dime_cents;
  nickels = (((cents % dollar_cents) % quarter_cents) % dime_cents) / nickel_cents;
  pennies = ((((cents % dollar_cents) % quarter_cents) % dime_cents) % nickel_cents) / penny_cents;

  cout << "Dollars: " << dollars << endl;
  cout << "Quarters: " << quarters << endl;
  cout << "Dimes: " << dimes << endl;
  cout << "Nickels: " << nickels << endl;
  cout << "Pennies: " << pennies << endl;

  return 0;
}
