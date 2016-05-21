#ifndef _NOR3_H
#define _NOR3_H

/*
Class NOR3
-----------
represent the 3-input NOR gate
*/

#include "Gate.h"

class NOR3 :public Gate
{
public:
	NOR3(const GraphicsInfo &r_GfxInfo);
	virtual void Operate();	//Calculates the output of the NOR gate
	virtual void Draw(Output* pOut);	//Draws 3-input gate
	InputPin* GetPin(int);
	virtual bool  GetOutPinStatus();	//returns status of outputpin if LED, return -1
	virtual bool  GetInputPinStatus(int n);	//returns status of Inputpin # n if SWITCH, return -1

	virtual void setInputPinStatus(int n, STATUS s);	//set status of Inputpin # n, to be used by connection class.


};

#endif