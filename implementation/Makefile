ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif


SRC = src\marks_input.c src\student_input.c src\marks_calculate.c 

test_src = src\marks_calculate_test.c

main_src = main.c

UNITY = unity/unity.c 

INC = inc


test: $(SRC) $(test_src)
	gcc $(SRC) $(test_src) -I$(INC) -I -c $(UNITY) -o test.exe

run: test.exe
	./test.exe

pro: $(main_src) $(SRC) 
	gcc $(main_src) $(SRC) -I$(INC)  -o pro.exe


pro_run: pro.exe
	./pro.exe

clean:
	del /q *.exe