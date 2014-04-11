
#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <sstream>
using namespace std;

//儲存輸入的向量
vector<double> *vecc;

vector<double> dotproduct(double scal,vector<double> p1)
{
	vector<double> newp1;
	for(int i= 0 ; i < p1.size() ; i++)
	{
			newp1.push_back(p1[i]*scal);
	}
	return newp1;
}


//各個運算子的優先權

int priority(char op) { 
	switch(op) { 
	case '+': case '-': return 1;
	case '*': case 'x': return 2;
	default:            return 0;
	} 
}
//向量的各種運算
vector<double> cal(char op, vector<double> p1, vector<double> p2) { 
	double dotResult = 0;
	vector<double> p1p2;
	int div;
	switch(op) { 
	case '+': 
		for(int i= 0 ; i < p1.size() ; i++)
		{
			p1[i] += p2[i];
		}
		return p1; 
		break;
	case '-': 
		for(int i= 0 ; i < p1.size() ; i++)
		{
			p1[i] -= p2[i];
		}
		return p1; 
		break;
	
	case '*': 
		if(p1.size()==1)
		{
			p1p2.clear();
			p1p2=dotproduct(p1[0],p2);
		}
		else if(p2.size()==1)
		{
			p1p2.clear();
			p1p2=dotproduct(p2[0],p1);
		}
		else
		{
			dotResult = 0;
			for(int i= 0 ; i < p1.size() ; i++)
			{
				dotResult+=p1[i]*p2[i];
			}
			p1p2.clear();
			p1p2.push_back(dotResult);
		}
		return p1p2; 
		break;
	case 'x':
		p1p2.clear();
		div=p1.size();
		for(int i= 0 ; i < p1.size() ; i++)
		{
			p1p2.push_back(pow(-1.0,(double)i)*(p1[(i+1)%div]*p2[(i+2)%div]-p1[(i+2)%div]*p2[(i+1)%div]));
			dotResult+=p1[i]*p2[i];
		}
		return p1p2;
		break;

	
	} 
}
//中序式轉後序式
std::string inToPostfix(std::string infix) { 
	string postfix;
	vector<char> stack;
	double temp_scaler;
	int j=0, top=0;
	for(int i = 0 ; i < infix.size() ; i++) 
	{
		switch(infix[i])
		{ 
			case '(':              // 運算子堆疊 
				stack.push_back(infix[i]);
				break; 
			case '+': case '-': case '*': case '/': case 'x':
				if(stack.size()>0)
				{
					while(priority(stack[stack.size()-1]) > priority(infix[i])) { 
						postfix += stack[stack.size()-1];
						stack.pop_back();
						if(stack.size()==0)
							break;
					}
				}				 
				stack.push_back(infix[i]); // 存入堆疊 
				break; 
			case ')': 
				while(stack[stack.size()-1] != '(') { // 遇 ) 輸出至 ( 
					postfix += stack[stack.size()-1];
					stack.pop_back();
				} 
				stack.pop_back();  // 不輸出 ( 
				break; 
			/*case '0':case '1': case '2': case '3': case '4':
			case '5':case '6': case '7': case '8': case '9': 
				temp_scaler=0.0;
				while(!(infix[i]>='a'&&infix[i]<='z'))
				{
					if(infix[i]!='.')
					{
						temp_scaler=temp_scaler*10+(int)infix[i]-(int)('0');
					}
					i++;
				}
				postfix += temp_scaler;
				postfix += infix[i];
				break;*/
			default:  // 運算元直接輸出 
				postfix += infix[i];
		}		
	}

	while(stack.size() > 0) { 
		postfix += stack[stack.size()-1];
		stack.pop_back();
	}	

	return postfix;
} 
 
  
 //利用後序式運算計算出結果
 vector<double> eval(std::string PostVExpression) {
	 
	 vector<double> vecResult;
	 vector<vector<double>> v;

	for(int i = 0 ; i < PostVExpression.size() ; i++)
	{
		int top = v.size();
		double scal_temp;
		vector<double> scalvec_temp;
		int scal_count=0;
		char s_temp[1000];
		bool is_scal=false;
		bool single_scal=false;
		stringstream ss1,ss2;
		switch(PostVExpression[i]) { 
		case '+': case '-': case '*': case '/':case 'x':
			{
				vector<double> tmpVec;
				tmpVec = cal(PostVExpression[i], v[top-2], v[top-1]);
				v.pop_back();
				v.pop_back();
				v.push_back(tmpVec); 
				break;
			}			
		default: 
			scal_temp=0.0;
			is_scal=false;
			single_scal=false;
			scal_count=0;
			if(!(PostVExpression[i]>='a'&&PostVExpression[i]<='z'))
			{
				is_scal=true;
				while(!(PostVExpression[i+scal_count]>='a'&&PostVExpression[i+scal_count]<='z')&&PostVExpression[i+scal_count]!='*')
				{
					scal_count++;
				}
				if(PostVExpression[i+scal_count]=='*')
				{
					is_scal=false;
					single_scal=true;
				}
				strncpy(s_temp,&PostVExpression[i],scal_count);
				ss1<<s_temp;
				ss1>>scal_temp;
			}
			while(!(PostVExpression[i]>='a'&&PostVExpression[i]<='z')&&PostVExpression[i]!='*')
			{
					i++;
			}
			if(is_scal)
			v.push_back(dotproduct(scal_temp,vecc[PostVExpression[i]-97]));
			else if(single_scal)
			{
				scalvec_temp=v[v.size()-1];
				v.pop_back();
				v.push_back(dotproduct(scal_temp,scalvec_temp));
				
				i++;
			}
			else
			v.push_back(vecc[PostVExpression[i]-97]);
		}
	}
	vecResult = v[0];
 
 	return vecResult;
 }