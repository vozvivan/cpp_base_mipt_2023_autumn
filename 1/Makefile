
# target: [dependencies] ...
# 	command1
# 	command2
# 	...
# 	commandN
	
TARGET = main
SOURCES = main.cpp \
	printer.cpp

.PHONY: main install

build: ${TARGET}

${TARGET}: ${SOURCES}
	@echo build 
	g++ ${SOURCES} -o ${TARGET} -Wall -Wextra -Wpedantic -Werror

run:
	./${TARGET}

install:
	@echo run install process
	@touch install

clean:
	rm ${TARGET}

rebuild: clean build

