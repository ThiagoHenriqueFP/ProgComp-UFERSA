#include <iostream>

using namespace std;

struct date {
  int hour, min, day, month, year;
};

struct evento {
  date data;
  char desc[50];
};

int main()
{
  evento agenda[10];

  cout << "Entre com 2 eventos" << endl;

  for (size_t i = 0; i < 2; i++)
  {
    cout << "#" << i << endl;
    cout << "Informe a data e a hora [dd mm yyyy hh mm]" << endl;
    cin >> agenda[i].data.day >> agenda[i].data.month >> agenda[i].data.year >> agenda[i].data.hour >> agenda[i].data.min;
    cin.get();
    cin.getline(agenda[i].desc, 50);
  }

  for (size_t i = 0; i < 2; i++)
  {
    cout << agenda[i].data.day << "/" << agenda[i].data.month << "/" << agenda[i].data.year << " " << agenda[i].data.hour << ":" << agenda[i].data.min << endl;
    cout << agenda[i].desc << endl;
  }
  
  
}