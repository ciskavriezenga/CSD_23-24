CXX=g++
CXXFLAGS=-Wall -std=c++14
LDFLAGS=
SOURCE=oscillator.o main.o

oscillator: $(SOURCE)
	$(CXX) -o $@ $(SOURCE) $(LDFLAGS)

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $<
clean:
	rm -f oscillator *.o
