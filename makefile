outfile:add.o delete.o main.o mod.o save.o show.o sort.o load.o
	cc add.c delete.c main.c mod.c save.c show.c sort.c load.c -o student
add.o:add.c
	cc -c add.c
delete.o:delete.c
	cc -c delete.c
main.o:main.c
	cc -c main.c
mod.o:mod.c
	cc -c mod.c
save.o:save.c
	cc -c save.c
show.o:show.c
	cc -c show.c
sort.o:sort.c
	cc -c sort.c
load.o:load.c
	cc -c load.c
