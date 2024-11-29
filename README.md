# C++ Programming
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
### Exercise: boolean.cpp
```
#include <cstdio>

int main(void)
{
    bool a=true, b=false;
    printf("%d\n", a&&b);
    printf("%d\n", a||b);
    printf("%d\n", !b);
}
```
### Exercise: accessstruct.cpp
```
#include <cstdio>

struct Employee {
    int id;
    const char *name;
    const char *role;
};

int main() {
    Employee emp1;
    emp1.id = 1;
    emp1.name = "Ally";
    emp1.role = "Engineer";

    printf("%s role is %s\n",emp1.name, emp1.role);
}
```
### Exercise: enum.cpp
```
#include <iostream>
using namespace std;

int main(void)
{
    enum Color { RED, GREEN, BLUE };
    Color r = RED;
    switch(r)
    {
        case RED  : cout << "red\n";   break;
        case GREEN: cout << "green\n"; break;
        case BLUE : cout << "blue\n";  break;
    }
}
```
### Exercise: void-type.cpp
```
#include <cstdio>
using namespace std;

void func ( void ) {
    puts("this is void func ( void )");
}

int main( int argc, char ** argv ) {
    puts("calling func()");
    func();
    return 0;
}
```
### Exercise: typedef.cpp
```
#include <iostream>
using namespace std;

typedef long miles_t;
typedef long speed_t;

miles_t distance = 5;
speed_t mhz = 3200;


//Note the void type in main(void)
int main(void) {
   
    return 0;
    
}
```
### Exercise: compound.cpp
```
#include <cstdio>

int main()
{
    int i;
    i=3;
    i+=1;
    
    printf("i = %d \n",i);   
    return 0;
}
```
### Exercise: increment.cpp
```
#include <iostream>
using namespace std;


int main(void) {
    int a = 5;
    printf("a = %d\n",++a);
    a = 5;
    printf("a = %d\n",a++);
    
    return 0;
}
```
### Exercise: ifelse.cpp
```
#include <cstdio>

int main()
{
    
   	int a = 6;
    int b = 3;
    
    if (a < b) {
        printf("a is smaller than b\n");
    } else {
        printf("a is larger than b\n");
    }
 
    
    return 0;
}
```
### Exercise: ternary.cpp
```
#include <cstdio>

int main()
{
   	int a = 5;
    int b = 3;
    
   (a < b) ? printf ("a smaller than b\n") : printf("a larger than b\n");
 
    return 0;
}
```
### Exercise: ifelseif.cpp
```
#include <cstdio>

int main()
{
    
   	int a = 5;
    int b = 5;
    
   	if (a < b) {
        printf("a is smaller than b\n");
    } else
        if (a == b ) {
            printf("a is equal to b\n");
        } else {
            printf("a is larger than b\n");
        }
 
    
    return 0;
}
```
### Exercise: switch.cpp
```
#include <cstdio>

int main()
{
   	int a = 5;
    int b = 5;
    
    char grade = 'B';
    switch(grade) {
        case 'A' :
            printf("Excellent!\n" );
            break;
        case 'B' :
            printf("Good Work\n" );
            break;
        case 'C'
            printf("Well Done\n" );
            break;
        default:
            printf("I don't know your grade");
    }
    
    return 0;
}
```
### Exercise: goto.cpp
```
#include <cstdio>

int main() {
	printf("Before the goto.\n");
	goto target;
	printf("After the goto.\n");
	target:
	printf("After the target.\n");
	return 0;
}
```
### Exercise: whileloop.cpp
```
#include <cstdio>

int main()
{
    int i = 10;
    while ( i > 0 )
    {
        printf("Hello %d\n", i );
        i = i -1;
    }
    
    return 0;
}
```
### Exercise: dowhile.cpp
```
#include <cstdio>

int main()
{
    int i = 10;
    do {
        printf("Hello %d\n", i );
        i = i -1;
    }while ( i > 0 );
    
    return 0;
}
```
### Exercise: forloop.cpp
```
#include <cstdio>

int main()
{
    int a;
    for( a = 10; a < 20; a = a + 1 )
    {
        printf("value of a: %d\n", a);
    }
    
    return 0;
}
```
### Exercise: break.cpp
```
#include <cstdio>

int main()
{
    int a;
    for( a = 1; a < 10; a++ )
    {
        if (a == 5 ) {
            break;
        }
        printf("value of a: %d\n", a);
    }
    
    return 0;
}
```
### Exercise: continue.cpp
```
#include <cstdio>

int main()
{
    int a;
    for( a = 1; a < 10; a++ )
    {
        if (a == 5 ) {
            continue;
        }
        printf("value of a: %d\n", a);
    }
    
    return 0;
}
```
### Exercise: for-container.cpp
```
#include <cstdio>

int main() {
    
    int a[] = {3,4,6,7,2,9};
    
    for(int i: a) {
        printf("%d ",i);
    }
    printf("\n");

    return 0;
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
