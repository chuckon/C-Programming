//
//  main.c
//  namePIN
//
//  Created by Pingo on 1/7/18.
//  Copyright © 2018 Pingo. All rights reserved.
//

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc, const char * argv[]) {
    if(argc != 3) {
        printf("Wrong number of arguments (enter name and lastname only!)\n");
        return 1;
    } else {
//        char x = 'a';
//        char X = 'z';
        char * name;
        char * last;
        char name2;
        char last2;
        name = argv[1];
        last = argv[2];
        name2 = tolower(*name);
        last2 = tolower(*last);
        if(((name2 < 97) || (name2 > 122)) || ((last2 < 97) || (last2 > 122))) {
            printf("Wrong name(s)!\n");
            return 2;
        } else {
            char code[7];
            char ft[3];
            char st[3];
            char tt[3];
            int f = name2 - 96;
            int s = last2 - 96;
            if(f < 10) {
                sprintf(ft, "0%d", f);
            } else {
                sprintf(ft, "%d", f);
            }
            if(s < 10) {
                sprintf(st, "0%d", s);
            } else {
                sprintf(st, "%d", s);
            }
            if(f + s < 10) {
                sprintf(tt, "0%d", f + s);
            } else {
                sprintf(tt, "%d", f + s);
            }
            strcpy(code, tt);
            strcat(code, st);
            strcat(code, ft);
//            printf("%c\n", x);
//            printf("%d\n", x);
//            printf("%d\n", X);
//            printf("%d\n", argc);
//            printf("%s\n", name);
//            printf("%s\n", last);
//            printf("%c\n", name2);
//            printf("%c\n", last2);
//            printf("%s\n", ft);
//            printf("%s\n", st);
//            printf("%s\n", tt);
            printf("%s\n", code);
        }
    }
    return 0;
}

