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

#include <gtest/gtest.h>
#include <string>
#include "../../src/ch08/pairCounter.h"

using namespace std;
using namespace tcppplexercises;

namespace test {
  namespace  {
    TEST(X_8_12, PairCounterTestSimple) {
      string testString{ "xabaacbaxabb" };
      string pair{ "ab" };
      ASSERT_EQ(2, countPairs(pair, testString));      
    }
    TEST(X_8_12, PairCounterTestSimpleSingle) {
      string testString{ "xaba" };
      string pair{ "ab" };
      ASSERT_EQ(1, countPairs(pair, testString));      
    }
    TEST(X_8_12, PairCounterTestSimpleNone) {
      string testString{ "xaca" };
      string pair{ "ab" };
      ASSERT_EQ(0, countPairs(pair, testString));      
    }
    TEST(X_8_12, PairCounterTestEmptyString) {
      string testString{ "" };
      string pair{ "ab" };
      ASSERT_EQ(0, countPairs(pair, testString));      
    }
    TEST(X_8_12, PairCounterTestThree) {
      string testString{ "iabbaabioabaeueo" };
      string pair{ "ab" };
      ASSERT_EQ(3, countPairs(pair, testString));      
    }
    TEST(X_8_12, PairCounterTestCStringSimple) {
      const char* testString{ "xabaacbaxabb" };
      const char* pair{ "ab" };
      ASSERT_EQ(2, countPairs(pair, testString));      
    }
    TEST(X_8_12, PairCounterTestSimpleSingleCString) {
      const char* testString{ "xaba" };
      const char* pair{ "ab" };
      ASSERT_EQ(1, countPairs(pair, testString));      
    }
    TEST(X_8_12, PairCounterTestSimpleNoneCString) {
      const char* testString{ "xaca" };
      const char* pair{ "ab" };
      ASSERT_EQ(0, countPairs(pair, testString));      
    }
    TEST(X_8_12, PairCounterTestEmptyStringCString) {
      const char* testString{ "" };
      const char* pair{ "ab" };
      ASSERT_EQ(0, countPairs(pair, testString));      
    }
    TEST(X_8_12, PairCounterTestThreeCString) {
      const char* testString{ "iabbaabioabaeueo" };
      const char* pair{ "ab" };
      ASSERT_EQ(3, countPairs(pair, testString));      
    }
  }
}
