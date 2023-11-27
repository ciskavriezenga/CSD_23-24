# Makefiles
<a href="https://dinkum.nl/software/cplusplus/doc/project_building/make.html">dinkum: makefiles</a>

<a href="https://dinkum.nl/software/cplusplus/doc/project_building/cpp_compiling_and_linking.html">Compilen en linken</a>

## Makefile 4 - notes
<ul>
  <li>
    .cpp.o → It's a suffix rule telling make how to turn file.cpp into file.o for an arbitrary file.
  </li>
  <li>
    $< → the name of the related file that caused the action. → other option: $*.cpp
  </li>
</ul>


## Makefile symbols
    CXX=g++
    CXXFLAGS=-Wall -std=c++14
    LDFLAGS=
    SOURCE=hello.o main.o

    hello: $(SOURCE)
	   $(CXX) -o $@ $(SOURCE) $(LDFLAGS)

    .cpp.o:
	   $(CXX) -c $(CXXFLAGS) $<

    clean:
	   rm -f hello *.o

| | Meaning |
|---|---|
| $@  | The current target                                   |  
| $*  | Base name of the current target                      |
| $<  | The name of the related file that caused the action. |
| $?  | All prerequisites that are newer than the target     |   
| $^  | All prerequisites, with spaces between them.         |
|||
| CC  | Program for compiling C programs; default is `cc'.    |  
| CXX  | Program for compiling C++ programs; default is `g++'.|
| CFLAGS  | Extra flags to give to the C compiler. |
| CXXFLAGS  | Extra flags to give to the C compiler|   
| LDFLAGS  | Extra flags to give to compilers when they are supposed to invoke the linker, `ld'. |
