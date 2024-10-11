#include<stdio.h>
int X0 = 1, X1 = 0, X2 = 0, X3 = 0, X4 = 0, X5 = 0, X6 = 0, X7 = 0, X8 = 0, X9 = 0;
void grafcet0();
void datapath0();
void action();
void Fuzzification();
void Fuzzy Control();
void stop the car();
void turn large angle();
void turn small angle();
void Defuzzification();
void stop the car();
void turn the angle();
void output angle();
void main()
{
printf("X0 = %d,X1 = %d,X2 = %d,X3 = %d,X4 = %d,X5 = %d,X6 = %d,X7 = %d,X8 = %d,X9 = %d\n",X0 ,X1 ,X2 ,X3 ,X4 ,X5 ,X6 ,X7 ,X8 ,X9 );
while(1)
{
datapath0();
grafcet0();
printf("X0 = %d,X1 = %d,X2 = %d,X3 = %d,X4 = %d,X5 = %d,X6 = %d,X7 = %d,X8 = %d,X9 = %d\n",X0 ,X1 ,X2 ,X3 ,X4 ,X5 ,X6 ,X7 ,X8 ,X9 );
}
}
void grafcet0()
{

	if((X0 == 1) && (input distance to the obstacles))
	{
		X0 = 0;
		X1 = 1;
		return;
	}

	if((X1 == 1) && (=1))
	{
		X1 = 0;
		X2 = 1;
		return;
	}

	if(X2 == 1)
	{
		if(obstacles very close)
		{
			X2 = 0;
			X3 = 1;
		}
		else if(obstacles distance is medium)
		{
			X2 = 0;
			X4 = 1;
		}
		else if(obstacles distance is far)
		{
			X2 = 0;
			X5 = 1;
		}
		return;
	}

	if(X3 == 1 && (=1))
	{
		X3 = 0;
		X6 = 1;
		return;
	}

	if(X4 == 1 && ())
	{
		X4 = 0;
		X6 = 1;
		return;
	}

	if(X5 == 1 && ())
	{
		X5 = 0;
		X6 = 1;
		return;
	}


	if(X6 == 1)
	{
		if(if turning angle too large)
		{
			X6 = 0;
			X7 = 1;
		}
		else if(if turning angle is in safe condition)
		{
			X6 = 0;
			X8 = 1;
		}
		return;
	}

	if(X7 == 1 && ())
	{
		X7 = 0;
		X9 = 1;
		return;
	}

	if(X8 == 1 && ())
	{
		X8 = 0;
		X9 = 1;
		return;
	}


	if((X9 == 1) && (=1))
	{
		X9 = 0;
		X0 = 1;
		return;
	}

}
void datapath0()
{
if(X0 == 1)
action();
if(X1 == 1)
Fuzzification();
if(X2 == 1)
Fuzzy Control();
if(X3 == 1)
stop the car();
if(X4 == 1)
turn large angle();
if(X5 == 1)
turn small angle();
if(X6 == 1)
Defuzzification();
if(X7 == 1)
stop the car();
if(X8 == 1)
turn the angle();
if(X9 == 1)
output angle();
}
void action()
{
printf("action activate !!\n");
}
void Fuzzification()
{
printf("Fuzzification activate !!\n");
}
void Fuzzy Control()
{
printf("Fuzzy Control activate !!\n");
}
void stop the car()
{
printf("stop the car activate !!\n");
}
void turn large angle()
{
printf("turn large angle activate !!\n");
}
void turn small angle()
{
printf("turn small angle activate !!\n");
}
void Defuzzification()
{
printf("Defuzzification activate !!\n");
}
void stop the car()
{
printf("stop the car activate !!\n");
}
void turn the angle()
{
printf("turn the angle activate !!\n");
}
void output angle()
{
printf("output angle activate !!\n");
}
