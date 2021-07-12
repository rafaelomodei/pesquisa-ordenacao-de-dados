all: main clean

main: libaries.a main.c
	gcc -o main main.c libaries.a

libaries.a: file.c component.c bubbleSort.c insertSort.c selectionSort.c shellSort.c radixSort.c  heapSort.c
	ar ruv libaries.a file.o component.o bubbleSort.o insertSort.o selectionSort.o shellSort.o radixSort.o heapSort.o

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

radixSort.c: src/library/radixSort/radixSort.c src/library/radixSort/radixSort.h
	gcc -o radixSort.o -c src/library/radixSort/radixSort.c

heapSort.c: src/library/heapSort/heapSort.c src/library/heapSort/heapSort.h
	gcc -o heapSort.o -c src/library/heapSort/heapSort.c

clean:
	rm -rf *.o
	rm -rf *.a