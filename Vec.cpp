#include "stdafx.h"
#include "Vec.h"
#include <math.h>

Vec::Vec()
{


}


void Vec::push(vector<double> a)
{
	S.push_back(a);
}

void Vec::push(string str)
{
	vector<double> temp;
	 char s[40];
	bool minus=false;
	int c=0;
	double x;
	strcpy(s,str.c_str());
	while (s[c]!='\0' && s[c]!='(')
	{
		c++;
	} 
	if (s[c]=='\0')
		return;
	c++;
	do
	{
		minus=false;
		x=0;
		do 
		{
			if(s[c]=='-')
				minus=true;
			else
				x=x*10+s[c]-'0';
			c++;
		} while (s[c]!=',' && s[c]!=')' );
		if(s[c]==',')
			c++;
		if (minus)
			temp.push_back(0-x);
		else
			temp.push_back(x);
	}while(s[c]!=')');

	if (!temp.empty())
	{
		S.push_back(temp);
	}




}


double Vec::p_norm(double a,unsigned char b)
{
	int index_x;
	double x=0;
	if(b>='a')
		index_x=b-'a';
	else
		index_x=b-'A';

	if(index_x<S.size())
	{
		for(int i=0;i<S[index_x].size();i++)
		{
			x+=pow(S[index_x][i],a);
		}
	}
	
	return pow(x,1/(double)a);

}

vector<double> Vec::add(double a,unsigned char x,double b,unsigned char y)
{
	vector<double> temp;
	int index_x,index_y;
	if(x>='a')
		index_x=x-'a';
	else
		index_x=x-'A';
	if (y>='a')
		index_y=y-'a';
	else
		index_y=y-'A';

	if (S[index_x].size()!=S[index_y].size()  || (unsigned)index_x>=S.size() || (unsigned)index_y>=S.size())
		return temp;
	else
	{
		for (i=0;i<(double)(S[index_x].size());i++)
		{
			temp.push_back(a*S[index_x][i]+b*S[index_y][i]);
		}

		return temp;

	}

}
vector<double> Vec::addedadd(double a,unsigned char x,vector<double> ve)
{
	vector<double> sum;

	int index;
	if(x>='a')
		index=x-'a';
	else
		index=x-'A';
	if(S[index].size()!=ve.size()|| (unsigned)index>=S.size())
		return sum;

	for (i=0;i<ve.size();i++)
	{
		sum.push_back(a*S[index][i]+ve[i]);
	}
	return sum;



}



string Vec::print_out(vector<double> a)
{
	
	stringstream temp;
	temp<<"(";
	for (i=0;i<a.size()-1;i++)
	{
		
		temp<<a[i];
		temp<<" ,";
	}	
	temp<<a[i];
	temp<<")";
	return temp.str();
}

vector<double> Vec::pop(double a,unsigned char x)
{
	vector<double> sum;
	int index;
	if(x>='a')
		index=x-'a';
	else
		index=x-'A';
	if( (unsigned)index<S.size())
	for(i=0;i<S[index].size();i++)
		sum.push_back(a*S[index][i]);


	return sum;



}

double Vec::length(unsigned char x)
{
	double sum=9999;
	int index;
	if(x>='a')
		index=x-'a';
	else
		index=x-'A';
	if( (unsigned)index<S.size())
	{
		sum=0;
		for(i=0;i<S[index].size();i++)
			sum+=pow(S[index][i],2);
	}

	return sqrt(sum);
}
double Vec::length(vector<double> ve)
{
	double sum=0;

		for(i=0;i<ve.size();i++)
			sum+=pow(ve[i],2);
	

	return sqrt(sum);
}
vector<double> Vec::add(double a,unsigned char x,vector<double> ve)
{
	vector<double> sum;

	int index;
	if(x>='a')
		index=x-'a';
	else
		index=x-'A';
	if(S[index].size()!=ve.size()|| (unsigned)index>=S.size())
		return sum;

	for (i=0;i<ve.size();i++)
	{
		sum.push_back(a*S[index][i]+ve[i]);
	}
	return sum;



}

double Vec::dot(vector<vector<double>> ve)
{
	double d=0;
	double temp;
	for (i=0;i<ve[0].size();i++)
	{
		temp=1;
		for (j=0;j<ve.size();j++)
		{
			temp*=ve[j][i];
		}
		d+=temp;
	}
	return d;

}

