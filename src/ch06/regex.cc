// Copyright (C) 2015 Bas Bossink <bas.bossink@gmail.com>

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <iostream>
#include <fstream>
#include <streambuf>
#include <string>
#include <regex>

using namespace std;

string parseCode(regex_constants::error_type type) {
  switch (type) {
    case regex_constants::error_collate:
      return "error_collate: invalid collating element request";
    case regex_constants::error_ctype:
      return "error_ctype: invalid character class";
    case regex_constants::error_escape:
      return "error_escape: invalid escape character or trailing escape";
    case regex_constants::error_backref:
      return "error_backref: invalid back reference";
    case regex_constants::error_brack:
      return "error_brack: mismatched bracket([ or ])";
    case regex_constants::error_paren:
      return "error_paren: mismatched parentheses(( or ))";
    case regex_constants::error_brace:
      return "error_brace: mismatched brace({ or })";
    case regex_constants::error_badbrace:
      return "error_badbrace: invalid range inside a { }";
    case regex_constants::error_range:
      return "erro_range: invalid character range(e.g., [z-a])";
    case regex_constants::error_space:
      return "error_space: insufficient memory to handle this regular "
             "expression";
    case regex_constants::error_badrepeat:
      return "error_badrepeat: a repetition character (*, ?, +, or {) was not "
             "preceded by a valid regular expression";
    case regex_constants::error_complexity:
      return "error_complexity: the requested match is too complex";
    case regex_constants::error_stack:
      return "error_stack: insufficient memory to evaluate a match";
    default:
      return "";
  }
}

int main(int argc, char* argv[]) {
  try {
    if (argc != 2) {
      cout << "Usage: " << argv[0] << " <filename>" << endl;
      return -1;
    }
    ifstream file{argv[1]};
    string content((istreambuf_iterator<char>(file)),
                   istreambuf_iterator<char>());
    regex decimals(R"(\d+(\.\d+)?)");
    sregex_token_iterator end{};
    for (sregex_token_iterator p(content.begin(), content.end(), decimals);
         p != end; ++p) {
      cout << "found decimal: " << *p << endl;
    }
  } catch (const regex_error& rex) {
    cerr << "Caught exception " << rex.what() << endl;
    cerr << parseCode(rex.code()) << endl;
  } catch (const exception& ex) {
    cerr << "Caught exception " << ex.what() << endl;
  } catch (const string& ex) {
    cerr << "Caught exception " << ex << endl;
  } catch (...) {
    cerr << "Caught unknown exepcetion" << endl;
  }
}
