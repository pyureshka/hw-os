#include <iostream>
#include <fstream>
#include <stack>
#include <string>

using namespace std;

int main()
{
  string filename;
  cout << "Введите имя файла: ";
  cin >> filename;

  ifstream file(filename);

  if (!file)
  {
    cout << "Ошибка открытия файла" << endl;
    return 1;
  }

  string program;
  getline(file, program, '\0');
  file.close();

  stack<char> brackets;

  for (int i = 0; i < program.length(); i++)
  {
    if (program[i] == '{')
    {
      brackets.push(program[i]);
    }
    else if (program[i] == '}')
    {
      if (brackets.empty())
      {
        cout << "Error: нет открывающей скобки" << endl;
        ofstream output("out.txt");
        output << "Error: нет открывающей скобки" << endl;
        output.close();
        return 1;
      }
      else
      {
        brackets.pop();
      }
    }
  }

  if (!brackets.empty())
  {
    cout << "Error: нет закрывающей скобки" << endl;
    ofstream output("out.txt");
    output << "Error: нет закрывающей скобки" << endl;
    output.close();
    return 1;
  }

  cout << "Скобки в программе C совпадают" << endl;
  ofstream output("out.txt");
  output << "Скобки в программе C совпадают" << endl;
  output.close();

  return 0;
}
