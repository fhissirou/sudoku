CC=gcc


declaration:	main.o liste.o resou.o remplir.o verif.o affichage.o aleatoire.o 
		$(CC) main.o liste.o resou.o remplir.o verif.o affichage.o aleatoire.o -o sudoku

main.o:		main.c declaration.h 
		$(CC) -c main.c -o main.o

affichage.o:	affichage.c declaration.h
		$(CC) -c affichage.c -o affichage.o

remplir.o:	remplir.c declaration.h
		$(CC) -c remplir.c -o remplir.o

liste.o:	liste.c declaration.h
		$(CC) -c liste.c -o liste.o

resou.o:	resou.c declaration.h
		$(CC)  -c resou.c -o resou.o

aleatoire.o:	aleatoire.c declaration.h
		$(CC) -c aleatoire.c -o aleatoire.o

verif.o:	verif.c declaration.h
		$(CC) -c verif.c -o verif.o

clean:
	@rm -f *.o
	@rm -f core
	@rm -f *~