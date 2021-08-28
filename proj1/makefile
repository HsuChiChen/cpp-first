all:main.cpp fun/circle.cpp fun/point.cpp #split to 5 files
	@g++ main.cpp fun/point.cpp fun/circle.cpp -o main
	@mv main build/main
	@cd build &&\
	./hw17
clean:
	@rm -f build/*
	@echo "clean all file in dir \"build\""