#include "std_lib_facilities.h"
int main()
{
  string first_name  = "";
  string friend_name = "";
  char   friend_sex  = 0;
  int age   = 0;

  cout << "Enter addressee name, please\n";
  cin >> first_name;
  cout << "Enter other friend's name, please\n";
  cin >> friend_name;
  cout << "Enter other friend's sex, please\n";
  cin >> friend_sex;
  cout << "Enter other friend's age, please\n";
  cin >> age;

  if(age <= 0 || age >= 110)
    simple_error("You are kidding me!");

  cout << "Dear " << first_name <<
      ",\nHow are you? I am fine. I miss you a lot.\n" <<
          "Have you seen " << friend_name << " lately? ";

  if(friend_sex == 'f')
    cout << "If you see her, please ask her to call me!\n";
  if(friend_sex == 'm')
    cout << "If you see him, please ask him to call me!\n";

  cout << "I have heard you just celebrated your birthday and now you are "
       << age << " years old. ";

  if(age <= 12)
    cout << "Next year you will be " << age+1 << " years old!\n";
  if(age == 18)
    cout << "Next year you will be able to vote!\n";
  if(age > 60)
    cout << "I hope you are not getting bored on your pension.\n";

  cout << "Sincerely yours, Andrei.";

}
