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

	return temps;
}

string Addedfunc::erase_space(string s)
{
	char sc[1000]; //�r���}�C
	int c=0;  //�ĴX���r�� 
	strcpy(sc,s.c_str()); //�r�����r���}�C
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