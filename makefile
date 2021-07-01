all: pod

pod: libaries.a main.c
	gcc -o pod -c main.c libaries.a

libaries.a: file.c component.c bubbleSort.c insertSort.c selectionSort.c shellSort.c
	ar ruv libaries.a file.o component.o bubbleSort.o insertSort.o selectionSort.o shellSort.o

file.c: src/utils/file.c src/utils/file.h
	gcc -o file.o -c src/utils/file.c

component.c: src/components/component.c src/components/component.h
	gcc -o component.o -c src/components/component.c

bubbleSort.c: src/library/bubbleSort/bubbleSort.c src/library/bubbleSort/bubbleSort.h
	gcc -o bubbleSort.o -c src/library/bubbleSort/bubbleSort.c

insertSort.c: src/library/insertSort/insertSort.c src/library/insertSort/insertSort.h
	gcc -o insertSort.o -c src/library/insertSort/insertSort.c

selectionSort.c: src/library/selectionSort/selectionSort.c src/library/selectionSort/selectionSort.h
	gcc -o selectionSort.o -c src/library/selectionSort/selectionSort.c

shellSort.c: src/library/shellSort/shellSort.c src/library/shellSort/shellSort.h
	gcc -o shellSort.o -c src/library/shellSort/shellSort.c
