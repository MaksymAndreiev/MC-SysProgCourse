lab5: memory.exe

lab5.exe: memory.o
	gcc memory.o -o memory.exe
	
lab5.o: memory.c
	gcc -c memory.c -o memory.o
