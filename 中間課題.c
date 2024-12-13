#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check_password_strength(const char *password) {
    int has_upper = 0, has_lower = 0;
    int length = strlen(password);

    if (length < 8) {
        return 0;
    }

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            has_upper = 1;
        }
        if (islower(password[i])) {
            has_lower = 1;
        }
    }

    if (has_upper && has_lower) {
        return 1;
    } else {
        return 0;
    }
}

void show_improvement_suggestions(const char *password) {
    int length = strlen(password);

    if (length < 8) {
        printf("- パスワードは少なくとも8文字以上にしてください。\n");
    }

    int has_upper = 0, has_lower = 0;
    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            has_upper = 1;
        }
        if (islower(password[i])) {
            has_lower = 1;
        }
    }

    if (!has_upper) {
        printf("- パスワードには少なくとも1つの大文字を含めてください。\n");
    }
    if (!has_lower) {
        printf("- パスワードには少なくとも1つの小文字を含めてください。\n");
    }
}

int main() {
    char password[100]; 

    printf("パスワードを入力してください: ");
    scanf("%s", password);

    if (check_password_strength(password)) {
        printf("パスワードは強いです。\n");
    } else {
        printf("パスワードは強くありません。\n");
        printf("改善点:\n");
        show_improvement_suggestions(password);
    }

    return 0;
}