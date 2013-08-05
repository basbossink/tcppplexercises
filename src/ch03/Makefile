include ../Makefile
run: hello write_out
	./hello.exe
	./write_out.exe

hello: hello.cpp
	g++ $(CPPFLAGS) -o hello.exe hello.cpp

write_out: write_out.cpp
	g++ $(CPPFLAGS) -o write_out write_out.cpp
