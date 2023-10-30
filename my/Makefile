
TARGET = libmy.a

.PHONY: build install

build: ${TARGET}

utils.o:
	g++ -c src/utils.cpp -o utils.o -Iinclude

${TARGET}: utils.o
	ar rcv ${TARGET} utils.o

clean:
	rm *.o *.a

install:
	touch install
