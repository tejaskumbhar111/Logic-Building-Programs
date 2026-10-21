#include "Header.h"

#include<assert.h>

int main()
{

    assert(Addition(10,11) == 22);//Assert is used for test the engine 
    assert(Addition(-10,20) == 10);
    assert(Addition(-10,-20 )== -30);



    return EXIT_SUCCESS;
}

//programs Varibale is meaningful Every varibale declared
//the main function should check input is not correct or not
//name inout output single line discrition 
//dont write code iin one file
//project divided into 3 files 3rd file is prototypr
//for testing   purpose insert assert header file