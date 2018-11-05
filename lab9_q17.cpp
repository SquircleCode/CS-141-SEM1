/*
* Auto-Generated File
* Created Using cpp_file_manager
	
Strcpy
Strcat
Strlen
Strcmp
Strchr
Strstr

*/

// Importing Libraries
#include <iostream>

using namespace std;
int strlen(char*);

//display string
void strdsp(char *str){
	for(int i = 0 ; i<strlen(str);i++){
		cout<<*(str+i);	
	}
	cout<<endl;
}

//copy strings
void strcpy(char *s1,char *s2){
	// copies the string char by char
	for (int i =0; i<strlen(s1);i++){
		*(s2+i)=*(s1+i);	
	}
}

//concatenate strings
void strcat(char *s1,char *s2, char *s3){
	int i;	
	for (i =0; i<strlen(s1)+strlen(s2);i++){
		// fills in the first string		
		if(i<strlen(s1))
			*(s3+i)=*(s1+i);
		// starts the 2nd one after the 1st is exhausted		
		else
			*(s3+i)=*(s2+i-strlen(s1));
	}
	*(s3+i)='\0';
}

//compare two strings
bool strcmp(char *s1,char*s2){
	bool b = true; // assumes that the strings are the same	
	for (int i =0; i<strlen(s1);i++){
		// if there is a mismatch it sets b to false and quits the loop		
		if(*(s1+i)!=*(s2+i)){
			b=false;
			break;		
		}	
	}
	return b;
}
//length of string
int strlen(char* str){
	int i =0;
	// counts char b4 null char	
	while(*(str+i)!='\0'){
		i++;	
	}
	return i;
}

//search the first occurance of a character in a string
char* strchr(char *str, char c){
	int i = 0;
	//keeps going till there is a match. if not the pointer points at null char
	while(*(str+i)!=c and i < strlen(str))
		i++;
	return str+i;
		
}
//search the first occurance of a character in a string
char* strstr(char *str, char *s){
	int i =0;
	// length of strings
	int n1 = strlen(str);
	int n2 = strlen(s);
	// i is the indexing for str
	// j is the indexing for s
	// checks till the end of str
	while(i<n1){
		int j = 0;
		int k = i; // counts no. of matches
		// checks till the end of s
		while(j<n2){
			// if the characters match, checks the next one
			if(*(str+k)==*(s+j)){
				k++;
			}
			j++;			
		}
		// if the number of matches is equal to the length of s, it exits the loop
		if(k-i==n2)
			break;
		i++;
	}
	// returns the pointer to the first occurance of the string, if the string doesnt occur
	// it points to the null char at the end
	return str+i;
}

// Main Function
int main(){
	// To-Do
	//variables
	char s1 []="Hello";
	//length of s1
	int n1 = strlen(s1);
	char s2 [n1];
	//copy s1 to s2
	strcpy(s1,s2);
	// display s1 and s2
	strdsp(s1);
	strdsp(s2);
	// concatenate s1 and s2 in s3
	char s3 [n1+n1];
	strcat(s1,s2,s3);
	//diplay s3
	strdsp(s3);
	cout << strcmp(s1,s2)<<endl;
	cout << strcmp(s1,"hello")<<endl;
	cout << strlen(s1)<<endl;
	cout << *strchr(s2,'l')<<endl;
	cout << *strstr(s1,"el")<<endl;
	

	return 0;
}


