#makefile practicce
#OUTPUT := *.txt

hw01:hw01.cpp
	g++ -o hw01 hw01.cpp
	@mv hw01 build/hw01
	@cd build &&\
	./hw01
hw02:hw02.cpp
	g++ -o hw02 hw02.cpp
	@mv hw02 build/hw02
	@cd build &&\
	./hw02
hw03:hw03.cpp
	g++ -o hw03 hw03.cpp
	@mv hw03 build/hw03
	@cd build &&\
	./hw03
hw04:hw04.cpp
	g++ -o hw04 hw04.cpp
	@mv hw04 build/hw04
	@cd build &&\
	./hw04
hw05:hw05.cpp
	g++ -o hw05 hw05.cpp
	@mv hw05 build/hw05
	@cd build &&\
	./hw05
hw06:hw06.cpp fun/swap.cpp   #split to 3 files
	g++ hw06.cpp fun/swap.cpp -o hw06
	@mv hw06 build/hw06
	@cd build &&\
	./hw06
hw07:hw07.cpp
	g++ -o hw07 hw07.cpp
	@mv hw07 build/hw07
	@cd build &&\
	./hw07
hw08:hw08.cpp
	g++ -o hw08 hw08.cpp
	@mv hw08 build/hw08
	@cd build &&\
	./hw08
hw09:hw09.cpp
	g++ -o hw09 hw09.cpp
	@mv hw09 build/hw09
	@cd build &&\
	./hw09
hw10:hw10.cpp
	g++ -o hw10 hw10.cpp
	@mv hw10 build/hw10
	@cd build &&\
	./hw10
hw11:hw11.cpp
	g++ -o hw11 hw11.cpp
	@mv hw11 build/hw11
	@cd build &&\
	./hw11
hw12:hw12.cpp
	g++ -o hw12 hw12.cpp
	@mv hw12 build/hw12
	@cd build &&\
	./hw12
hw13:hw13.cpp
	g++ -o hw13 hw13.cpp
	@mv hw13 build/hw13
	@cd build &&\
	./hw13
hw14:hw14.cpp
	g++ -o hw14 hw14.cpp
	@mv hw14 build/hw14
	@cd build &&\
	./hw14
hw15:hw15.cpp
	g++ -o hw15 hw15.cpp
	@mv hw15 build/hw15
	@cd build &&\
	./hw15
hw16:hw16.cpp
	g++ -o hw16 hw16.cpp
	@mv hw16 build/hw16
	@cd build &&\
	./hw16
hw17:hw17.cpp fun/circle.cpp fun/point.cpp #split to 5 files
	g++ hw17.cpp fun/point.cpp fun/circle.cpp -o hw17
	@mv hw17 build/hw17
	@cd build &&\
	./hw17
hw18:hw18.cpp
	g++ -o hw18 hw18.cpp
	@mv hw18 build/hw18
	@cd build &&\
	./hw18

.PHONY: clean
#clean:
#	for number in 01 02 03 04 05 06 ; do \
    rm -f hw$$number ; \
	done
#	rm -f $(OUTPUT)
clean:
	@rm -f build/*
	@echo "clean all file in dir \"build\""
	