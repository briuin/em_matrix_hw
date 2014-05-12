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


vector<vector<double>> Mat::pop(double a,unsigned char x)
{
	vector<vector<double>> temp;
	Vec *vec=new Vec();
	int index;
	if(x>='a')
		index=x-'a';
	else
		index=x-'A';
	if( (unsigned)index<M.size())
	{
		vec->S=M[index];
		for (int i=0;i<M[index].size();i++)
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
		for(j=0;j<a[i].size()-1;j++)
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

vector<vector<double>> Mat::add(double a,unsigned char x,double b,unsigned char y)  //加法
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


vector<vector<double>> Mat::add(double a,unsigned char x,vector<vector<double>> ve) //加法
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
		/*if(vec->add(a,'a'+i,ve[i]).empty())
			return temp;*/
		temp.push_back(vec->add(a,'a'+i,ve[i]));
	}

	return temp;
}
vector<vector<double>> Mat::dec(double a,unsigned char x,vector<vector<double>> ve)  //減法
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

vector<vector<double>> Mat::mul(double a,unsigned char x,vector<vector<double>> ve)  //乘法
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
	if(ve.size()==1&&ve[0].size()==1)
	{
		return scale(ve[0][0],M[index_x]);
	}


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
	ve=UpperTri(ve);
	vector<vector<double>> mat;
	vector<double> temp;
	double det=0;
	if(ve.empty()||ve.size() != ve[0].size())
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
			if(ve[ii][0]!=0)
			{

				mat=ve;
				
				for(int r=0;r<ve.size();r++)
				{
					if(r!=ii)
					{
						if(r>ii)
							mat[r-1].erase(mat[r-1].begin());
						else
							mat[r].erase(mat[r].begin());
					}
					else
						mat.erase(mat.begin()+r);
				}

				det+=ve[ii][0]*pow(-1.0,ii)*Determinant(mat);
			}

		}
		return det;
	}




}

vector<vector<double>> Mat::gaussian_elimination(vector<vector<double>> mat)
{
   double temp;
 

   for(int i=0;i<mat.size();i++)
   {
	    if(i<mat.size()&&i<mat[0].size())
		{
	   if(mat[i][i]==0)//第一列為零 與下面不為零的列做交換
		   for(int j=i+1;j<mat.size();j++)
			   if(mat[j][i]!=0)
			   {
				   for(int k=i;k<mat[0].size();k++)
				   {
					   temp=mat[i][k]; 
					   mat[i][k]=mat[j][k];
					   mat[j][k]= temp;
			       }
				    break;
			   }
			  
			   if (mat[i][i] == 0) continue;
    // 上方row的首項係數調整成一
    double t = mat[i][i];
	for (int k=i; k<mat[0].size(); k++)
		mat[i][k] /= t;
	for (int j=i+1; j<mat.size(); j++)
		
		if (mat[j][i] != 0)
		{
			double t = mat[j][i];
			for (int k=i; k<mat[0].size(); k++)
			{
			mat[j][k] -= mat[i][k] * t;
			if(abs(mat[j][k])<0.000001)
				mat[j][k]=0;
			}
		}

   }
   }
   return mat;
}
int Mat::rank(vector<vector<double>> mat)
{   vector<double> zero;
    int count=mat.size();
    for(int i =0;i<mat[0].size();i++)
	{
      zero.push_back(0);
	}
	mat = gaussian_elimination(mat);
	for(int i =0;i<mat.size();i++)
	{
	 if(mat[i]==zero)
		 count--;
	}
	return count;
}

vector<vector<double>> Mat::Adjoint(vector<vector<double>> ve) //	Adjoint Matrix
{

	vector<vector<double>> mat,adj;
	vector<double> temp,adj_temp;
	double det=0;
	if(ve.size() != ve[0].size())
		return mat;
	
	
	for(int ii=0;ii<ve.size();ii++)
	{
		adj_temp.clear();
		for (int jj=0;jj<ve[0].size();jj++)
		{
			mat=ve;
			
			for(int r=0;r<ve.size();r++)
			{
				if(r!=ii)
				{

					if(r>ii)
						mat[r-1].erase(mat[r-1].begin()+jj);
					else
						mat[r].erase(mat[r].begin()+jj);
				}
				else
					mat.erase(mat.begin()+r);
			}


			adj_temp.push_back(pow(-1.0,ii+jj)*Determinant(mat));
		}

		adj.push_back(adj_temp);

	}
	return transpose(adj);
	





}

