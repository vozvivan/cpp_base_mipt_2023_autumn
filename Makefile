
.PHONY: main

main: main.cpp
	g++ main.cpp -Imy/include/ my/libmy.a -o main

.PHONY: run

run:
	echo run
