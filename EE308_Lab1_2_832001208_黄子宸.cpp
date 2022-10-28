#include<iostream>
string file_name;
int hzc;
steing czh;
cout<< "please enter  the address:";
cin>>file_name;
cout<<"please enter the level:";
cin>> hzc;
ifstream file(file_name.c_str(),ios::in);
while(getline(file,czh))
	
int Confirm(string str, string keyword1)    
{
	
int location = str.find(keyword1, 0);
	
if(location != int(string::npos))
		return 1;
else
		return 0;
}


istringstream is(czh);    
string lhg;
while(is >> lhg){                
	if(hzc >= 1)
		Level_1(lhg);
	if(hzc >= 2)
		Level_2(lhg);
}
}

if(hzc >= 1)
	cout << endl << "total num = " << keyword_num << endl;

if(hzc >= 2){
	cout << "switch num = " << switch_num << endl;
	cout << "case num = " ;
	for(int m = 1; m<= switch_num; m++)
		cout << case_num[m]<<" ";
	cout<<endl;
}

istringstream is(zch);    
string lhg;
if(hzc >= 3)                    
	Level_34(zch);
if(hzc >= 3){
	cout << "if-else num is = " << ifelse_num << endl;
}

if(hzc >= 4){
	cout << "if-elseif-else num is = " << if_elseif_else_num<<endl;
}

