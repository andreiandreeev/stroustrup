#include "std_lib_facilities.h"
int main()
try {

cout << "Success!\n"; // Original line: cout << "Success!\n";

cout << "Success!\n"; // Original line: cout << "Success!\n;

cout << "Success" << "!\n"; // Original line: cout << "Success" << !\n"

string success = "Success!"; cout << success << endl; // Original line: cout << success << endl;

int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";// Original line: string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";

vector<int> vec(10); vec[5] = 7; if (vec[5]==7) cout << "Success!\n";//  Original line: vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";

bool cond = true; if (cond) cout << "Success!\n"; else cout << "Fail!\n";// Original line: if (cond) cout << "Success!\n"; else cout << "Fail!\n"

bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";// Original line: bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";

string s = "ape";  c = "fool"<s; if (c) cout << "Success!\n";// Original line: string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";

s = "ape"; if (s!="fool") cout << "Success!\n";// Original line: string s = "ape"; if (s=="fool") cout << "Success!\n";

s = "ape"; if (s!="fool") cout << "Success!\n";// Original line: string s = "ape"; if (s=="fool") cout < "Success!\n";

s = "ape"; if (s!="fool") cout << "Success!\n";// Original line: string s = "ape"; if (s+"fool") cout < "Success!\n";

vector<char> vect(5); for (int i=0; i<vect.size(); i++) ; cout << "Success!\n";// Original line: vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";

vector<char> vecto(5); for (int i=0; i<vecto.size(); i++) ; cout << "Success!\n";// Original line: vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";

s = "Success!\n"; for (int i=0; i<9; i++) cout << s[i];// Original line: string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];

if (true) cout << "Success!\n"; else cout << "Fail!\n";// Original line: if (true) then cout << "Success!\n"; else cout << "Fail!\n";

int x = 2000; int a = x; if (a==2000) cout << "Success!\n";// Original line: int x = 2000; char c = x; if (c==2000) cout << "Success!\n";

s = "Success!\n"; for (int i=0; i<9; i++) cout << s[i];// Original line: string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];

vector<int> vv(5); for (int i=0; i<vv.size(); ++i); cout << "Success!\n";// Original line: vector v(5); for (int i=0; i<=v.size(); ++i) ;cout << "Success!\n";

int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";// Original line: int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";

x = 2; double d = 9/(x); if (d==2*x+0.5) cout << "Success!\n";// Original line: int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";

s = "Success!\n"; for (int i=0; i<9; i++) cout << s[i]; // Original line: string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];

int ii =0; int jj = 0; while (ii<10) ++ii; if (jj<ii) cout << "Success!\n";// Original line: int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";

int xx = 4; double dd = 17/(xx-2); if (dd=2*xx+0.5) cout << "Success!\n";// Original line: int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";

cout << "Success!\n";//Original line: cin << "Success!\n";

keep_window_open();
return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch (...) {
cerr << "Ой: неизвестное исключение!\n";
keep_window_open();
return 2;
}
