
CXXFLAGS+=-Wall -Wextra -pedantic -std=c++11 -Wno-c++98-compat -Wno-padded -Wno-weak-vtables
#CXXFLAGS+= -std=c++11 

zoo :  clean
	c++ ${CXXFLAGS} -o $@ *.cpp

clean : 
	rm -f zoo *.o
