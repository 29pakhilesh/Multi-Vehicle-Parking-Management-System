#include "../include/utils.h"
#include <ctime>
std::string formatTimestamp(time_t t){
 char b[50]; strftime(b,sizeof(b),"%d-%m-%Y %H:%M:%S",localtime(&t));
 return b;
}