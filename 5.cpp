#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int n)
{
  string s = to_string(n);
  int left = 0, right = s.length() - 1;
  while (left < right)
  {
    if (s[left] != s[right])
    {
      return false;
    }
    left++;
    right--;
  }
  return true;
}

int main()
{
  int n;
  cout << "Введите число: ";
  cin >> n;
  if (isPalindrome(n))
  {
    cout << n << " является палиндромом" << endl;
  }
  else
  {
    cout << n << " не является палиндромом" << endl;
  }
  return 0;
}
