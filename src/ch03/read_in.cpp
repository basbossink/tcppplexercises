#include<iostream>
#include<string>
using namespace std;

int main() {
  cout << "type a bool: ";
  bool answer = false; 
  cin >> boolalpha >> answer;
  cout << "type a char: ";
  char answer2 = 0;
  cin >> answer2;
  cout << "type an int: ";
  int answer3 = 0;
  cin >> answer3;
  cout << "type a double: ";
  double answer4 = 0.0;
  cin >> answer4;
  cout << "type a string: ";
  string answer5 = "";
  cin.ignore(256,'\n');
  getline(cin, answer5);
  cout << endl << "Your answers were:" << endl;
  cout << boolalpha << answer << endl;
  cout << answer2 << endl;
  cout << answer3 << endl;
  cout << answer4 << endl;
  cout << answer5 << endl;
}
