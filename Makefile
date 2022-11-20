CC=gcc
AR = ar
FLAGS= -Wall -g

all: loops mains maindloop maindrec 

loops: libclassloops.a

libclassloops.a:
	$(CC) -c basicClassification.c advancedClassificationLoop.c
	$(AR) -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o 
	$(AR) -t libclassloops.a
 	
recursives: libclassrec.a

libclassrec.a:  
	$(CC) -c basicClassification.c advancedClassificationRecursion.c
	$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
	$(AR) -t libclassrec.a
	
recursived: libclassrec.so

libclassrec.so: 
	$(CC) -c basicClassification.c advancedClassificationRecursion.c
	$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o 

loopd:libclassloops.so

libclassloops.so: 
	$(CC) -c basicClassification.c advancedClassificationLoop.c
	$(CC) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o 

mains:  libclassrec.a
	$(CC) $(FLAGS)  main.c  libclassrec.a -o mains -lm

maindloop: libclassloops.so
	$(CC) $(FLAGS)  main.c  -o maindloop ./libclassloops.so -lm

maindrec: libclassrec.so
	$(CC) $(FLAGS)  main.c  -o maindrec ./libclassrec.so -lm

clean: 
	rm -f  *.o  *.a *.so mains maindloop maindrec
 