.PHONY: all clean

TARGET= poker

all: ${TARGET}

poker: poker.o poker_fun.o 

poker.o: poker.c poker.h

poker_fun.o: poker_fun.c poker.h

clean:
	rm -f *~
	rm -f *.o
	rm -f ${TARGET}