CXX= g++
CXXFLAGS = -I/usr/local/include -Wall -std=c++1z
LDFLAGS=

MODULES := main
SRC=
# include the description for each module
include $(patsubst %,%/module.mk,$(MODULES))

# look for include files in
# each of the modules
CXXFLAGS += $(patsubst %,-I%,./$(MODULES))

# determine the object files --> replace all .cpp in SRC with .o
OBJ := $(patsubst %.cpp,%.o, $(filter %.cpp,$(SRC)))

# log SRC and OBJ
$(info $$SRC is [${SRC}])
$(info $$OBJ is [${OBJ}])

TARGET=example

# link the program
$(TARGET):$(OBJ)
	$(CXX) -o $@ $(OBJ) $(LDFLAGS)

# -o $*.o --> write .o file to the directory of the current target
.cpp.o:
	$(CXX) -c $< $(CXXFLAGS) -o $*.o

clean:
	rm -f $(TARGET) ./*/*.o
