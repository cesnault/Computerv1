#ifndef ERROR_GESTION_H
#define ERROR_GESTION_H
#include <string>


enum class ErrorType;
class ErrorGestion
{
    public:
		
		
		static void ErrorHandle(ErrorType error);
		static void CheckParams(int argc, char** argv);
    protected:
  
};

#endif