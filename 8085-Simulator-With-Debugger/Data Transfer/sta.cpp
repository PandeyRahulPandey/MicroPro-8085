#include "master.h"
#include "global.h"
#include "tools.h"

bool sta(string temp_string)
{
	vector<string> v;
	v=splitter(temp_string);
	int size=v.size();
	if(size==2)
	{
		int len=v[1].length();
		if(len == 4 )
		{
			int address=hex2dec(v[1]);
			if(address==-1)
					return true;
			storage[address]=gpr[0];
			return false;
		}
		else
		{
			return true;
		}
	}
	else
		return true;
}
