#include<iostream>
using namespace std;

/*******************************************************************************************
******************              A program to count         *********************************              
********                the number of 3's and 7's in a ten            **********************          
********              digit input by the user, this is just           **********************
**************************          for practice              ******************************
*******************************************************************************************/

int main(){
	int inputs[10];  /*an array of inputs collected from the user*/
	cout<<"Input  10 numbers"<<endl;
	for(int a=0; a<11; a++){ //this is to collect the users input into our array
		if (a==0){
			cout<<"1st number: " ;/* i used a loop for this to avoid the codes becoming cramped and also to use the corresponding 'th' or 'st'*/
			cin>>inputs[0]; 
			cout<<endl; 
		} else if (a==1){ 
			cout<<"2nd number: "; 
			cin>>inputs[1]; 
			cout<<endl; 
		} else if (a==2){ 
			cout<<"3rd number: "; 
			cin>>inputs[2]; 
			cout<<endl; 
		} else if(a>3){
			cout<<a<<"th number: ";
			cin>>inputs[a];
			cout<<endl; 
		} 
	}
	int number_of_threes;/* a variable of the number of 3s in the users input*/
	number_of_threes=0;/*we set it to zero in case there is no 3s in the data, that is if there is no 3s in the data, it will return 0 3s */
	int number_of_sevens;/* a variable of the number of 7s in the  users input*/
	number_of_sevens=0;/*we set it to zero in case there is no 7s in the data, that is if there is no 7s in the data, it will return 0 7s */
	int t_number_of_threes;//the total number of threes will be saved here
	int t_number_of_sevens;//the total number of 7s will be saved here
	for(int a=0; a<11; a++){
		if(inputs[a] == 3){
			t_number_of_threes=++number_of_threes;
			t_number_of_sevens=number_of_sevens;
		} else if(inputs[a] == 7){
			t_number_of_threes=number_of_threes;
			t_number_of_sevens=++number_of_sevens;
		}else{
			t_number_of_threes=number_of_threes;
			t_number_of_sevens=number_of_sevens;
		}
	}
	cout<<"There are "<<t_number_of_threes<<" threes and "<<t_number_of_sevens<<" sevens"<<endl;
	return 0;
}

/************************************************************************                   
* I dont understand line 10 and 35, why are we using                    *                   
* 11 as the array length when calling the array instead                 *
* of 10, if i put ten there as the array length, the code               *
* doesnt work properly, in the caae of line 10, it doesnt               *                   
* ask for a value of the last input in the array, it only asks          *
* when i put the array lenth as 11, i.e 'a'                             *
* In the case of the line 35, if i put 10 as the array length,          *                  
* it doesnt count the last input if it is a 3 or a 7 like it never      *
* existed                                                               *
************************************************************************/ 
