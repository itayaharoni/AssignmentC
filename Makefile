CC=gcc
FLAGS= -Wall -g
AR=ar
OBJECTS_LIB= power.o basicMath.o
OBJECTS_MAIN= main.c myMath.h

.PHONY= mains maind mymaths mymathd

all: maind mains
mymaths: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)
mymathd: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a
maind: main.o libmyMath.so
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
libmyMath.a: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)
libmyMath.so: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
main.o: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -c main.c
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
clean:
	rm -f *.so *.a *.o mains maind
