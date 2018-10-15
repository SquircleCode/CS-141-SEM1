//dynamic inout from user function

int arrayInp (){
	//variables
	string inpLineString;
	//user input
	cout << "Enter a few numbers with spaces in a line";	
	// stores the line in a string	
	getline(cin,inpLineString);
	// points to the first character in the string
	char *inpLine = &inpLineString.at(0);
	// creating reference integer point
	int  ref = 0;
	int *refPtr = &ref;
	bool b = true; // some test condition
	//j- index for blank spaces, i is the index for the char in the string	
	int i =0;
	int j =1; 
	
	while(*(inpLine+i) !='\0'){ 
		while(*(inpLine+i) !=' '&& i<=10){
		 *(refPtr + j)= (*(refPtr + j-1)*10) + (int) *(inpLine+i);
		i++;
		cout <<"i = " <<i <<"\t j = "<< j <<"\t value = "<<*(refPtr) << endl;
		}
		cout <<"* i = " <<i <<"\t j = "<< j <<"\t value = "<<*(refPtr) << endl;
		if(*(inpLine+i) ==' '){
			cout<<"ifff";
			j++;
			i++;		
		}
		
	}
	
	
}

