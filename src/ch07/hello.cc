// Copyright (C) 2013 Bas Bossink <bas.bossink@gmail.com>

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

#include <thread>
#include <iostream>
#include <string>
#include <chrono>

using namespace std;
using namespace std::chrono;

struct IntervalWriter {
  IntervalWriter(const string& stringToWrite) : payLoad(stringToWrite) {}
  void operator()() {
    constexpr int OneSecondInMilliSeconds = 1000; 
    for(;;) {
        cout << payLoad << endl;
        lastHelloTime = high_resolution_clock::now();
        this_thread::sleep_for(milliseconds(OneSecondInMilliSeconds));
    }
  }
  private:
    high_resolution_clock::time_point lastHelloTime = high_resolution_clock::now(); 
    string payLoad;
};

int main() {
  IntervalWriter helloWriter { "Hello" };
  IntervalWriter worldWriter { "world!" };
  thread helloThread { helloWriter };
  thread worldThread { worldWriter };
  helloThread.join();
  worldThread.join();
}
