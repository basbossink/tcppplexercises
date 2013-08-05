include ../Makefile
run: hello write_out read_in
	./hello.exe
	./write_out.exe
	./read_in.exe

hello: hello.cpp
	g++ $(CPPFLAGS) -o hello.exe hello.cpp

read_in: read_in.cpp
	g++ $(CPPFLAGS) -o read_in read_in.cpp

write_out: write_out.cpp
	g++ $(CPPFLAGS) -o write_out write_out.cpp
