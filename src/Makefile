CC = gcc
FLAGS = -Wall -Wextra -Werror -std=c11
SRC_LIB = s21_decimal
TESTFILE = test
# gcov tests definitions
GCOV_FLAG = -fprofile-arcs -ftest-coverage
ifeq ($(shell uname), Linux)
	LIBS_FOR_CHECK_PCKG=-lcheck -lsubunit -lrt -lpthread -lm
else
	LIBS_FOR_CHECK_PCKG=-lcheck
endif

.PHONY: all clean test

all: clean s21_decimal.a test gcov_report

clean:
	@echo "****** clean trash ******"
	rm -f *.a *.o *.so *.out $(TESTFILE) *.info *.gcno *.gcda main_test
	rm -rf report
	@echo "****** done! ******"

t: clean 
	$(CC) main_test.c $(SRC_LIB).c $(FLAGS) $(LIBS_FOR_CHECK_PCKG) -o main_test
	./main_test

test: clean s21_decimal.a
	$(CC) $(TESTFILE).c $(SRC_LIB).a $(FLAGS) $(LIBS_FOR_CHECK_PCKG) -o $(TESTFILE)
	./$(TESTFILE)

test_aux: clean s21_decimal.a
	$(CC) test_aux.c -o test_aux.out $(FLAGS) $(LIBS_FOR_CHECK_PCKG) $(SRC_LIB).a -lm
	./test_aux.out

s21_decimal.a:
	$(CC) -c $(FLAGS) $(SRC_LIB).c -o $(SRC_LIB).o
	ar rcs $(SRC_LIB).a $(SRC_LIB).o
	ranlib $@

gcov_report: clean
	$(CC) -c $(FLAGS) $(GCOV_FLAG) $(SRC_LIB).c -o $(SRC_LIB).a
	$(CC) $(FLAGS) $(GCOV_FLAG) $(SRC_LIB).a $(TESTFILE).c $(LIBS_FOR_CHECK_PCKG) -o gcov.out
	@echo "****** gcov start ******"
	./gcov.out
	lcov -o $(TESTFILE).info -c -d .
	genhtml -o report $(TESTFILE).info

a: cls msg clean s21_decimal.a test_aux

cls:
	clear

linter:
	@echo "****** linter start ******"
	cp ../materials/linters/CPPLINT.cfg CPPLINT.cfg
	python3 ../materials/linters/cpplint.py --extensions=c *.c
	python3 ../materials/linters/cpplint.py --extensions=h *.h
	rm -f CPPLINT.cfg

cppcheck:
	@echo "****** cppcheck start ******"
	cppcheck --enable=all --suppress=missingIncludeSystem $(SRC_LIB).c
	cppcheck --enable=all --suppress=missingIncludeSystem *.h

msg:
	@echo "********** Start compiling **********"

leaks:
ifeq ($(OS), Linux)
	-CK_FORK=no valgrind --tool=memcheck .....
else
	CK_FORK=no leaks -atExit .......
endif