vector<vector<double>> Mat::Inverse(vector<vector<double>> ve) //	Inverse Matrix
{
	vector<vector<double>> mat;
	if(ve.size()!=ve[0].size())
		return mat;
	if(Determinant(ve)==0)
		return mat;
	mat=scale(1.0/Determinant(ve),Adjoint(ve));
	return mat;

}


vector<vector<double>> Mat::scale(double a,vector<vector<double>> ve) //	Scale Matrix
{
	vector<vector<double>> mat;
	
	vec->S=ve;
	for(int i=0;i<vec->S.size();i++)
	{
		mat.push_back(vec->pop(a,'a'+i));
	}

	return mat;
	
}

vector<vector<double>> Mat::PowEigen(vector<vector<double>> mat)
{
	vector<vector<double>> x;
	vector<vector<double>> axx,xx;
	Mat *t = new Mat();
	vector<double> one;
	one.push_back(1.0);
	for(int i =0;i<mat.size();i++)
	{
		x.push_back(one);
	}
	t->push(x);
	for(int i=0;i<30;i++)
	{

		t->M[0]=t->mul(1,'a',mat);
	}
	double max=0;
	
	for(int i=0;i<x.size();i++)
	{
			if(t->M[0][i][0]>max)
				max=t->M[0][i][0];
	}
	for(int i=0;i<x.size();i++)
	{
		t->M[0][i][0]/=max;
	}
	axx=t->mul(1,'a',mat);
	axx=t->mul(1,'a',transpose(axx));
	xx=t->mul(1,'a',transpose(t->M[0]));
	x.clear();
	one.clear();
	one.push_back(axx[0][0]/xx[0][0]);
	x.push_back(one);
	x.push_back(transpose(t->M[0])[0]);

	return x;
}


vector<double> Mat::eigenvalue(vector<vector<double>>mat)
{
	double t[4];
	vector<double> ans;
	ans.clear();
	double angle;
	double Q,R;
	if(mat.size()==2)
	{	
		t[1]= (-1)*mat[0][0]+(-1)*mat[1][1];
		t[0]=mat[0][0]*mat[1][1]-mat[0][1]*mat[1][0];	
		ans.push_back((-1*t[1]+sqrt(t[1]*t[1]-4*1*t[0]))/2);
		ans.push_back((-1*t[1]-sqrt(t[1]*t[1]-4*1*t[0]))/2);

	}
	else if(mat.size()==3)
	{
		t[2]=-1*(mat[0][0]+mat[1][1]+mat[2][2]);//a
		t[1]=-1*(-1*(mat[0][0]*mat[1][1]+mat[0][0]*mat[2][2]+mat[1][1]*mat[2][2])+mat[1][2]*mat[2][1]+mat[0][1]*mat[1][0]+mat[2][0]*mat[0][2]);//b
		t[0]=-1*(mat[0][0]*(mat[1][1]*mat[2][2]-mat[1][2]*mat[2][1])-mat[1][0]*(mat[0][1]*mat[2][2]-mat[0][2]*mat[2][1])+mat[2][0]*(mat[0][1]*mat[1][2]-mat[0][2]*mat[1][1]));//c

		Q = (t[2]*t[2]-3*t[1])/9;
		R = (2*t[2]*t[2]*t[2]-9*t[1]*t[2]+27*t[0])/54;
		angle = acos(R/sqrt(pow(Q,3)));
		ans.push_back(-2*sqrt(Q)*cos(angle/3)-t[2]/3);
		ans.push_back(-2*sqrt(Q)*cos((angle+2*PI)/3)-t[2]/3);
		ans.push_back(-2*sqrt(Q)*cos((angle-2*PI)/3)-t[2]/3);
	}

	return ans;
}


vector<vector<double>> Mat::LeastSquare(vector<vector<double>> x,vector<vector<double>> y) //Least Square
{
	vector<vector<double>> mat;
	Mat *m_temp=new Mat();
	if(x.empty() || y.empty())
		return mat;
	else if(x[0].size()!=y.size())
		return mat;
	m_temp->push(x);
	mat=m_temp->mul(1,'a',transpose(x));
	mat=m_temp->mul(1,'a',Inverse(mat));
	m_temp->M[0]=y;
	mat=m_temp->mul(1,'a',mat);
	return mat;

}

