all:main.cpp fun/content.cpp fun/employee.cpp fun/manager.cpp fun/boss.cpp #split to 3 files
	@g++ main.cpp fun/content.cpp fun/employee.cpp fun/manager.cpp fun/boss.cpp -o main
	@mv main build/main
	@cd build &&\
	./main

.PHONY: clean
clean:
	@rm -f build/*
	@echo "clean all file in dir \"build\""