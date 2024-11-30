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
### Exercise: areaofcircle.cpp
```
#include <iostream>
using namespace std;

double areaofcircle(double r);

int main(void) {

    double a;
    
    a = areaofcircle(2);
    printf("a = %0.2f\n",a);
}


double areaofcircle(double r){
    
    double pi = 3.1417;
    return pi*r*r;
}
```
### Exercise: callbyvalue.cpp
```
#include <cstdio>

void func(int a){
    ++a;
    
}

int main()
{
    
    int a = 1;
    
    func(a);
    
    printf("The value of a is %d\n",a);
    return 0;
}
```
### Exercise: reference.cpp
```
#include <cstdio>

void func(int* a){
    ++(*a);
    
}

int main()
{
    
    int a = 1;
    
    func(&a);
    
    printf("The value of a is %d\n",a);
    return 0;
}
```
### Exercise: variablescope.cpp
```
#include <cstdio>

void func(int a){
    ++a;
    printf("The value of a inside is %d\n",a);
}

int main()
{
    
    int a = 1;
    
    func(a);
    
    printf("The value of a outside is %d\n",a);
    return 0;
}
```
### Exercise: staticvariable.cpp

```
#include <cstdio>

void counter(){
    static int a =0;
    ++a;
    printf("%d\n",a);
}

int main()
{
    int a = 5;
    
    for(int i=0;i<10;i++){
        counter();
    }
    
    printf("a outside is %d\n",a);
    return 0;
}
```
### Exercise: passingarray.cpp
```
#include <cstdio>

//Function prototypes
void func1(int array[]);
void func2(int *array);

int main(void) {
    int list[5] = {5,7,9,23,15};
    
    func1(list);
    func2(list);
    
    return 0;
}

void func1(int array[]){
    printf("array[3] = %d\n", array[3]);
}

void func2(int *array){
    printf("array[3] = %d\n", array[3]);
}
```
### Exercise: return_values.cpp
```
#include <cstdio>

float add2numbers(float a, float b) {
    
    float z = a + b;
    return z;
}

int main()
{
    float c;
    c = add2numbers(5.6,4.5);
    printf("The sum is %.2f\n",c);
    
    return 0;
}
```
### Exercise: func_overload.cpp

