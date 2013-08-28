include ../Makefile
run: hello write_out read_in
	./hello
	./write_out
	./read_in

hello: hello.cc
	$(CXX) $(CPPFLAGS) -o hello hello.cc

read_in: read_in.cc
	$(CXX) $(CPPFLAGS) -o read_in read_in.cc

write_out: write_out.cc
	$(CXX) $(CPPFLAGS) -o write_out write_out.cc
