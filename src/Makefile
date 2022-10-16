CC = gcc -Wall -Werror -Wextra
all: build
TARGET1: strlen_tests
TARGET2: strcmp_tests
TARGET3: strcpy_tests
TARGET4: strcat_tests
TARGET5: strchr_tests
rebuild: clean all
clean all:
	rm -rf ../build/*.o

strlen_tests:
	$(CC) -D strlen_tests s21_string_test.c s21_string.c -o ../build/Quest_1

strcmp_tests:
	$(CC) -D strcmp_tests s21_string_test.c s21_string.c -o ../build/Quest_2

strcpy_tests:
	$(CC) -D strcpy_tests s21_string_test.c s21_string.c -o ../build/Quest_3

strcat_tests:
	$(CC) -D strcat_tests s21_string_test.c s21_string.c -o ../build/Quest_4

strchr_tests:
	$(CC) -D strchr_tests s21_string_test.c s21_string.c -o ../build/Quest_5