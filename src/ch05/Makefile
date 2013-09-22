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
include ../Makefile.inc

all : \
	$(OUTPUTDIR)/hello \
	$(OUTPUTDIR)/hello2 \
	$(OUTPUTDIR)/int_vector \
	$(OUTPUTDIR)/read_ints \
	$(OUTPUTDIR)/names 
.PHONY : all clean

run: $(OUTPUTDIR)/hello $(OUTPUTDIR)/hello2 $(OUTPUTDIR)/int_vector
	$(OUTPUTDIR)/hello
	$(OUTPUTDIR)/hello2
	$(OUTPUTDIR)/int_vector

$(OUTPUTDIR)/hello2: hello2.cc person.h
	$(CXX) $(CPPFLAGS) -o $(OUTPUTDIR)/hello2 hello2.cc 

$(OUTPUTDIR)/read_ints: read_ints.cc
	$(CXX) $(CPPFLAGS) -o $(OUTPUTDIR)/read_ints read_ints.cc 

$(OUTPUTDIR)/write_ints: write_ints.cc
	$(CXX) $(CPPFLAGS) -o $(OUTPUTDIR)/write_ints write_ints.cc 

$(OUTPUTDIR)/names: names.cc
	$(CXX) $(CPPFLAGS) -o $(OUTPUTDIR)/names names.cc 

$(OUTPUTDIR)/int_vector: int_vector.cc
	$(CXX) $(CPPFLAGS) -o $(OUTPUTDIR)/int_vector int_vector.cc 

$(OUTPUTDIR)/hello: hello.cc
	$(CXX) $(CPPFLAGS) -o $(OUTPUTDIR)/hello hello.cc

clean : 
	rm -Rf $(OUTPUTDIR)/* 

