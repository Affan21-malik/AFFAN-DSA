#include <bits/stdc++.h>
using namespace std;

int main() {
	char f_name[20];
	char l_name[20];
	char full_name[50];
	cout<<"enter your first name "<<endl;
	cin>>f_name;
		cout<<"enter your last name "<<endl;
		cin>>l_name;
		cout<<"hi "<<f_name<<"your first name character are "<<strlen(f_name)<<" and last name character are "<<strlen(l_name)<<endl;
		strcpy(full_name,f_name);    
	strcat(full_name, " ");    
	strcat(full_name,l_name);    
	cout<<"Your Full name is: "<<full_name<<endl;        	if((strcmp(f_name,l_name))==0)        
		cout<<"Both strings are equal."<<endl;    
	else        
		cout<<"Strings are not equal."<<endl;    
	return 0; 

}
/*
#include <iostream>
#include<string>
using namespace std;
int main() 
{   
	string str1 = {"hello"};   
	string str2 {"Joy"};   
	string str3 {str2};   
	string str4 (5,'a'); //Displaying 'a' 5 times   	
    cout<<str1<<endl<<str2<<endl<<str3<<endl<<str4;    	return 0;
}
*/
/*
#include <iostream>
#include<string>
using namespace std;
int main() 
{   
	string str1 = {"hello"};   
	string str2 {str1,3}; //Displaying characters 			from index 3 (starting from 0)   
	string str3 {"Dipika",3}; //Displaying first 3 						characters   
	cout<<str1<<endl<<str2<<endl<<str3;    
	return 0;
}
*/
