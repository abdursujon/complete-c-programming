#include "core.h"

char* transform(const char *text){
    return transform_case(text, toupper);
}