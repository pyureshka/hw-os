#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int x1, y1, x2, y2;
  cout << "Введите координаты первой клетки (x1 y1): ";
  cin >> x1 >> y1;
  cout << "Введите координаты второй клетки (x2 y2): ";
  cin >> x2 >> y2;

  if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}
