.PHONY: all clean

TARGET= poker_main

all: ${TARGET}

poker_main: poker_main.o poker_fun.o 

poker_main.o: poker_main.c poker.h

poker_fun.o: poker_fun.c poker.h

clean:
	rm -f *~
	rm -f *.o
	rm -f ${TARGET}
