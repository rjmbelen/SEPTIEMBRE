all:
	make -C consola
	make -C cpu
	make -C kernel
	make -C memoria

clean:
	make clean -C consola
	make clean -C cpu
	make clean -C kernel
	make clean -C memoria