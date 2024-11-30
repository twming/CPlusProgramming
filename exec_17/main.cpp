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
