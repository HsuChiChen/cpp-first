#makefile practie
# = make 會將整個 Makefile 展開後，再決定變數的值。也就是說，變數的值將會是整個 Mackfile 中最後被指定的值。
#:= 變數的值決定於它在 Makefile 中的位置
#?= 若變數未定義，則替它指定新的值。否則，採用原有的值。
#+= 增加變數
#define 讓變數直接使用"斷行"
#OUTPUT := *.txt

hw01:hw01.cpp
	@g++ -o hw01 hw01.cpp
	@mv hw01 build/hw01
	@cd build &&\
	./hw01
hw02:hw02.cpp
	@g++ -o hw02 hw02.cpp
	@mv hw02 build/hw02
	@cd build &&\
	./hw02
hw03:hw03.cpp
	@g++ -o hw03 hw03.cpp
	@mv hw03 build/hw03
	@cd build &&\
	./hw03
hw04:hw04.cpp
	@g++ -o hw04 hw04.cpp
	@mv hw04 build/hw04
	@cd build &&\
	./hw04
hw05:hw05.cpp
	@g++ -o hw05 hw05.cpp
	@mv hw05 build/hw05
	@cd build &&\
	./hw05
hw06:hw06.cpp fun/swap.cpp   #split to 3 files
	@g++ hw06.cpp fun/swap.cpp -o hw06
	@mv hw06 build/hw06
	@cd build &&\
	./hw06
hw07:hw07.cpp
	@g++ -o hw07 hw07.cpp
	@mv hw07 build/hw07
	@cd build &&\
	./hw07
hw08:hw08.cpp
	@g++ -o hw08 hw08.cpp
	@mv hw08 build/hw08
	@cd build &&\
	./hw08
hw09:hw09.cpp
	@g++ -o hw09 hw09.cpp
	@mv hw09 build/hw09
	@cd build &&\
	./hw09
hw10:hw10.cpp
	@g++ -o hw10 hw10.cpp
	@mv hw10 build/hw10
	@cd build &&\
	./hw10
hw11:hw11.cpp
	@g++ -o hw11 hw11.cpp
	@mv hw11 build/hw11
	@cd build &&\
	./hw11
hw12:hw12.cpp
	@g++ -o hw12 hw12.cpp
	@mv hw12 build/hw12
	@cd build &&\
	./hw12
hw13:hw13.cpp
	@g++ -o hw13 hw13.cpp
	@mv hw13 build/hw13
	@cd build &&\
	./hw13
hw14:hw14.cpp
	@g++ -o hw14 hw14.cpp
	@mv hw14 build/hw14
	@cd build &&\
	./hw14
hw15:hw15.cpp
	@g++ -o hw15 hw15.cpp
	@mv hw15 build/hw15
	@cd build &&\
	./hw15
hw16:hw16.cpp
	@g++ -o hw16 hw16.cpp
	@mv hw16 build/hw16
	@cd build &&\
	./hw16
hw17:hw17.cpp fun/circle.cpp fun/point.cpp #split to 5 files
	@g++ hw17.cpp fun/point.cpp fun/circle.cpp -o hw17
	@mv hw17 build/hw17
	@cd build &&\
	./hw17
hw18:hw18.cpp
	@g++ -o hw18 hw18.cpp
	@mv hw18 build/hw18
	@cd build &&\
	./hw18
hw19:hw19.cpp
	@g++ -o hw19 hw19.cpp
	@mv hw19 build/hw19
	@cd build &&\
	./hw19
hw20:hw20.cpp
	@g++ -o hw20 hw20.cpp
	@mv hw20 build/hw20
	@cd build &&\
	./hw20
hw21:hw21.cpp
	@g++ -o hw21 hw21.cpp
	@mv hw21 build/hw21
	@cd build &&\
	./hw21
hw22:hw22.cpp
	@g++ -o hw22 hw22.cpp
	@mv hw22 build/hw22
	@cd build &&\
	./hw22
hw23:hw23.cpp
	@g++ -o hw23 hw23.cpp
	@mv hw23 build/hw23
	@cd build &&\
	./hw23
hw24:hw24.cpp
	@g++ -o hw24 hw24.cpp
	@mv hw24 build/hw24
	@cd build &&\
	./hw24
hw25:hw25.cpp
	@g++ -o hw25 hw25.cpp
	@mv hw25 build/hw25
	@cd build &&\
	./hw25
hw26:hw26.cpp
	@g++ -o hw26 hw26.cpp
	@mv hw26 build/hw26
	@cd build &&\
	./hw26
hw27:hw27.cpp
	@g++ -o hw27 hw27.cpp
	@mv hw27 build/hw27
	@cd build &&\
	./hw27
hw28:hw28.cpp
	@g++ -o hw28 hw28.cpp
	@mv hw28 build/hw28
	@cd build &&\
	./hw28
hw29:hw29.cpp
	@g++ -o hw29 hw29.cpp
	@mv hw29 build/hw29
	@cd build &&\
	./hw29
