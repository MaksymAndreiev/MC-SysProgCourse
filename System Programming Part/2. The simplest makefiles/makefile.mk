RPS.exe: rps.o
	gcc rps.o -o RPS.exe
	
lab2.o: rps.c
	gcc -c rps.c -o rps.o
