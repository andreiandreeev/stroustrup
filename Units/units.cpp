#include "std_lib_facilities.h"

int main()
{
  vector <double> value_vector(0);
  const double cm_to_meter = 100;
  const double cm_to_in    = 2.54;
  const double in_to_f     = 12;

  double value;
  string units;
  cin >> value >> units;

  if(units != "f" && units != "m" && units != "cm" && units != "in")
    simple_error("Incorrect units");

  double meters_value = 0;

  switch (units[0])
  {
    case 'f':
      meters_value =  value * in_to_f * cm_to_in / cm_to_meter;
      break;
    case 'm':
      meters_value =  value;
      break;
    case 'c':
      meters_value =  value / cm_to_meter;
      break;
    case 'i':
      meters_value =  value * cm_to_in / cm_to_meter;
      break;
  }

  double sum = meters_value;
  double min = meters_value;
  double max = meters_value;
  value_vector.push_back(meters_value);
  cout << "Min value is " << min << "m. Max value is " << max << "m. Sum is " << sum << "m.\n";

  while(cin >> value >> units)
  {
    if(units != "f" && units != "m" && units != "cm" && units != "in")
      simple_error("Incorrect units");

    switch (units[0])
    {
      case 'f':
        meters_value =  value * in_to_f * cm_to_in / cm_to_meter;
        break;
      case 'm':
        meters_value =  value;
        break;
      case 'c':
        meters_value =  value / cm_to_meter;
        break;
      case 'i':
        meters_value =  value * cm_to_in / cm_to_meter;
        break;
    }

    if(meters_value > max)
      max = meters_value;

    if(meters_value < min)
      min = meters_value;

    sum += meters_value;
    value_vector.push_back(meters_value);

    cout << "Min value is " << min << "m. Max value is " << max << "m. Sum is " << sum << "m.\n";
  }
  sort(value_vector.begin(), value_vector.end());

  cout << "Value list: ";
  for(int i = 0; i < value_vector.size(); i++)
    cout << value_vector[i] << "m ";
  cout << "\n";
}
