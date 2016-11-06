COMPILER=g++
CPPFLAGS=-O4
CPPSTD=c++14
OUTNAME=passgen

all:
	$(COMPILER) main.cpp $(CPPFLAGS) -std=$(CPPSTD) -o $(OUTNAME)

install:
	sudo install $(OUTNAME) /usr/bin/

remove:
	sudo rm $(OUTNAME) /usr/bin/$(OUTNAME)

clean:
	rm $(OUTNAME)
