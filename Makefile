.PHONY: all dhat
all: main dhat

CXXFLAGS += -g
CXX = clang++


main: main.cpp
	${CXX} ${CXXFLAGS} -o $@ $<

clean:
	rm -f main

dhat:
	/home/paulf/tools/valgrind/bin/valgrind --tool=dhat ./main


