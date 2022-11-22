CC=gcc
AR = ar
FLAGS= -Wall -g

all: loops mains maindloop maindrec 

loops: libclassloops.a

libclassloops.a:
	$(CC) $(FLAGS) -fPIC -c basicClassification.c advancedClassificationLoop.c
	$(AR) -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o 
 	
recursives: libclassrec.a

libclassrec.a:  
	$(CC) $(FLAGS) -fPIC -c basicClassification.c advancedClassificationRecursion.c
	$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o
	
recursived: libclassrec.so

libclassrec.so: 
	$(CC) $(FLAGS) -fPIC -c basicClassification.c advancedClassificationRecursion.c
	$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o 

loopd:libclassloops.so

libclassloops.so: 
	$(CC) $(FLAGS) -fPIC -c basicClassification.c advancedClassificationLoop.c
	$(CC) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o 

mains:  libclassrec.a
	$(CC) $(FLAGS)  main.c  libclassrec.a -o mains -lm

maindloop: libclassloops.so
	$(CC) $(FLAGS)  main.c ./libclassloops.so -o maindloop  -lm

maindrec: libclassrec.so
	$(CC) $(FLAGS)  main.c ./libclassrec.so -o maindrec  -lm

clean: 
	rm -f  *.o  *.a *.so mains maindloop maindrec
 