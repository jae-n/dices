#pragma once
class die
{
private :
	int sides;
	int value;
	
public:
	die(int);
	void roll();
	
	//getter /accessor
	
	int getSides();
	int getValue();
	
};

