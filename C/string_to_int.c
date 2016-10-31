int str_to_int(char *str) {
    int num = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        num = num * 10 + str[i] - '0';
    }

    return num;
}
