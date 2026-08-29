all: movies

movies: Utilities.o main.o FileManager.o MovieCollection.o Movie.o
	g++ -std=c++17 -Wall -Wextra main.o FileManager.o MovieCollection.o Movie.o Utilities.o -o movies

main.o: main.cpp
	g++ -std=c++17 -c main.cpp -o main.o

FileManager.o: FileManager.cpp FileManager.h MovieCollection.o
	g++ -std=c++17 -c FileManager.cpp -o FileManager.o

MovieCollection.o: MovieCollection.cpp MovieCollection.h
	g++ -std=c++17 -c MovieCollection.cpp -o MovieCollection.o

Movie.o: Movie.cpp Movie.h
	g++ -std=c++17 -c Movie.cpp -o Movie.o

Utilities.o: Utilities.cpp Utilities.h
	g++ -std=c++17 -c Utilities.cpp -o Utilities.o

clean:
	rm -f movies Utilities.o Movie.o MovieCollection.o FileManager.o main.o
