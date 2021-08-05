OUTPUT := hw01 hw02 hw04 hw05 hw06 hw07 hw08 hw09 hw10 hw11

hw01:hw01.cpp
	g++ -o hw01 hw01.cpp
	./hw01
hw02:hw02.cpp
	g++ -o hw02 hw02.cpp
	./hw02
hw03:hw03.cpp
	g++ -o hw03 hw03.cpp
	./hw03
hw04:hw04.cpp
	g++ -o hw04 hw04.cpp
	./hw04
hw05:hw05.cpp
	g++ -o hw05 hw05.cpp
	./hw05
hw06:hw06.cpp
	g++ -o hw06 hw06.cpp
	./hw06
hw07:hw07.cpp
	g++ -o hw07 hw07.cpp
	./hw07
hw08:hw08.cpp
	g++ -o hw08 hw08.cpp
	./hw08
hw9:hw09.cpp
	g++ -o hw09 hw09.cpp
	./hw09
hw10:hw10.cpp
	g++ -o hw10 hw10.cpp
	./hw10
hw11:hw11.cpp
	g++ -o hw11 hw11.cpp
	./hw11

.PHONY: clean
clean:
	rm -f $(OUTPUT) *.txt