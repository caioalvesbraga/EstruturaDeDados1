#include <stdio.h>
#include <ctype.h>

int main() {
    int n, m, a, k, i, lowercase_count = 0, uppercase_count = 0, number_count = 0;
    char password[1001];
    scanf("%d %d %d %d %s", &n, &m, &a, &k, password);
    for(i=0; password[i]!='\0'; i++) {
        if(islower(password[i])) {
            lowercase_count++;
        } else if(isupper(password[i])) {
            uppercase_count++;
        } else if(isdigit(password[i])) {
            number_count++;
        }
    }
    if(i>=n && lowercase_count>=m && uppercase_count>=a && number_count>=k) {
        printf("Ok =/\n");
    } else {
        printf("Ufa :)\n");
    }
    return 0;
}