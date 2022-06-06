input:
	gcc input.c field.c io.c -o input.o
print:
	gcc print.c field.c io.c -o print.o
generate:
	gcc generate.c field.c io.c -o generate.o
clean:
	rm -f *.o
