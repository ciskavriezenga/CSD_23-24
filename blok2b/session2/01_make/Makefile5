SOURCE=oscillator.o main.o

oscillator: $(SOURCE)
	g++ -o $@ $(SOURCE)

.cpp.o:
	g++ -c $<

clean:
	rm -f oscillator *.o
