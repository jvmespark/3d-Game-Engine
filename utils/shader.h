#ifndef SHADER_H
#define SHADER_H

#include "../common/common_headers.h"

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>
#include <math.h>

class Shader {
    public:
        
    private:
        unsigned int ID;
        void checkCompileErrors(unsigned int shader, std::string type);
};

#endif