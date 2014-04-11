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
	//strcpy(temps,scaler_to_addition(temps).c_str()); // scaler to addition
	//strcpy(temps,multiscaler_toone(temps).c_str()); // 

	return temps;
}
string Addedfunc::multiscaler_toone(string s)
{
	char sc[1000]; //字元陣列
	int c=0;  //第幾的字元 
	strcpy(sc,s.c_str()); //字串轉到字元陣列
	char newstring[1000];
	double temp_scaler,ttemp_scaler,final_scaler;
	bool is_scal,found_apha,is_end;
	int scal_count=0;
	int scal_start=0;
	stringstream ss1,ss2;
	char s_temp[1000];
	int si=0;
	if(strlen(sc)==0)
		return "";
	else
	{

		while(sc[c]!='\0')
		{
			temp_scaler=0.0;
			ttemp_scaler=0.0;
			is_scal=false;
			found_apha=false;
			is_end=false;
			scal_count=0;
			scal_start=0;
			final_scaler=0.0;
			if(sc[c]>='0'&&sc[c]<='9')
			{
				do
				{
					temp_scaler=0.0;
					scal_start=scal_count=0;
					while(!(sc[c+scal_count]>='a'&&sc[c+scal_count]<='z')&&sc[c+scal_count]!='*'&&sc[c+scal_count]!='\0')
					{
						scal_count++;
					}
					if(sc[c+scal_count]=='*'||sc[c+scal_count]=='\0')
					{
						strncpy(s_temp,&sc[c+scal_start],scal_count);
						ss1<<s_temp;
						ss1>>temp_scaler;
						
						if(ttemp_scaler==0)
						{
							ttemp_scaler=temp_scaler;
						}
						else
						{
							if(final_scaler==0)
								final_scaler=ttemp_scaler;
							final_scaler*=temp_scaler;
							ttemp_scaler=temp_scaler;
						}
						
						if(sc[c+scal_count]=='\0')
							is_end=true;
						if(sc[c+scal_count]!='\0')
						scal_count++;
						c=c+scal_count;
					}
					else
					{
						found_apha=true;
						if(final_scaler!=0)
				{
					c+=scal_count;
					char t_s[500];
					sprintf(t_s,"%.6lf",ttemp_scaler);
					for(int j=0;j<strlen(t_s);j++)
					{
						newstring[si]=t_s[j];
						si++;
					}
				}
				else if(ttemp_scaler!=0)
				{
					c+=scal_count;
					char t_s[500];
					sprintf(t_s,"%.6lf",ttemp_scaler);
					for(int j=0;j<strlen(t_s);j++)
					{
						newstring[si]=t_s[j];
						si++;
					}
				}
						while(!(sc[c]>='a'&&sc[c]<='z')&&sc[c]!='\0')
						{

							newstring[si]=sc[c];
							si++;
							c++;
						}
					}
					
				
				}while(!found_apha&&!is_end);
				if(!found_apha)
				{
				if(final_scaler!=0)
				{
					c+=scal_count;
					char t_s[500];
					sprintf(t_s,"%.6lf",ttemp_scaler);
					for(int j=0;j<strlen(t_s);j++)
					{
						newstring[si]=t_s[j];
						si++;
					}
				}
				else if(ttemp_scaler!=0)
				{
					c+=scal_count;
					char t_s[500];
					sprintf(t_s,"%.6lf",ttemp_scaler);
					for(int j=0;j<strlen(t_s);j++)
					{
						newstring[si]=t_s[j];
						si++;
					}
				}
				}
			}
			newstring[si]=sc[c];
			si++;
			c++;
		}
	}
	newstring[si]='\0';
	return newstring;
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