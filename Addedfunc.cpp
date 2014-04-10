#include "stdafx.h"
#include "Addedfunc.h"
#include <math.h>


Addedfunc::Addedfunc()
{
	addvec = new Vec();
}


string Addedfunc::clearallstupidinput(string s)
{
	char temps[1000];
	strcpy(temps,erase_space(s.c_str()).c_str()); // erase all blank
	strcpy(temps,scaler_to_addition(temps).c_str()); // scaler to addition

	return temps;
}
string Addedfunc::scaler_to_addition(string s)
{
	char sc[1000]; //字元陣列
	int c=0;  //第幾的字元 
	strcpy(sc,s.c_str()); //字串轉到字元陣列
	char newstring[1000];
	double temp_scaler;
	bool is_scal;
	int si=0;

	if(strlen(sc)==0)
		return "";
	else
	{

		while(sc[c]!='\0')
		{
			temp_scaler=0.0;
			is_scal=false;
			if(sc[c]>='0'&&sc[c]<='9')
			{
				is_scal=true;
				while(!(sc[c]>='a'&&sc[c]<='z'))
				{
					temp_scaler=temp_scaler*10+(int)sc[c]-(int)('0');
					c++;
				}	
			}
				if(is_scal)
				{
					newstring[si]='(';
					si++;
					while(temp_scaler>1)
					{
						newstring[si]=sc[c];
						si++;
						newstring[si]='+';
						si++;
						temp_scaler-=1;
					}
				}
				newstring[si]=sc[c];
				si++;
				if(is_scal)
				{
					newstring[si]=')';
					si++;
				}
			c++;
		}
	}
	newstring[si]='\0';
	return newstring;
}
string Addedfunc::erase_space(string s)
{
	char sc[1000]; //字元陣列
	int c=0;  //第幾的字元 
	strcpy(sc,s.c_str()); //字串轉到字元陣列
	char newstring[1000];
	int si=0;

	if(strlen(sc)==0)
		return "";
	else
	{
		while(sc[c]!='\0')
		{
			if(sc[c]!=' ')
			{
				newstring[si]=sc[c];
				si++;
			}
			c++;
		}
	}
	newstring[si]='\0';
	return newstring;
}