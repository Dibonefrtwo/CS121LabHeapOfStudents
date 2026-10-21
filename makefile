game: main.o student.o address.o date.o 


main.o: main.cpp student.o address.o date.o


student.o:


address.o: address.cpp address.h


date.o: date.cpp date.h


run: game
	./game

clean: 
	rm *.o
	rm *game

debug: game 
	gdb game
