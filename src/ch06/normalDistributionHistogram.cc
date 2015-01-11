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

#include <random>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <chrono>

using namespace std;
using namespace chrono;

class RandomInteger {
  using UL = default_random_engine::result_type;

public:
  RandomInteger(double mean, double sigma)
    : re{static_cast<UL>(system_clock::now().time_since_epoch().count())},
      dist{mean, sigma} {}
  int operator()() { return dist(re); }
  double mean() const { return dist.mean(); }
  double sigma() const { return dist.stddev(); }

private:
  default_random_engine re;
  normal_distribution<double> dist;
};

using Histogram = vector<int>;
using Size = vector<int>::size_type;

Size findFirstNonZeroFrequencyIndex(const Histogram& histogram) {
  Size i{0};
  while (!histogram[i++] && i < histogram.size()) {
  }
  return i - 1;
}

Size findLastNonZeroFrequencyIndex(const Histogram& histogram) {
  Size i{histogram.size() - 1};
  while (!histogram[i--] && 0 < i) {
  }
  return i + 1;
}

void printVector(const Histogram& histogram) {
  auto firstNonZeroFrequencyIndex = findFirstNonZeroFrequencyIndex(histogram);
  auto lastNonZeroFrequencyIndex = findLastNonZeroFrequencyIndex(histogram);
  for (Size i = firstNonZeroFrequencyIndex; i <= lastNonZeroFrequencyIndex;
       ++i) {
    auto freq = histogram[i];
    cout << i << "  ";
    for (int j = 0; j != freq; ++j) {
      cout << '*';
    }
    cout << endl;
  }
}

void gatherSamples(Histogram& histogram, RandomInteger& generator,
                   const int NrOfSamples) {
  for (int i = 0; i != NrOfSamples; ++i) {
    auto sample = max(0.0, round(generator()));
    ++histogram[sample];
  }
}

int main() {
  constexpr int NrOfSamples{800};
  constexpr double Mean{50.0};
  constexpr double Sigma{4.0};
  constexpr int HistogramSize = static_cast<int>(Mean + 5 * Sigma + 1);
  RandomInteger generator{Mean, Sigma};
  Histogram histogram(HistogramSize, 0);
  cout << "Taking " << NrOfSamples;
  cout << " samples from a normal distribution with mean: ";
  cout << generator.mean() << " and sigma: " << generator.sigma();
  cout << endl << endl;
  gatherSamples(histogram, generator, NrOfSamples);
  printVector(histogram);
}