```
#include <cstdio>
using namespace std;

// volume of a cube
double volume( double a ) {
    printf("cube of %.3lf\n", a);
    return a * a * a;
}

// volume of a cylinder
double volume( double r, double h ) {
    const static double _pi = 3.141592653589793;
    printf("cylinder of %.3lf x %.3lf\n", r, h);
    return _pi * r * r * h;
}

// volume of a cuboid
double volume( double a, double b, double c ) {
    printf("cuboid of %.3lf x %.3lf x %.3lf\n", a, b, c);
    return a * b * c;
}

int main( int argc, char ** argv ) {
    printf("volume of a 2 x 2 x 2 cube: %.3lf\n", volume(2.0));
    printf("volume of a cylinder, radius 2, height 2: %.3lf\n", volume(2.0, 2.0));
    printf("volume of a 2 x 3 x 4 cuboid: %.3lf\n", volume(2.0, 3.0, 4.0));
    return 0;
}
```
### Exercise: prototype.cpp
```
#include <cstdio>
using namespace std;

double func(double, double);  //prototype

int main(void) {
    double result = func(10,20);
    printf("result = %lf\n", result);
    
    return 0;
}

double func(double x, double y){
    return x*y;
}
```
### Exercise: class.cpp
```
#include <cstdio>

class Box {
public:
    int height;
    int width;
    int length;
    
    int volume(){
        return height*width*length;
    }
};


int main()
{
    Box box1, box2, box3;
    
    box1.height = 3;
    box1.width = 3;
    box1.length = 3;
    
    box2.height = 4;
    box2.width = 4;
    box2.length = 4;
    
    box3.height = 5;
    box3.width = 5;
    box3.length = 5;
    
    int v = box1.volume();
    printf("The volume of Box 1 is %d\n",v);
    
    v = box2.volume();
    printf("The volume of Box 2 is %d\n",v);
    
    v = box3.volume();
    printf("The volume of Box 3 is %d\n",v);
    
    return 0;
}
```
### Exercise: class-scope-resolution.cpp
```
#include <cstdio>

class Box {
public:
    int height;
    int width;
    int length;
    
    int volume();
    
};

int Box::volume(){
    return height*width*length;
}

int main()
{
    Box box1, box2, box3;
    
    box1.height = 3;
    box1.width = 3;
    box1.length = 3;
    
    box2.height = 4;
    box2.width = 4;
    box2.length = 4;
    
    box3.height = 5;
    box3.width = 5;
    box3.length = 5;
    
    int v = box1.volume();
    printf("The volume of Box 1 is %d\n",v);
    
    v = box2.volume();
    printf("The volume of Box 2 is %d\n",v);
    
    v = box3.volume();
    printf("The volume of Box 3 is %d\n",v);
    
    return 0;
}
```
### Exercise: constructor.cpp
```
#include <cstdio>

class Box {
    
private:
    int height;
    int width;
    int length;
    
public:
    Box(int h, int w, int l ){
        height = h;
        width = w;
        length = l;
    }
    
    int volume(){
        return height*width*length;
    }
};

int main()
{
    Box box1(3,3,3), box2(4,4,4), box3(5,5,5);
    
    int v = box1.volume();
    printf("The volume of Box 1 is %d\n",v);
    
    v = box2.volume();
    printf("The volume of Box 2 is %d\n",v);
    
    v = box3.volume();
    printf("The volume of Box 3 is %d\n",v);
    
    return 0;
}
```
### Exercise: destructor.cpp
```
#include <iostream>

using namespace std;

class Line
{
public:
    void setLength( double len );
    double getLength( void );
    Line();   // This is the constructor declaration
    ~Line();  // This is the destructor: declaration
    
private:
    double length;
};

// Member functions definitions including constructor
Line::Line(void)
{
    cout << "Object is being created" << endl;
}
Line::~Line(void)
{
    cout << "Object is being deleted" << endl;
}

void Line::setLength( double len )
{
    length = len;
}

double Line::getLength( void )
{
    return length;
}
// Main function for the program
int main( )
{
    Line line;
    
    // set line length
    line.setLength(6.0);
    cout << "Length of line : " << line.getLength() <<endl;
    
    return 0;
}
```
### Exercise: inheritance.cpp
```
#include <cstdio>

class Box {
    
protected:
    int height;
    int width;
    int length;
    
public:
    
    void setdimension(int h, int w, int l){
        height = h;
        width = w;
        length = l;
        
    }
    int volume(){
        return height*width*length;
    }
    
    
};

class Square_Box : public Box {
    
public:
    void setdemension(int l) {
        height = l;
        width = l;
        length = l;
    }
};

int main()
{
    Square_Box box1;
    
    box1.setdemension(10);
    
    int v = box1.volume();
    printf("The volume of Box 1 is %d\n",v);
    
    return 0;
}
```
### Exercise: private.cpp

```
#include <cstdio>

class Box {
private:
    int height;
    int width;
    int length;
    
public:
    void setdimension(int h, int w, int l){
        height = h;
        width = w;
        length = l;
    }
    int volume(){
        return height*width*length;
    }

};



int main()
{
    Box box1, box2, box3;
    
    box1.setdimension(3,3,3);
    
    box2.setdimension(4,4,4);
    
    box3.setdimension(5,5,5);
    
    int v = box1.volume();
    printf("The volume of Box 1 is %d\n",v);
    
    v = box2.volume();
    printf("The volume of Box 2 is %d\n",v);
    
    v = box3.volume();
    printf("The volume of Box 3 is %d\n",v);
    
    return 0;
}
```
### Exercise: pointers.cpp
```
#include <cstdio>

int main(void) {
    //Declaration of pointers to different data types
    int *pointerInt;
    char *letter;
    double *price;
    
    return 0;
}
```
### Exercise: pointer_variable.cpp
```
#include <cstdio>

int main(void) {
    //Declarations
    int size = 15;
    int *ptr;
    ptr = &size;
    
    //Use the value at the address stored in the pointer
    printf("Address %x contains %d", ptr, *ptr);
    
    return 0;
}
```
### Exercise: pointer_arithmetic.cpp

```
#include <cstdio>

int main(void) {
    int sizes[] = {15, 20, 30};
    
    int *ptr = sizes;  //ptr points to start of array
    printf("Address %x stores value %d\n", ptr, *ptr);
    
    ptr++; //point to the second value in the array
    printf("Address %x stores value %d\n", ptr, *ptr);
    
    ptr++; //point to the third value in the array
    printf("Address %x stores value %d\n", ptr, *ptr);
    
    ptr--;
    ptr--;//point to the first value in the array
    printf("Address %x stores value %d\n", ptr, *ptr);
    
    return 0;
}
```
### Exercise: pointer_array.cpp

