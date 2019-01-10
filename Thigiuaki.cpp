#include <iostream>

using namespace std;
int main()
{
	unsigned int sotienkyvong;
    unsigned int tiengui;
	float laisuat;
	int nam;
	
	
	
	do 
	{
	  cout<<"nhap vao sotiengui , laisuat , sotienkyvong: ";
	  cin>>tiengui>>laisuat>>sotienkyvong;
	}
	
	while (sotienkyvong<tiengui);
	
	nam=sotienkyvong/tiengui *(1+(laisuat/100 ));
		
	cout<<"sonam:"<<nam;
	
	
	return 0;
	
}
