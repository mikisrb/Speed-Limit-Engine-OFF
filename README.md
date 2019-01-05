# Speed-Limit-Engine-OFF
This application is for DAF EURO5 vehicles, and making them function according the EN1501-A1.
Regarding EURO5 DAF vehicles, DAF discontinued software for ordering the vehicles according the EN1501-A1 standard(Garbage collector vehicles). For this standard, two main requests that are concerning the worker's safety must be fullfiled.
First request is, when the worker is standing on the stair, vehicle must be speed limited to 30 km/h. 
Second request is, when the worker is standing on the stair, vehicle must activate the parking brake, and turn the engine OFF.
For this application i have choosen the ATtiny 13a MCU. I have programmed two ouputs, first is simple stair switch-speed limit option(input-output), and second is simple and gate(when the signal from stair switch is present, and signal that the vehicle is in reverse), corresponding output pin is driving the relay coil through a darlington NPN transistor. and that relay turns engine OFF and activates the parking brake. 
I put in this repository also a schematic representation from ALTIUM DESIGNER.  
