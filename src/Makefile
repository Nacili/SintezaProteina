PROGRAM   = main
CC        = gcc
CFLAGS    = -g  -Wall
LDFLAGS   = -lGL -lGLU -lglut -lm

$(PROGRAM): main.o nukleobaza.o mrnk.o trnk.o rrnk.o text.o stop.o
	$(CC) -o  $(PROGRAM) main.o nukleobaza.o mrnk.o trnk.o rrnk.o text.o stop.o $(LDFLAGS)

.PHONY: clean dist

clean:
	-rm *.o $(PROGRAM) *core

dist: clean
	-tar -chvj -C .. -f ../$(PROGRAM).tar.bz2 $(PROGRAM)

