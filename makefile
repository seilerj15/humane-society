CXXFLAGS = -Wall
hs: cat.o dog.o main7.o animal.o
	g++ $(CXXFLAGS) -o hs main7.o cat.o dog.o animal.o
main7.o: main7.cpp animal.hpp cat.hpp dog.hpp
	g++ $(CXXFLAGS) -c main7.cpp
animal.o: animal.hpp animal.cpp
	g++ $(CXXFLAGS) -c animal.cpp
cat.o: cat.hpp cat.cpp animal.hpp
	g++ $(CXXFLAGS) -c cat.cpp
dog.o: dog.hpp dog.cpp animal.hpp
	g++ $(CXXFLAGS) -c dog.cpp
clean:
	rm -f *.o hs
