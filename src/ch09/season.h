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
#ifndef SEASON_H_DEFINED
#define SEASON_H_DEFINED
 
namespace X_9_5 {
  enum class Season {
    spring,
    summer,
    autumn,
    winter
  };

  constexpr Season operator++(Season& season, int) {
    return season = static_cast<Season>((static_cast<int>(season) + 1) % 4);
  }

  constexpr Season operator--(Season& season, int) {
    return season = static_cast<Season>((static_cast<int>(season) + 3) % 4);
  }

  std::istream& operator>>(std::istream& input, Season& inputSeason) {
    std::string seasonString;
    input >> seasonString;
    if(seasonString == "spring") {
      inputSeason = Season::spring;
    } else if (seasonString == "summer") {
      inputSeason = Season::summer;
    } else if (seasonString == "autumn") {
      inputSeason = Season::autumn;
    } else if (seasonString == "winter") {
      inputSeason = Season::winter;
    }
    return input;
  }

  std::ostream& operator<<(std::ostream& os, const Season& seasonToPrint) {
    switch (seasonToPrint) {
      case Season::spring:
        os << "spring";
        break;
      case Season::summer:
        os << "summer";
        break;
      case Season::autumn:
        os << "autumn";
        break;
      case Season::winter:
        os << "winter";
        break;
      default:
        throw "Invalid argument seasonToPrint";
    }
    return os;
  }
}

#endif 
