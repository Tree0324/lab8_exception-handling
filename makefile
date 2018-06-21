lab8: lab8.o genMino.o MinoT.o MinoS.o MinoI.o MinoL.o Mino.o
	g++ -o lab8 lab8.o genMino.o MinoT.o MinoS.o MinoI.o MinoL.o Mino.o

Mino.o: Mino.cpp Mino.h
	g++ -c Mino.cpp

MinoI.o : MinoI.cpp MinoI.h
	g++ -c MinoI.cpp

MinoS.o : MinoS.cpp MinoS.h
	g++ -c MinoS.cpp

MinoL.o : MinoL.cpp MinoL.h
	g++ -c MinoL.cpp

MinoT.o : MinoT.cpp MinoT.h
	g++ -c MinoT.cpp

genMino.o: genMino.cpp genMino.h
	g++ -c genMino.cpp

lab8.o: lab8.cpp genMino.h
	g++ -c lab8.cpp

clean:
	rm lab8 *.o
	