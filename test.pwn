#include <a_samp>
#include <streamer>
#define OD_METHOD 1
#include "optidraw.inc"
main() 
{
    return ;
}

public OnGameModeInit() 
{
    CreateDynamicObject(4444, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
    return 1;
}