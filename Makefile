CC=gcc
AR = ar
FLAGS= -Wall -g

# all: clean loops recursives recursived loopd
# 	$(CC) $(FLAGS) basicClassification.c advancedClassificationLoop.c NumClass.h main.c -o main.out
all: mains maindloop maindrec mainsloop
# all: loops recursives


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

mainsloop:  loops

mains: recursives
	$(CC) $(FLAGS)  main.c  libclassrec.a -o mains

maindloop: loopd 
	$(CC) $(FLAGS)  main.c  -o maindloop ./libclassloops.so

maindrec: recursived
	$(CC) $(FLAGS)  main.c  -o maindrec ./libclassrec.so

run:
	./main.out

clean: 
	rm -f *.out *.o  *.a *.so mains maindloop maindrec
 


# libclassloops.a

# advancedClassificationRecursion
# basicClassification
# NumClass

# clean : rm -r libclassloop.a