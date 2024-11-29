# CPlusProgramming
C++ Programming

### Exercise: hello.cpp
```
#include <cstdio>
int main()
{
    printf("Hello, World!\n");
    return 0;
}
```
### Exercise: printf.cpp
```
#include <cstdio>

int main()
{
    printf("We have %d cats\n",3);
    return 0;
}
```
### Exercise: integer.cpp
```
#include <cstdio>
//using namespace std;

int main()
{
    int i = 7;
    printf("The number is %d\n",i);
    return 0;
}
```
### Exercise: float.cpp
```
#include <cstdio>
//using namespace std;


int main(void) {
    puts("Floating point type usage in C:");
    
    // Floating point types
    float			floatNumber;
    double			doubleNumber;
    
    // Size of floating point types
    printf("Storage size for unsigned float : %lu  bytes \n", sizeof(float));
    printf("Storage size for double :         %lu  bytes \n", sizeof(double));
    
    floatNumber = 2.0/3.0;
    doubleNumber = 2.0/3.0;
    
    puts("\nCompare precision at 4 decimal points:");
    printf("floatNumber      = %1.4f\n", floatNumber);
    printf("doubleNumber     = %1.4lf\n", doubleNumber);
    
    puts("\nCompare precision at 10 decimal points:");
    printf("floatNumber      = %1.10f\n", floatNumber);
    printf("doubleNumber     = %1.10lf\n", doubleNumber);
    
    puts("\nCompare precision at 30 decimal points:");
    printf("floatNumber      = %1.30f\n", floatNumber);
    printf("doubleNumber     = %1.30lf\n", doubleNumber);
    return 0;
}
```
### Exercise: stringtype_cstdio.cpp
```
#include <cstdio>

int main()
{
    char address[] = "Wood Square";
    const char *name;
    
    printf("We are now at %s \n",address);
    
    name = "John";
    printf("Hello, I am %s\n",name);
    
    return 0;
}
```
### Exercise: escape-char.cpp
```
#include <cstdio>

int main()
{
    puts("Here are some examples of escape characters \\ \' \"");
    return 0;
}
```
### Exercise: stringtype_strcpy.cpp
```
#include <cstdio>
#include <cstring>
int main(){
    char s1[] = "Hello";
    char s2[] = "";
  
    strcpy(s2,s1); // Copies s1 into s2.
    printf("%s\n",s2);
}
```
### Exercise: stringtype_strcat.cpp
```
#include <cstdio>
#include <cstring>
int main() {
    char s1[] = "Hello";
    char s2[] = " World ";
 
    strcat(s1, s2); // concatenates s1 and s2
    printf("%s\n",s1);
}
```
### Exercise: stringtype_strlen.cpp
```
#include <cstdio>
#include <cstring>
int main(){
    char s1[] = "Hello";

    printf("%d\n",strlen(s1));
}
```
### Exercise: stringtype_scanf.cpp
```
#include <cstdio>
int main() {
    char name[] = "";
    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Hello %s\n",name);
}
```
### Exercise: stringtype_iostream.cpp
```
#include <iostream>
#include <string>
using namespace std;
int main() {
    string s1 = "Hello";
    string s2 = " World, ";
    char greet[] = "Good Day!";
    s1 += s2; //  concatenates s1 and s2
    s1 += greet; //  concatenates s1 and greet
    cout << s1 << endl;
}
```
### Exercise: stringtype_cout1.cpp
```
#include <iostream>
using namespace std;
int main()
{
    char name[] = "Ally";
    cout << "Hello" << " " << name << endl;
    return 0;
}
```
### Exercise: stringtype_cout2.cpp
```
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1 = "Hello";
    string s2 = " World ";
    cout << s1 << s2 << endl;
}
```
### Exercise: stringtype_size.cpp
```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "Hello";
    cout <<  s1.size() << endl;
}
```
### Exercise: cin.cpp
```
#include <iostream>
using namespace std;
int main( )
{
    char name[50];
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Hello " << name << endl;
}
```
### Exercise:
```

```
### Exercise: 
```

```
### Exercise: 
```

```
### Exercise:
```

```
### Exercise: 
```

```
### Exercise: 
```

```
### Exercise:
```

```
### Exercise: 
```

```
### Exercise: 
```

```
### Exercise:
```

```
### Exercise: 
```

```
### Exercise: 
```

```
### Exercise:
```

```
### Exercise: 
```

```
### Exercise: 
```

```
### Exercise:
```

```
### Exercise: 
```

```
### Exercise: 
```

```
### Exercise:
```

```
