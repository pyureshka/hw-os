#include <iostream>
using namespace std;

int main()
{
  int N;
  cout << "Введите число N: ";
  cin >> N;

  for (int i = N; i > 0; i--)
  {
    cout << i << endl;
    if (i % 5 == 0)
    {
      cout << "Beep" << endl;
    }
  }

  return 0;
}