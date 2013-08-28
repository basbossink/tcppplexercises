# Copyright (C) 2013 Bas Bossink <bas.bossink@gmail.com>

# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.

# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
include ../Makefile

run: hello hello2 int_vector
	./hello
	./hello2
	./int_vector

hello2: hello2.cc person.h
	$(CXX) $(CPPFLAGS) -o hello2 hello2.cc 

read_ints: read_ints.cc
	$(CXX) $(CPPFLAGS) -o read_ints read_ints.cc 

write_ints: write_ints.cc
	$(CXX) $(CPPFLAGS) -o write_ints write_ints.cc 

names: names.cc
	$(CXX) $(CPPFLAGS) -o names names.cc 

int_vector: int_vector.cc
	$(CXX) $(CPPFLAGS) -o int_vector int_vector.cc 

hello: hello.cc
	$(CXX) $(CPPFLAGS) -o hello hello.cc
