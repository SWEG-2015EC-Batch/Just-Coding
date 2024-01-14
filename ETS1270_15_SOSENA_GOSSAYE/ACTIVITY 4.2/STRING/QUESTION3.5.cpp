//program that displays the frequency of vowel, consonant, digit and special character 
	string input;
	
	cout<<"Enter a string"<<endl;
	getline(cin,input);
	
	int vowel=0, consonants=0, digits=0, specialChars=0;
	
	for(int i=0; i<input.length(); i++)
	{
    		char ch =tolower(input[i]);
    		
    	if (ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
    		vowel++;		
		}
		else if(ch>='a'&& ch<='z')
		{
			consonants++;
		}
	    else if(isdigit(ch))
  		{
		digits++;
		}
	 	else 
		{
		specialChars++;
		}
		
	}
cout<<"vowels: "<<vowel<<endl;
cout<<"consonants: "<<consonants<<endl;
cout<<"digits: "<<digits<<endl;
cout<<"special characters: "<<specialChars<<endl;
	return 0;
}
