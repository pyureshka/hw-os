#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

struct Record
{
  string phone;
  string name;
  string address;

  bool operator<(const Record &other) const
  {
    return phone < other.phone;
  }
};

int main()
{
  // Открываем файл для чтения
  ifstream infile("phonebook.txt");
  if (!infile)
  {
    cerr << "Error: could not open input file" << endl;
    return 1;
  }

  // Читаем записи из файла в вектор
  vector<Record> records;
  string phone, name, address;
  while (infile >> phone >> name >> address)
  {
    records.push_back({phone, name, address});
  }

  // Сортируем записи по номеру телефона
  sort(records.begin(), records.end());

  // Записываем отсортированные записи в файл
  ofstream outfile("phonebook_sorted.txt");
  if (!outfile)
  {
    cerr << "Error: could not open output file" << endl;
    return 1;
  }
  for (const auto &record : records)
  {
    outfile << record.phone << " " << record.name << " " << record.address << endl;
  }

  // Выводим результат на экран
  for (const auto &record : records)
  {
    cout << record.phone << " " << record.name << " " << record.address << endl;
  }

  return 0;
}