hw30:hw30.cpp
	@g++ -o hw30 hw30.cpp
	@mv hw30 build/hw30
	@cd build &&\
	./hw30
hw31:hw31.cpp
	@g++ -o hw31 hw31.cpp
	@mv hw31 build/hw31
	@cd build &&\
	./hw31
hw32:hw32.cpp
	@g++ -o hw32 hw32.cpp
	@mv hw32 build/hw32
	@cd build &&\
	./hw32
hw33:hw33.cpp
	@g++ -o hw33 hw33.cpp
	@mv hw33 build/hw33
	@cd build &&\
	./hw33
hw34:hw34.cpp
	@g++ -o hw34 hw34.cpp
	@mv hw34 build/hw34
	@cd build &&\
	./hw34
hw35:hw35.cpp
	@g++ -o hw35 hw35.cpp
	@mv hw35 build/hw35
	@cd build &&\
	./hw35
hw36:hw36.cpp
	@g++ -o hw36 hw36.cpp
	@mv hw36 build/hw36
	@cd build &&\
	./hw36
hw37:hw37.cpp
	@g++ -o hw37 hw37.cpp
	@mv hw37 build/hw37
	@cd build &&\
	./hw37
hw38:hw38.cpp
	@g++ -o hw38 hw38.cpp
	@mv hw38 build/hw38
	@cd build &&\
	./hw38
hw39:hw39.cpp
	@g++ -o hw39 hw39.cpp
	@mv hw39 build/hw39
	@cd build &&\
	./hw39
hw40:hw40.cpp
	@g++ -o hw40 hw40.cpp
	@mv hw40 build/hw40
	@cd build &&\
	./hw40
hw41:hw41.cpp
	@g++ -o hw41 hw41.cpp
	@mv hw41 build/hw41
	@cd build &&\
	./hw41
hw42:hw42.cpp
	@g++ -o hw42 hw42.cpp
	@mv hw42 build/hw42
	@cd build &&\
	./hw42
hw43:hw43.cpp
	@g++ -o hw43 hw43.cpp
	@mv hw43 build/hw43
	@cd build &&\
	./hw43
hw44:hw44.cpp
	@g++ -o hw44 hw44.cpp
	@mv hw44 build/hw44
	@cd build &&\
	./hw44
hw45:hw45.cpp
	@g++ -o hw45 hw45.cpp
	@mv hw45 build/hw45
	@cd build &&\
	./hw45
hw46:hw46.cpp
	@g++ -o hw46 hw46.cpp
	@mv hw46 build/hw46
	@cd build &&\
	./hw46
hw47:hw47.cpp
	@g++ -o hw47 hw47.cpp
	@mv hw47 build/hw47
	@cd build &&\
	./hw47
hw48:hw48.cpp include/person.hpp  #split to 2 files
	@g++ -o hw48 hw48.cpp include/person.hpp
	@mv hw48 build/hw48
	@cd build &&\
	./hw48
hw49:hw49.cpp
	@g++ -o hw49 hw49.cpp
	@mv hw49 build/hw49
	@cd build &&\
	./hw49
hw50:hw50.cpp
	@g++ -o hw50 hw50.cpp
	@mv hw50 build/hw50
	@cd build &&\
	./hw50
hw51:hw51.cpp
	@g++ -o hw51 hw51.cpp
	@mv hw51 build/hw51
	@cd build &&\
	./hw51
hw52:hw52.cpp
	@g++ -o hw52 hw52.cpp
	@mv hw52 build/hw52
	@cd build &&\
	./hw52
hw53:hw53.cpp
	@g++ -o hw53 hw53.cpp
	@mv hw53 build/hw53
	@cd build &&\
	./hw53
hw54:hw54.cpp
	@g++ -o hw54 hw54.cpp
	@mv hw54 build/hw54
	@cd build &&\
	./hw54
hw55:hw55.cpp
	@g++ -o hw55 hw55.cpp
	@mv hw55 build/hw55
	@cd build &&\
	./hw55
hw56:hw56.cpp
	@g++ -o hw56 hw56.cpp
	@mv hw56 build/hw56
	@cd build &&\
	./hw56
hw57:hw57.cpp
	@g++ -o hw57 hw57.cpp
	@mv hw57 build/hw57
	@cd build &&\
	./hw57
hw58:hw58.cpp
	@g++ -o hw58 hw58.cpp
	@mv hw58 build/hw58
	@cd build &&\
	./hw58
hw59:hw59.cpp
	@g++ -o hw59 hw59.cpp
	@mv hw59 build/hw59
	@cd build &&\
	./hw59

.PHONY: clean
#clean:
#	for number in 01 02 03 04 05 06 ; do \
    rm -f hw$$number ; \
	done
#	rm -f $(OUTPUT)
clean:
	@rm -f build/*
	@echo "clean all file in dir \"build\""