vector<double> Vec::dec(double a,unsigned char x,vector<double> ve)
{
	vector<double> sum;

	int index;
	if(x>='a')
		index=x-'a';
	else
		index=x-'A';
	if(S[index].size()!=ve.size() || (unsigned)index>=S.size())
		return sum;

	for (i=0;i<ve.size();i++)
	{
		sum.push_back(ve[i]-a*S[index][i]);
	}
	return sum;



}
vector<double>Vec::normal(vector<double> ve)
{
	vector<double> nor;
	double lengh;
	lengh = length(ve);
	for(int i = 0 ; i<ve.size();i++)
	{
		nor.push_back(ve[i]/lengh);
	}
	return nor ;

}
vector<double>Vec::cross(double a , unsigned char x , vector<double> ve )
{
	vector<double> cro;
	int index;
	int div = ve.size();
	if(x>='a')
		index=x-'a';
	else
		index=x-'A';
	if(S[index].size()!=ve.size()|| (unsigned)index>=S.size())
		return cro;

	for(int i =0 ;i<ve.size();i++)
	{
	  cro.push_back(S[index][(i+1)%div]*ve[(i+2)%div]-S[index][(i+2)%div]*ve[(i+1)%div]);
	}

	return cro;
}
vector<double>Vec::magnitude(vector<double> ve)
{
	vector<double> nor;
	double lengh,sum=0;
	lengh = length(ve);
	for(int i = 0 ; i<ve.size();i++)
	{
		sum+=pow(ve[i],2.0);
		
	}
	sum=sqrt(sum);
	nor.push_back(sum);
	return nor ;

}
double Vec::magnitude_to_double(vector<double> ve)
{
	vector<double> nor;
	double lengh,sum=0;
	lengh = length(ve);
	for(int i = 0 ; i<ve.size();i++)
	{
		sum+=pow(ve[i],2.0);
		
	}
	sum=sqrt(sum);
	return sum;

}
double Vec::component(vector<double> va,vector<double> vb,unsigned char a,unsigned char b)
{
	vector<double> anstemp;
	vector<vector<double>> anstemps;
	double magb,ans;
	magb=magnitude_to_double(vb);
	magb=1/magb;
	anstemp=pop(magb,b);
	anstemps.push_back(va);
	anstemps.push_back(anstemp);
	ans=dot(anstemps);
	return ans ;

}
vector<double> Vec::projection(vector<double> va,vector<double> vb,unsigned char a,unsigned char b)
{
	double compans,projans;
	vector<double> proj;
	compans=component(va,vb,a,b);
	projans=compans*(1/magnitude_to_double(vb));
	proj=pop(projans,b);
	return proj;

}
bool Vec::parall(vector<double> a , vector<double> b)
{

 vector<double> tempa = normal(a);
 vector<double> tempb = normal(b);
 if(tempa==tempb)
 {
  return true;
 }
 else
	 return false;
 

}
bool Vec::orthogonal(vector<double>a,vector<double>b)
{
    vector<vector<double>> temps;
	temps.push_back(a);
	temps.push_back(b);
    if(dot(temps)==0)
		return true;
	else
		return false;

}

double Vec::area_of_parallelogram(vector<double> va,vector<double> vb,unsigned char a,unsigned char b)
{
	vector<double> anstemp;
	double ans;
	anstemp=va;
	anstemp=cross(1,b,anstemp);
	ans=magnitude_to_double(anstemp);
	return ans;
}
double Vec::area_of_triangle(vector<double> va,vector<double> vb,unsigned char a,unsigned char b)
{
	vector<double> anstemp;
	double ans;
	anstemp=va;
	anstemp=cross(1,b,anstemp);
	ans=magnitude_to_double(anstemp);
	ans=ans/2;
	return ans;
}
double Vec::angle(vector<double> va,vector<double> vb,unsigned char a,unsigned char b)
{
	vector<vector<double>> temps;
	double maga,magb,ans;
	maga=magnitude_to_double(va);
	magb=magnitude_to_double(vb);
	if(parall(va,vb))
	{
		ans=0;
	}
	else
	{
		temps.push_back(va);
		temps.push_back(vb);
		ans=dot(temps);
		ans/=maga;
		ans/=magb;
		ans=acos(ans);
	}
	return ans;
}
vector<double> Vec::plane_normal(vector<double> va,vector<double> vb,unsigned char a,unsigned char b)
{
	vector<double> anstemp;
	double ans;
	anstemp=va;
	anstemp=cross(1,b,anstemp);
	return anstemp;
}
bool Vec::linear_indepen(vector<vector<double>> mat)
{
	vector<double> zero;
	int check=0;
	for(int i=0;i<mat[0].size();i++)
		zero.push_back(0);
	  
		for(int i=0;i<mat.size();i++)
		{
		 for(int j=i+1;j<mat.size();j++)
			if(mat[i]==mat[j])
		{
		    check=1;
			
		}
		}

		for(int i=0;i<mat.size();i++)
		{
			if(mat[i]==zero)
				check=1;
		}

	if(check==1)
	return  false;
	else if(check==0)
	return true;
}

vector<vector<double>> Vec::OrthogonalBasis(vector<vector<double>>  ve)
{
	vector<vector<double>> orth;
	if(ve.size()!=ve[0].size())
		return orth;
	vector<double>temp;
	vector<double> u;
	Vec *vec=new Vec();
	for (int i=0;i<ve.size();i++)
	{

		temp=ve[i];
		u=ve[i];
		for(int j=0;j<i;j++)
		{

			Vec *temp2=new Vec();
			temp2->push(vec->pop(vec->dot(u,orth[j])/vec->dot(orth[j],orth[j]),'a'+j));
			temp=temp2->dec(1,'a',temp);
			
		}
		vec->push(temp);
		orth.push_back(temp);

	}

	for (int i=0;i<orth.size();i++)
	{
		vec=new Vec();
		vec->push(orth[i]);
		orth[i]=vec->pop(1.0/vec->length(orth[i]),'a');
	}
	return orth;
}

double Vec::dot(vector<double> a,vector<double> b)
{
	double dot=0;
	double temp;
	for(int i=0;i<a.size();i++)
	{
		dot+=a[i]*b[i];
	}

	return dot;
}