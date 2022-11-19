
# GCC Instructions
gcc -o - will create a runnable file that will include isinde it a main function. can work with c files and a file
    when linking a dynamic library (.so) use command l<libname> (name without lib prefix and .so sufix)
gcc -o -shared - will create a dynamic link lib. format of file name is lib<name>.so and list of files is .o (compiled files)
gcc -c  - will only create a binary o file that will later be used to create a library
ar -rcs - will take a list of .o and .h files and wrap them up inside a *.a (archive / static lib) file in the format of lib<name>.a 

