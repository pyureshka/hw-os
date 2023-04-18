#include <iostream>
using namespace std;

int main()
{
  int passengers;     // количество пассажиров
  int last_bus_seats; // количество свободных мест в последнем автобусе
  cout << "Введите количество пассажиров: ";
  cin >> passengers;
  last_bus_seats = 50 - (passengers % 50); // вычисление количества свободных мест
  cout << "В последнем автобусе будет " << last_bus_seats << " свободных мест" << endl;
  return 0;
}
