all : hello

hello : main.o func.o
	gcc $^ -o $@

main.o: main.c
	gcc -c $^ -o $@

func