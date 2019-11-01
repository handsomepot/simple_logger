#include<stdio.h>
#include<stdarg.h>
#include "logger.h"

int main(int argc, char *argv[]){

    LOG_FATAL("Fatal!\n");
    LOG_ERROR("Error!\n");
    LOG_WARNING("Warning!\n");
    LOG_INFO("Info\n");
    LOG_DEBUG("Debug\n");

    return 0; 
}
