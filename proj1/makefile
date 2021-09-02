all:main.cpp fun/content.cpp fun/employee.cpp fun/manager.cpp fun/boss.cpp
	@g++ main.cpp fun/content.cpp fun/employee.cpp fun/manager.cpp fun/boss.cpp -o main
	@mv main build/main
	@cd build &&\
	./main

debug:main.cpp fun/content.cpp fun/employee.cpp fun/manager.cpp fun/boss.cpp
	@g++ main.cpp fun/content.cpp fun/employee.cpp fun/manager.cpp fun/boss.cpp -o main -g
	@mv main build/main
	@cd build &&\
	gdb ./main

.PHONY: clean
clean:
	@rm -f build/*
	@echo "clean all file in dir \"build\""