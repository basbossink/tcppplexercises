# Copyright (C) 2014 Bas Bossink <bas.bossink@gmail.com>

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
include ../Makefile.inc

TESTDIR = ../../test/ch09
SRCDIR = ../../src/ch09

all : Tests
	$(OUTPUTDIR)/Tests

date.o : date.cc date.h 
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c date.cc -o $(OUTPUTDIR)/date.o

dateTest.o : $(TESTDIR)/dateTest.cc date.h $(GTEST_HEADERS)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -I$(SRCDIR) -c $(TESTDIR)/dateTest.cc -o $(OUTPUTDIR)/dateTest.o

$(OUTPUTDIR): 
	-mkdir -p $(OUTPUTDIR)

Tests : \
	date.o \
	dateTest.o \
	| bin

	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread $(LDFLAGS) \
		../../../googletest/make/gtest_main.a $(addprefix $(OUTPUTDIR)/, $^) \
		-o $(OUTPUTDIR)/$@

include ../TestsMakefile.inc

.PHONY : all clean

clean : 
	rm -Rf $(OUTPUTDIR)/* 


