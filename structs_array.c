#include <stdio.h>

struct vr_module {
    char *mod_name;
    int error;
    int error_line;
};

//Create an array named "modules" of stucture "vr_module" objects.
static struct vr_module modules[] = {
    {
        .mod_name       =       "Stats",
        .error          =       1,
        .error_line     =       11,
    },
    {
        .mod_name       =       "Interface",
        .error           =       2,
    }
};

void main()
{

//Find the length of the array named "modules".
int modules_len = (sizeof(modules) / sizeof(modules[0]));

//Print the length
printf("\nLength of modules array: %d\n", modules_len);

//Loop through the array named "modules" and print the attribute of stucture
//named "vr_module"
int i;
for (i = 0; i < modules_len; i++){
    printf("\n%s\n", modules[i].mod_name);
}

}
