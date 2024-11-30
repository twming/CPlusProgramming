#include <cstdio>
#include <cstring>
int main() {
    char s1[] = "Hello";
    char s2[] = " World ";

    strcat(s1, s2); // concatenates s1 and s2
    printf("%s\n",s1);
}