vector<vector<double>>Mat::eigenvector(vector<double>val,vector<vector<double>>mat)
{
	vector<vector<double>> t;
	float tx[3];
	vector<vector<double>> ans_vec;
	vector<double> temp;
	int k=0;
	if(mat.size()==2)
	{	
		for(int i =0;i<val.size();i++)
		{
			t.clear();
			temp.clear();
			temp.push_back(mat[0][0]-val[i]);
			temp.push_back(mat[0][1]);
			t.push_back(temp);
			temp.clear();
			temp.push_back(mat[1][0]);
			temp.push_back(mat[1][1]-val[i]);
			t.push_back(temp);
			t=gaussian_elimination(t);
			temp.clear();
			temp.push_back(t[0][0]);
			temp.push_back(-1*t[0][1]);
			temp=vec->normal(temp);
			ans_vec.push_back(temp);


		}

	}
	else if(mat.size()==3)
	{
		for(int i =0;i<val.size();i++)
		{
			t.clear();
			for(int k=0;k<mat.size();k++)
			{
				temp.clear();
				for(int h=0;h<mat.size();h++)
				{
					if(k==h)
					{
						temp.push_back(mat[k][h]-val[i]);
					}
					else
					{
						temp.push_back(mat[k][h]);
					}
				}
				t.push_back(temp);

			}
			temp.clear();
			t=gaussian_elimination(t);
			tx[2]=t[1][1];
			tx[1]=-t[1][2];
			tx[0]=-1*(t[0][1]*tx[1]+t[0][2]*tx[2])/t[0][0];

			temp.push_back(tx[0]);
			temp.push_back(tx[1]);
			temp.push_back(tx[2]);

			temp=vec->normal(temp);
			for(int i=0;i<3;i++)
				if(abs(temp[i])<0.000001)
				{
					temp[i]=0;
				}
				ans_vec.push_back(temp);
				temp.clear();
		}
	}
	return ans_vec;
}

vector<double> Mat::solveliner(vector<vector<double>> a ,vector<vector<double>> b)
{
	vector<double> ans;
	double tx[100];
	for(int i=0;i<a.size();i++)
		a[i].push_back(b[i][0]);

	a = gaussian_elimination(a);
	for(int i=0;i<a.size();i++)
	{
		tx[i]=0;
	}
	for(int i =a[0].size()-2;i>=0;i--)
	{
		for(int j=a[0].size()-2;j>i;j--)
		{
			tx[i]+=-1*a[i][j]*tx[j];

		}
		tx[i]+=a[i][a[0].size()-1];
	}
	for(int i = 0; i<a.size();i++)
	{
		ans.push_back(tx[i]);
	}

	return ans;
}
vector<vector<double>> Mat::UpperTri(vector<vector<double>> mat)
{
	double temp;


	for(int i=0;i<mat.size();i++)
	{
		if(i<mat.size()&&i<mat[0].size())
		{
			if(mat[i][i]==0)//第一列為零 與下面不為零的列做交換
				for(int j=i+1;j<mat.size();j++)
					if(mat[j][i]!=0)
					{
						for(int k=i;k<mat[0].size();k++)
						{
							temp=mat[i][k]; 
							mat[i][k]=mat[j][k];
							mat[j][k]= temp;
						}
						break;
					}

					if (mat[i][i] == 0) continue;
					// 上方row的首項係數調整成一
					double t0 = mat[i][i];
					for (int k=i; k<mat[0].size(); k++)
						mat[i][k] /= t0;
					for (int j=i+1; j<mat.size(); j++)

						if (mat[j][i] != 0)
						{
							double t = mat[j][i];
							for (int k=i; k<mat[0].size(); k++)
								mat[j][k] -= mat[i][k] * t;
						}
						for (int k=i; k<mat[0].size(); k++)
							mat[i][k] *= t0;

		}
	}
	return mat;
}

vector<vector<double>> Mat::DownTri(vector<vector<double>> mat)
{
	double temp;


	for(int i=mat.size()-1;i>=0;i--)
	{

		if(mat[i][i]==0)//尾列為零 與下面不為零的列做交換
			for(int j=i-1;j>=0;j--)
				if(mat[j][i]!=0)
				{
					for(int k=0;k<mat.size();k++)
					{
						temp=mat[i][k]; 
						mat[i][k]=mat[j][k];
						mat[j][k]= temp;
					}
					break;
				}

				if (mat[i][i] == 0) continue;
				// 最下方row的尾項係數調整成一
				double t = mat[i][i];
				for (int k=0; k<mat.size(); k++)
					mat[i][k] /= t;
				for (int j=i-1; j>=0; j--)
					if (mat[j][i] != 0)
					{
						double t = mat[j][i];
						for (int k=i; k>=0; k--)
							mat[j][k] -= mat[i][k] * t;
					}



	}
	return mat;
}
