CC = gcc

target = main.o addNewRec.o count.o delete.o deleteall.o getroll.o reverse.o save.o search.o show.o sort.o

student.exe: ${target}
	${CC} ${target} -o student

main.o: main.c
	${CC} -c main.c

addNewRec.o: addNewRec.c
	${CC} -c addNewRec.c

count.o: count.c
	${CC} -c count.c

delete.o: delete.c
	${CC} -c delete.c

deleteall.o: deleteall.c
	${CC} -c deleteall.c

getroll.o: getroll.c
	${CC} -c getroll.c

reverse.o: reverse.c
	${CC} -c reverse.c

save.o: save.c
	${CC} -c save.c

search.o: search.c
	${CC} -c search.c

show.o: show.c
	${CC} -c show.c

sort.o: sort.c
	${CC} -c sort.c

clear:
	@echo "Cleaning up..."
	del *.o student.exe
