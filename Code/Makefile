include ../Makefile.compilation

all: $(EXEC)

$(EXEC): main.o filtrer.o
	$(LD) -o $(EXEC) main.o filtrer.o $(LDFLAGS)

main.o: main.c
	$(CC) -c main.c -o main.o $(CFLAGS)

filtrer.o: filtrer.c
	$(CC) -c filtrer.c -o filtrer.o $(CFLAGS)

clean:
	rm -f *.o  *~

clean+:
	rm -f *.o $(EXEC) *~