```
#include <cstdio>

int main(void) {
    int data[] = {15, 20, 30, 45, 60, 80};
    
    int *ptr = data;  //ptr points to start of array
    printf("data[] starts at address %x with value %d\n", ptr, *ptr);
    
    //Calculate the length of the array
    int numElements = sizeof(data) / sizeof(int);
    printf("There are %d elements in data[]\n", numElements);
    
    for(int i=0; i<numElements; i++){
        printf("Address %x stores value %d\n", ptr, *ptr);
        ptr++;
    }
    
    return 0;
}
```
### Exercise: define_macro.cpp

```
#include <cstdio>
#define PI 3.1417

double area(double r){
    return PI*r*r;
}
int main()
{
    double r = 2.0;
    double a = area(r);
    
    printf("Area of a circle with radius 2 is %0.2f\n", a);
    return 0;
}
```
### Exercise: : include_macro.cpp

```
#include <cstdio>
#include "mylib.h"

int main()
{
    Square_Box box1;
    
    box1.setdemension(10);
    
    int v = box1.volume();
    printf("The volume of Box 1 is %d\n",v);
    
    return 0;
}
```
mylib.h
```
class Box {
    
protected:
    int height;
    int width;
    int length;
    
public:
    
    void setdimension(int h, int w, int l){
        height = h;
        width = w;
        length = l;
        
    }
    int volume(){
        return height*width*length;
    }
    
    
};

class Square_Box : public Box {
    
public:
    void setdemension(int l) {
        height = l;
        width = l;
        length = l;
    }
    
    
};
```
### Exercise: conditional.cpp

```
#include <cstdio>
//#define FOO 10
#include "conditional.h"

int main() {
    printf("Number is %d\n", NUMBER);
    return 0;
}
```
conditional.h
```
#ifdef FOO

#define NUMBER 47

#else

#define NUMBER 2

#endif
```
### Exercise: macro-parameter.cpp

```
#include <cstdio>
#define MAX(a,b) a>b? a : b

int main()
{
    printf("Max value of 3 and 5 is  %d\n", MAX(3, 5));
    return 0;
}
```
### Exercise: namespace .cpp
```
#include <iostream>
using namespace std;

int main() {
    
    //std::cout << "Testing namesapce" << std::endl;
    cout << "Testing namesapce" << endl;
    return 0;
}
```
### Exercise: vector.cpp

```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    cout << "The vector is" << endl;
    for(int i=0;i<10;i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    cout << "v[5] = " << v[5] << endl;
    
    cout << "Insert element of 100 at location 6" << endl;
    v.insert(v.begin()+5,100);
    cout << "v[5] = " << v[5] << endl;
    
    cout << "Erase element 6" << endl;
    v.erase(v.begin()+5);
    cout << "v[5] = " << v[5] << endl;
    return 0;
}
```
### Exercise: spring2.cpp

```
#include <iostream>
#include <string>
using namespace std;

int main( int argc, char ** argv ) {
    string s1 = "This is a string";
    string::iterator it;
    
    // size & length
    cout << "size is same as length: " << s1.size() << endl;
    cout << "size is same as length: " << s1.length() << endl;
    
    // + for concatenation
    cout << "concatenated strings: ";
    string s2 = "this is also a string";
    cout << s1 + ":" + s2 << endl;
    
    // compare
    cout << "is s1 == s2? " << (s1 == s2 ? "yes" : "no") << endl;
    cout << "copy-assign s2 = s1" << endl;
    s2 = s1;
    cout << "is s1 == s2? " << (s1 == s2 ? "yes" : "no") << endl;
    cout << "is s1 > \"other string\"? " << (s1 > "other string" ? "yes" : "no") << endl;
    cout << "is s1 < \"other string\"? " << (s1 < "other string" ? "yes" : "no") << endl;
    cout << "is \"other string\"? > s1  " << ("other string" > s1 ? "yes" : "no") << endl;
    cout << "is \"other string\" < s1? " << ("other string" < s1 ? "yes" : "no") << endl;
    
    // iteration
    cout << "each character: ";
    for( char c : s1 ) {
        cout << c << " ";
    }
    cout << endl;
    
    // insert & erase with an iterator
    it = s1.begin() + 5;
    s1.insert(it, 'X');
    cout << "after insert: " << s1 << endl;
    
    it = s1.begin() + 5;
    s1.erase(it);
    cout << "after erase: " << s1 << endl;
    
    // replace
    s1.replace(5, 2, "ain't");
    cout << "after replace: " << s1 << endl;
    
    // substr
    cout << "substr: " << s1.substr(5, 5) << endl;
    
    // find
    size_t pos = s1.find("s");
    cout << "find first \"s\" in s1 (pos): " << pos << endl;
    
    // rfind
    pos = s1.rfind("s");
    cout << "find last \"s\" in s1 (pos): " << pos << endl;
    
    return 0;
}
```
### Exercise: iostream .cpp
```
// iostream-file.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main( int argc, char ** argv ) {
    static int lineno = 0;
    static const char * filename = "test.txt";
    static const char * textstring = "This is the test file";
    
    // write a file
    cout << "write the file:" << endl;
    ofstream ofile(filename);
    ofile << ++lineno << " " << textstring << endl;
    ofile << ++lineno << " " << textstring << endl;
    ofile << ++lineno << " " << textstring << endl;
    ofile.close();
    
    // read a file
    static char buf[128];
    cout << "read the file:" << endl;
    ifstream infile(filename);
    while (infile.good()) {
        infile.getline(buf, sizeof(buf));
        cout << buf << endl;
    }
    infile.close();
    
    // delete file
    cout << "delete file." << endl;
    remove(filename);
    return 0;
}
```
### Exercise: iterator.cpp
```
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    vector<int>::iterator it;   // vector iterator
    
    // input iterator
    for(it = v.begin(); it < v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;

}
```
### Exercise: list.cpp

