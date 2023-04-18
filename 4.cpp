#include <iostream>
using namespace std;

int main()
{
  int ages[5];
  cout << "Введите возраст каждого из 5 человек: ";
  for (int i = 0; i < 5; i++)
  {
    cin >> ages[i];
  }

  int min_age = ages[0];
  for (int i = 1; i < 5; i++)
  {
    if (ages[i] < min_age)
    {
      min_age = ages[i];
    }
  }

  double discount = 0.0;
  if (min_age < 18)
  {
    discount = 0.5;
  }
  else if (min_age >= 18 && min_age < 25)
  {
    discount = 0.2;
  }
  else if (min_age >= 60)
  {
    discount = 0.3;
  }

  double total_cost = 5 * 10 * (1 - discount);
  cout << "Стоимость билетов для группы из 5 человек: " << total_cost << endl;

  return 0;
}
