#include <stdio.h>
#include <stdlib.h>

int s21_strlen(char *test, int lim) {
    int schet = 0;
    int proverka;
    while (test[schet] != '\0') {
            schet++;
        }
    if (schet  != lim) {
        proverka = 1;
    } else {
        proverka = 0;
    }
    return proverka;
}

int s21_strcmp(char *strok1, char *strok2, int str) {
    int schet = 0;
    int proverka;
    while (strok1[schet] == strok2[schet]) {
        schet++;
    }
    if (schet != str) {
        proverka = 1;
    } else {
        proverka = 0;
    }
    return proverka;
}

int s21_strcpy(char *str, int s) {
    int proverka;
    int schet = 0;
    char copiya[s];
    while (schet != s) {
        copiya[schet] = str[schet];
        ++schet;
    }
        if (schet == s) {
            proverka = 0;
        } else {
            proverka = 1;
        }
        printf("%s\n", copiya);
    return proverka;
}

int s21_strcat(char *str, char *str2, int size, int m) {
    int proverka = 0;
    int schet = 0;
    for (int i = 0; i < m; i++) {
        str[i+size] = str2[i];
        schet++;
    }
    //str[size+m] = "\0";
    printf("%s", str);
    if (str[schet] != str[m]) {
        proverka = 1;
    } else {
        proverka = 0;
    }
    return proverka;
}

int s21_strchr(char *str, char *s) {
    int proverka = 1;
    int schet = 0;
    while (str[schet] != *"\0") {
        if (str[schet] == *s) {
            proverka = 0;
        }
         schet++;
    }
    printf("%s\n", s);
    return proverka;
}
