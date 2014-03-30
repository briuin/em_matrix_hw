#include "stdafx.h"
#include "Mat.h"

Mat::Mat()
{
	vec=new Vec();
}


void Mat::push(vector<vector<double>> x)
{

	M.push_back(x);

}


vector<vector<double>> Mat::pop(double a,char x)
{
	vector<vector<double>> temp;
	
	int index;
	if(x>='a')
		index=x-'a';
	else
		index=x-'A';
	if( (unsigned)index<M.size())
	{
		vec->S=M[index];
		for (i=0;i<M[index].size();i++)
		{
			temp.push_back(vec->pop(a,i+'a'));
		}
	}
			
			


	return temp;

}


string Mat::print_out(vector<vector<double>> a)
{

	stringstream temp;
	int l;
	int sp;
	
	for (i=0;i<a.size();i++)
	{
		temp<<"│";
		for(j=0;j<a[0].size()-1;j++)
		{
			temp<<a[i][j];
				temp<<"  ";
		}
		temp<<a[i][j];
		
			temp<<"  ";
		temp<<"│\n";
	}	
	
	return temp.str();
}

vector<vector<double>> Mat::add(double a,char x,double b,char y)  //加法
{
	vector<vector<double>> temp;
	int index_x,index_y;
	if(x>='a')
		index_x=x-'a';
	else
		index_x=x-'A';
	if (y>='a')
		index_y=y-'a';
	else
		index_y=y-'A';

	if ((unsigned)index_x>=M.size() || (unsigned)index_y>=M.size()|| M[index_x].size()!=M[index_y].size() || M[index_x][0].size()!= M[index_y][0].size())
		return temp;

	vec->S=M[index_x];

	for (i=0;i<M[index_x].size();i++)
	{
		temp.push_back(vec->add(a,'a'+i,M[index_y][i]));
	}

	return temp;



}


vector<vector<double>> Mat::add(double a,char x,vector<vector<double>> ve) //加法
{
	vector<vector<double>> temp;
	int index_x;
	if(x>='a')
		index_x=x-'a';
	else
		index_x=x-'A';
	

	if ((unsigned)index_x>=M.size() || M[index_x].size()!=ve.size() || M[index_x][0].size()!= ve[0].size())
		return temp;

	vec->S=M[index_x];

	for (i=0;i<M[index_x].size();i++)
	{
		temp.push_back(vec->add(a,'a'+i,ve[i]));
	}

	return temp;
}
vector<vector<double>> Mat::dec(double a,char x,vector<vector<double>> ve)  //減法
{
	vector<vector<double>> temp;
	int index_x;
	if(x>='a')
		index_x=x-'a';
	else
		index_x=x-'A';


	if ((unsigned)index_x>=M.size() || M[index_x].size()!=ve.size() || M[index_x][0].size()!= ve[0].size())
		return temp;

	vec->S=M[index_x];

	for (i=0;i<M[index_x].size();i++)
	{
		temp.push_back(vec->dec(a,'a'+i,ve[i]));
	}

	return temp;
}

vector<vector<double>> Mat::mul(double a,char x,vector<vector<double>> ve)  //乘法
{
	vector<vector<double>> temp;
	vector<vector<double>> T_mat;
	vector<vector<double>> temp2;
	vector<double> dot;
	int index_x;
	if(x>='a')
		index_x=x-'a';
	else
		index_x=x-'A';


	if ((unsigned)index_x>=M.size() || M[index_x].size()!=ve[0].size() )
		return temp;
	T_mat=pop(a,x);
	T_mat=transpose(T_mat);

	

	for(i=0;i<ve.size();i++)
	{
		dot.clear();
		for (j=0;j<T_mat.size();j++)
		{
			temp2.clear();
			temp2.push_back(ve[i]);
			temp2.push_back(T_mat[j]);
			dot.push_back(vec->dot(temp2));
		}
		temp.push_back(dot);
	}

	return temp;
}
vector<vector<double>> Mat::transpose(vector<vector<double>> ve) //	Matrix Transpose
{
	vector<vector<double>> mat;
	vector<double> temp;
	for ( i=0;i<ve[0].size();i++)
	{
		temp.clear();
		for( j=0;j<ve.size();j++)
		{
			temp.push_back(ve[j][i]);
		}
		mat.push_back(temp);
	}

	return mat;
}


double Mat::Determinant(vector<vector<double>> ve) //Determinant
{
	vector<vector<double>> mat;
	vector<double> temp;
	double det=0;
	if(ve.size() != ve[0].size())
		return -9999;
	if(ve.size()==1)
		return ve[0][0];
	else if(ve.size()==2)
	{
		return ve[0][0]*ve[1][1]-ve[0][1]*ve[1][0];
	}
	else 
	{
		
		for(int ii=0;ii<ve.size();ii++)
		{
			mat.clear();
			for(int r=0;r<ve.size();r++)
			{
				if(r!=ii)
				{
					temp.clear();
					for (int c=1;c<ve.size();c++)
					{
						temp.push_back(ve[r][c]);
					}
					mat.push_back(temp);
				}
				
			}
			
			det+=ve[ii][0]*pow(-1.0,ii)*Determinant(mat);

		}
		return det;
	}




}