#pragma once
#include "helper.h"

void RobotLine::radionica(){
// ZADATAK: Prikaži naziv robota.
// HINT: display(); 
display("PETRA");


// ZADATAK: Neka robot opiše četverokut. 
go(50, 50);
 delayMs(1500);
go(-60, 60);
 delayMs(900);
go(50, 50);
 delayMs(1500);
go(-60, 60);
 delayMs(900);
go(50, 50);
 delayMs(1500);
go(-60, 60);
 delayMs(900);
go(50, 50);


stop(); 
end();

}
