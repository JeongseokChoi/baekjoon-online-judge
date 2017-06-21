#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;


#define LEFT 0
#define RIGHT 1


vector<char> stack[2];


void do_p(char c)
{
	stack[LEFT].push_back(c);
}

void do_l()
{
	if (stack[LEFT].empty())
	{
		return;
	}
	else
	{
		stack[RIGHT].push_back(stack[LEFT].back());
		stack[LEFT].pop_back();
	}
}

void do_d()
{
	if (stack[RIGHT].empty())
	{
		return;
	}
	else
	{
		stack[LEFT].push_back(stack[RIGHT].back());
		stack[RIGHT].pop_back();
	}
}

void do_b()
{
	if (stack[LEFT].empty())
	{
		return;
	}
	else
	{
		stack[LEFT].pop_back();
	}
}


int main(int argc, char* argv[])
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		stack[LEFT].push_back(s[i]);
	}

	int n_case;
	cin >> n_case;
	for (int i_case = 0; i_case < n_case; i_case++)
	{
		char command;
		cin >> command;
		switch (command)
		{
		case 'P':
		case 'p':
			char c;
			cin >> c;
			do_p(c);
			break;
		case 'L':
		case 'l':
			do_l();
			break;
		case 'D':
		case 'd':
			do_d();
			break;
		case 'B':
		case 'b':
			do_b();
			break;
		default:
			exit(EXIT_FAILURE);
		}
	}

	while (stack[RIGHT].empty() == false)
	{
		do_d();
	}

	for (int i = 0; i < stack[LEFT].size(); i++)
	{
		cout << stack[LEFT][i];
	}
	cout << endl;

	return 0;
}