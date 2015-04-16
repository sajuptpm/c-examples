#include <stdio.h>


//Definition of the callback function
void myfunction(int n){
    printf("\nIn function named 'myfunction'.\n\n");
}


struct vr_module {
    char *mod_name;
    int error;
    int error_line;
    //Variable named "callback" to hold pointer to a function which receives
    //one integer argument. 
    void (*callback)(int num);
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
        .error          =       2,
        .callback       =       myfunction,
    }
};



//main starts//
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
    if(modules[i].callback){
        //Invoke the function stored in the attribute "callback" of struct
        //object
        modules[i].callback(i);
    }
}

}
//main Ends//



