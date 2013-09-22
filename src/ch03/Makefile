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

all : $(OUTPUTDIR)/hello $(OUTPUTDIR)/read_in $(OUTPUTDIR)/write_out
.PHONY : all clean

run : $(OUTPUTDIR)/hello $(OUTPUTDIR)/write_out $(OUTPUTDIR)/read_in
	$(OUTPUTDIR)/hello
	$(OUTPUTDIR)/write_out
	$(OUTPUTDIR)/read_in

$(OUTPUTDIR)/hello : hello.cc
	$(CXX) $(CPPFLAGS) -o $(OUTPUTDIR)/hello hello.cc

$(OUTPUTDIR)/read_in : read_in.cc
	$(CXX) $(CPPFLAGS) -o $(OUTPUTDIR)/read_in read_in.cc

$(OUTPUTDIR)/write_out : write_out.cc
	$(CXX) $(CPPFLAGS) -o $(OUTPUTDIR)/write_out write_out.cc

clean : 
	rm -Rf $(OUTPUTDIR)/* 

