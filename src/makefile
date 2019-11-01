logger.out: logger.o
	gcc -o logger.out logger.o
logger.o: logger.c logger.h
	gcc -c logger.c
clean:
	rm -f *.o logger.out
