//written by bla
//inspired by nnp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum{
LANG_ENGLISH,
LANG_FRANCAIS,
LANG_DEUTSCH,
};

int language = LANG_ENGLISH;

struct UserRecord{
        char name[40];
        char password[32];
        int id;
};

void greetuser(struct UserRecord user){
        char greeting[64];
        switch(language){
                case LANG_ENGLISH:
                        strcpy(greeting, "Hi "); break;
                case LANG_FRANCAIS:
                        strcpy(greeting, "Bienvenue "); break;
                case LANG_DEUTSCH:
                        strcpy(greeting, "Willkommen "); break;
        }
        strcat(greeting, user.name);
        printf("%s\n", greeting);
}

int main(int argc, char **argv, char **env){
        if(argc != 3) {
                printf("USAGE: %s [name] [password]\n", argv[0]);
                return 1;
        }

        struct UserRecord user = {0};
        strncpy(user.name, argv[1], sizeof(user.name));
        strncpy(user.password, argv[2], sizeof(user.password));

        char *envlang = getenv("LANG");
        if(envlang)
                if(!memcmp(envlang, "fr", 2))
                        language = LANG_FRANCAIS;
                else if(!memcmp(envlang, "de", 2))
                        language = LANG_DEUTSCH;

        greetuser(user);
}
