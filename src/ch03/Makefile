include ../Makefile
run: hello write_out read_in
	./hello
	./write_out
	./read_in

hello: hello.cpp
	$(CXX) $(CPPFLAGS) -o hello hello.cpp

read_in: read_in.cpp
	$(CXX) $(CPPFLAGS) -o read_in read_in.cpp

write_out: write_out.cpp
	$(CXX) $(CPPFLAGS) -o write_out write_out.cpp
