
#include <iostream>
#include <vector>
using namespace std;

//儲存輸入的向量
vector<double> *vecc;

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
		dotResult = 0;
		for(int i= 0 ; i < p1.size() ; i++)
		{
			dotResult+=p1[i]*p2[i];
		}
		p1p2.clear();
		p1p2.push_back(dotResult);
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
			v.push_back(vecc[PostVExpression[i]-97]);
		}
	}
	vecResult = v[0];
 
 	return vecResult;
 }