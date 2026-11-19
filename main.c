#include <stdio.h> 
#include <strings.h> 
#include <stdlib.h>

int main(void){
    struct file_type{
        char* file_name;
        char* file_type;
        char* file_size;
        char* file_location; 
    }typedef file_type;



    struct file_location{
        char* file_path;
        char* access_level;
    }typedef file_location;

    return 0;