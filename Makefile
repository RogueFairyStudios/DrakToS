includes="."
all: rgt.cpp rgt.h
	g++ -o rgt rgt.cpp -I${includes} -I/usr/include/SDL -I${includes}/audiosys -I${includes}/graphsys -lSDL -lopenal -lalut

clean:
	rm rgt