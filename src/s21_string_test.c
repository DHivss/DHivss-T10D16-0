#include <stdio.h>
#include <stdlib.h>
#include "s21_string.h"

#ifdef strlen_tests
    #define choice s21_strlen_test()
#endif

#ifdef strcmp_tests
    #define choice s21_strcmp_test()
#endif

#ifdef strcpy_tests
    #define choice s21_strcpy_test()
#endif

#ifdef strcat_tests
    #define choice s21_strcat_test()
#endif

#ifdef strchr_tests
    #define choice s21_strchr_test()
#endif

void s21_strcat_test();
void s21_strlen_test();
void s21_strcmp_test();
void s21_strcpy_test();
void s21_strchr_test();

int main() {
    choice;
}
void s21_strlen_test() {
    char test1[] = {"helloworld"};
    int limit1 = 10;
    char test2[] = {"hello\0world"};
    int limit2 = 11;
    char test3[] = {"hello\0"};
    int limit3 = 5;
    char test4[] = {"Hello  "};
    int limit4 = 6;
    char test5[] = {"Привет"};
    int limit5 = 6;
    char test6[] = {""};
    int limit6 = 0;
    char test7[]= {'H', 'e', 'l', '\0', 'l', 'o'};
    int limit7 = 6;
    char test8[] = {" "};
    int limit8 = 1;
    printf("%s %d\n", test1, limit1);
    printf(s21_strlen(test1, limit1) != 1 ? "SUCCESS\n" : "FAIL\n");

    printf("%s %d\n", test2, limit2);
    printf(s21_strlen(test2, limit2) != 1 ? "SUCCESS\n" : "FAIL\n");


    printf("%s %d\n", test3, limit3);
    printf(s21_strlen(test3, limit3) != 1 ? "SUCCESS\n" : "FAIL\n");

    printf("%s %d\n", test4, limit4);
    printf(s21_strlen(test4, limit4) != 1 ? "SUCCESS\n" : "FAIL\n");

    printf("%s %d\n", test5, limit5);
    printf(s21_strlen(test5, limit5) != 1 ? "SUCCESS\n" : "FAIL\n");

    printf("%s %d\n", test6, limit6);
    printf(s21_strlen(test6, limit6) != 1 ? "SUCCESS\n" : "FAIL\n");

    printf("%s %d\n", test7, limit7);
    printf(s21_strlen(test7, limit7) != 1 ? "SUCCESS\n" : "FAIL\n");
    
    printf("%s %d\n", test8, limit8);
    printf(s21_strlen(test8, limit8) != 1 ? "SUCCESS\n" : "FAIL\n");
    
}

void s21_strcmp_test() {
    int str;
    char stroka1[] = {'h', 'i', 'w', 'o', 'r', 'l', 'd', ' ', '!'};
    char stroka2[] = {'h', 'i', 'w', 'o', 'r', 'l', 'd', ' ', '!'};
    str = 9;
    printf("%s\t%s\t%d\n", stroka1, stroka2, str);
    printf(s21_strcmp(stroka1, stroka2, str) != 1 ? "SUCCESS\n" : "FAIL\n");

    char stroka3[] = "morning is cool";
    char stroka4[] = "sun is cool";
    str = 14;
    printf("%s %s %d\n", stroka3, stroka4, str);
    printf(s21_strcmp(stroka3, stroka4, str) != 1 ? "SUCCESS\n" : "FAIL\n");

    char stroka5[] = "rock is cool";
    char stroka6[] = "rock is cooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooool";
    str = 14;
    printf("%s %s %d\n", stroka5, stroka6, str);
    printf(s21_strcmp(stroka5, stroka6, str) != 1 ? "SUCCESS\n" : "FAIL\n");

    char stroka7[] = " ";
    char stroka8[] = "";
    str = 1;
    printf("%s %s %d\n", stroka7, stroka8, str);
    printf(s21_strcmp(stroka7, stroka8, str) != 1 ? "SUCCESS\n" : "FAIL\n");

}
void s21_strcpy_test() {
    char str1[] = "thislinemustbecopied";
    int s = 21;
    printf("%s %d\n", str1, s);
    printf(s21_strcpy(str1, s) != 1 ? "SUCCESS\n" : "FAIL\n");

    char str3[] = {'h', 'e', 'l', 'l', 'o', ' '};
    s = 6;
    printf("%s %d\n", str3, s);
   printf(s21_strcpy(str3, s) != 1 ? "SUCCESS\n" : "FAIL\n");

    char str4[] = {'h', 'e', 'l', ' ', 'l', 'o', '!'};
    s = 7;
     printf("%s %d\n", str4, s);
    printf(s21_strcpy(str4, s) != 1 ? "SUCCESS\n" : "FAIL\n");

}

void s21_strcat_test() {
    char test1[10] = "hello";
    char test2[] = "world";
    int m = 5;
    int size = 5;
    printf("%s %s %d\n", test1, test2, m);
    printf(s21_strcat(test1, test2, size, m) != 1 ? "SUCCESS\n" : "FAIL\n");
}

void s21_strchr_test() {
    char str1[] = "inthisyline";
    char str2[] = "y";
    printf("\n%s %s\n", str1, str2);
    printf(s21_strchr(str1, str2) != 1 ? "SUCCESS\n" : "FAIL\n");

    char str3[] = "rock is cool";
    char str4[1] = "z";
    printf("%s %s\n", str3, str4);
    printf(s21_strchr(str3, str4) != 1 ? "SUCCESS\n" : "FAIL\n");

}
