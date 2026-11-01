outfile:Add.o delete.o exit.o main.o mod.o save.o show.o sort.o
	cc Add.c delete.c exit.c main.c mod.c save.c show.c sort.c -o student
add.o:Add.c
	cc -c Add.c
delete.o:delete.c
	cc -c delete.c
exit.o:exit.c
	cc -c exit.c
main.o:main.c
	cc -c main.c
modify.o:mod.c
	cc -c mod.c
save.o:save.c
	cc -c save.c
show.o:show.c
	cc -c show.c
sort.o:sort.c
	cc -c sort.c
