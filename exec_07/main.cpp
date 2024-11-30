#include <cstdio>
#include <cstring>
int main(){
    char s1[] = "Hello";
    char s2[] = "";

    strcpy(s2,s1); // Copies s1 into s2.
    printf("%s\n",s2);
}
