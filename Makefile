TARGET_FILE=final_executable
OBJECT_FILES=cmpDate.o datefmt.o diffDays.o isLeap.o isValid.o julian.o weekday.o main.o

$(TARGET_FILE):$(OBJECT_FILES)
	gcc $(OBJECT_FILES) -o $(TARGET_FILE)

cmpDate.o:cmpDate.c
	gcc -c cmpDate.c

datefmt.o:datefmt.c
	gcc -c datefmt.c

diffDays.o:diffDays.c
	gcc -c diffDays.c

isLeap.o:isLeap.c
	gcc -c isLeap.c

isValid.o:isValid.c
	gcc -c isValid.c

julian.o:julian.c
	gcc -c julian.c

weekday.o:weekday.c
	gcc -c weekday.c

main.o:main.c
	gcc -c main.c
