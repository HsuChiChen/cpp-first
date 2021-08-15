#makefile practicce
#OUTPUT := *.txt

hw01:hw01.cpp
	g++ -o hw01 hw01.cpp
	@mv hw01 exe/hw01
	@cd exe &&\
	./hw01
hw02:hw02.cpp
	g++ -o hw02 hw02.cpp
	@mv hw02 exe/hw02
	@cd exe &&\
	./hw02
hw03:hw03.cpp
	g++ -o hw03 hw03.cpp
	@mv hw03 exe/hw03
	@cd exe &&\
	./hw03
hw04:hw04.cpp
	g++ -o hw04 hw04.cpp
	@mv hw04 exe/hw04
	@cd exe &&\
	./hw04
hw05:hw05.cpp
	g++ -o hw05 hw05.cpp
	@mv hw05 exe/hw05
	@cd exe &&\
	./hw05
hw06:hw06.cpp #split to 3 files
	g++ hw06.cpp fun/swap.cpp -o hw06
	@mv hw06 exe/hw06
	@cd exe &&\
	./hw06
hw07:hw07.cpp
	g++ -o hw07 hw07.cpp
	@mv hw07 exe/hw07
	@cd exe &&\
	./hw07
hw08:hw08.cpp
	g++ -o hw08 hw08.cpp
	@mv hw08 exe/hw08
	@cd exe &&\
	./hw08
hw09:hw09.cpp
	g++ -o hw09 hw09.cpp
	@mv hw09 exe/hw09
	@cd exe &&\
	./hw09
hw10:hw10.cpp
	g++ -o hw10 hw10.cpp
	@mv hw10 exe/hw10
	@cd exe &&\
	./hw10
hw11:hw11.cpp
	g++ -o hw11 hw11.cpp
	@mv hw11 exe/hw11
	@cd exe &&\
	./hw11
hw12:hw12.cpp
	g++ -o hw12 hw12.cpp
	@mv hw12 exe/hw12
	@cd exe &&\
	./hw12
hw13:hw13.cpp
	g++ -o hw13 hw13.cpp
	@mv hw13 exe/hw13
	@cd exe &&\
	./hw13
hw14:hw14.cpp
	g++ -o hw14 hw14.cpp
	@mv hw14 exe/hw14
	@cd exe &&\
	./hw14
hw15:hw15.cpp
	g++ -o hw15 hw15.cpp
	@mv hw15 exe/hw15
	@cd exe &&\
	./hw15
hw16:hw16.cpp
	g++ -o hw16 hw16.cpp
	@mv hw16 exe/hw16
	@cd exe &&\
	./hw16
hw17:hw17.cpp
	g++ -o hw17 hw17.cpp
	@mv hw17 exe/hw17
	@cd exe &&\
	./hw17
hw18:hw18.cpp
	g++ -o hw18 hw18.cpp
	@mv hw18 exe/hw18
	@cd exe &&\
	./hw18

.PHONY: clean
#clean:
#	for number in 01 02 03 04 05 06 ; do \
    rm -f hw$$number ; \
	done
#	rm -f $(OUTPUT)
clean:
	@rm -f exe/*
	@echo "clean all file in dir \"exe\""
	