```
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> list1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    cout << "size: " << list1.size() << endl;
    cout << "front: " << list1.front() << endl;
    cout << "back: " << list1.back() << endl << endl;
    
    list1.push_back(47);
    cout << "size: " << list1.size() << endl;
    cout << "back: " << list1.back() << endl << endl;
    
    // range-based for loop
    cout << "list is below : " << endl;
    for(int i : list1) {
        cout << i << " ";
    }
    cout << endl << endl;
    
    // need an iterator to insert and erase
    list<int>::iterator it;
    it = list1.begin();
    
    while(it != list1.end()) {
        if (*it == 5) {
            list1.insert(it, 112);
        }
        it++;
    }
    
    for(int j : list1) {
        cout << j << " ";
    }
    
    cout << endl;
    
    return 0;
}
```
### Exercise: pair.cpp
```
#include <iostream>
#include <utility>
using namespace std;

int main() {
    pair<int, int> p = {5,47};
    cout << "first is " << p.first << " , second is " << p.second << endl;
    
    return 0;
}
```
### Exercise: set.cpp
```
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    set<string> strset = { "one", "two", "three", "four", "five" };
    cout << "size of set: " << strset.size() << endl;
    cout << "ordered set is alphabetical:" << endl;
    for(string s : strset) {
        cout << s << " ";
    }
    cout << endl << endl;
    
    cout << "insert element \"six\":" << endl;
    strset.insert("six");
    for(string s : strset) {
        cout << s << " ";
    }
    cout << endl << endl;
    
    cout << "find and erase element \"six\":" << endl;
    set<string>::iterator it = strset.find("six");
    if(it != strset.end()) {
        cout << "erasing " << *it << endl;
        strset.erase(it);
    } else {
        cout << "not found" << endl;
    }
    for(string s : strset) {
        cout << s << " ";
    }
    cout << endl << endl;
    
    cout << "insert duplicate element \"five\":" << endl;
    strset.insert("five");
    for(string s : strset) {
        cout << s << " ";
    }
    cout << endl << endl;
    
    return 0;
}
```
### Exercise: map.cpp
```
#include <iostream>
#include <iostream>
#include <map>

using namespace std;

int main()
{
//    map<string, string> capital = { { "US", "Washington"},{"UK","London"},{"France","Paris"}};
//    
//    cout << "The capital of UK is " << capital["UK"] << endl;
//    
    map<int, string> ranking = { {1, "Ally"},{2,"Belinda"},{3,"Jane"}};
    
    cout << "Rank 2 is  " << ranking[2] << endl;
}
```
### Exercise: interfaces.cpp
```
#include <iostream>

using namespace std;

// Base class
class Shape
{
public:
    // pure virtual function providing interface framework.
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:
    int width;
    int height;
};

// Derived classes
class Rectangle: public Shape
{
public:
    int getArea()
    {
        return (width * height);
    }
};
class Triangle: public Shape
{
public:
    int getArea()
    {
        return (width * height)/2;
    }
};

int main(void)
{
    Rectangle Rect;
    Triangle  Tri;
    
    Rect.setWidth(5);
    Rect.setHeight(7);
    // Print the area of the object.
    cout << "Total Rectangle area: " << Rect.getArea() << endl;
    
    Tri.setWidth(5);
    Tri.setHeight(7);
    // Print the area of the object.
    cout << "Total Triangle area: " << Tri.getArea() << endl;
    
    return 0;
}
```



