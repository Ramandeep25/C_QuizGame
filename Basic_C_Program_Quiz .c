#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

struct player {  
            char playername[20];  
            int score;  
            int stars;        
}p;  

void high_score();
void start();
void instructions();
void reset_score();

void main()
{
	char option;
	
	system("cls");
	printf("\n\n--------------------------- BASIC SCIENCE QUIZ GAME --------------------------\n\n");
	printf("----------------------------- Welcome To The Quiz -------------------------\n\n");
	printf("------------------------------------ MENU -------------------------------\n\n");
	printf("_____________________________________________________________________\n\n");
	
	printf("\t\t\t >> Press S to start the game\n\n");
	printf("\t\t\t >> Press I for the instructions\n\n");
	printf("\t\t\t >> Press H to see high score\n\n");
	printf("\t\t\t >> Press R to reset the score\n\n");
	printf("\t\t\t >> Press any other key to quit the game\n\n");
	

	printf("_______________________________________________________________\n\n");
	
	printf("\n\n Choose the option : ");
	option=toupper(getch());
	
	
	 switch(option)  
    {  
        case 'S':  
        start();  
        break;  
  
        case 'H':  
        high_score();  
        break;  
  
        case 'I':  
        instructions();  
        break;  
  
          default:  
          exit(1);  
    }  
  
  getch();  
}  

void instructions()  
{  
     char ch;  
  
     
	system("cls");
    printf("\n\n                                 Instructions");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... Basic Science Quiz Game........................");
	printf("\n\n\n>> There are total 20 questions.");
	printf("\n\n>> You will be given 4 options and you have to choose one option from A, B ,C or D.");
	printf("\n\n>> You will be asked questions continuously.");
	printf("\n\n>> Every right answer will give you 5 points.");
	
    printf("\n\n************************BEST OF LUCK************************************");
  
  
    printf("\n\n\n Continue playing ?\n\n (Y for Yes / N for No) :  ");  
    scanf("%s",&ch);  
  
    if(ch =='Y' || ch == 'y' )  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
  
}  


void start()  
{  
          int count=0;  
          int i,a;
          
          system("cls");
          
		  FILE *fp;  
  
          if((fp=fopen("play.txt","a"))==NULL)  
             {  
                 printf("error opening file\n");  
             }  
  
         printf("\n\n\n\n\n\t\t\tEnter your name --> ");
		  scanf("%s",p.playername);  
		  
		  system("cls");
     
     printf("\n---------------- Welcome %s to the Quiz ----------------\n\t\t\t",p.playername);
     printf("\n\n---------------------- ALL THE BEST -------------------\n");
     getch();
     
  system("cls");
     count=0;
     for(i=1;i<=20;i++)
     {
    system("cls");
     a=i;
     
    switch(a) 
    {
    	case 1:
		printf("\n\n(Q-1) Which of the following is the nearest planet to the Sun?");
		printf("\n\nA.Mars\n\nB.Mercury\n\nC.Venus\n\nD.Saturn");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
				getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is B.Mercury");
		           getch();
				   break;
		       }
		       
		case 2:
		printf("\n\n(Q-2) What is the study of plants called?");
		printf("\n\nA.Anatomy\n\nB.Anthropology\n\nC.Entomology\n\nD.Botany");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
				getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is D.Botany");
		           getch();
				   break;
		       }
		       
		case 3:
		printf("\n\n(Q-3) Which among the following waves is used for communication by artificial\n     satellites?");
		printf("\n\nA.The frequency of 101 series\n\nB.Radio waves\n\nC.Microwaves\n\nD.A.M.");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
				getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is C.Microwaves");
		           getch();
				   break;
		       }
		       
		case 4:
		printf("\n\n(Q-4) The mass of a star is two times the mass of the Sun. How will it come\n    to an end?");
		printf("\n\nA.Neutron Star\n\nB.Red Giant\n\nC.White Dwarf\n\nD.Blackhole");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
				getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is A.Neutron Star");
		           getch();
				   break;
		       }
		       
		case 5:
		printf("\n\n(Q-5) In which of the following substances all carbon atoms are quaternary\n   in nature?");
		printf("\n\nA.Diamond\n\nB.Graphite\n\nC.Teflon\n\nD.Naphthalene");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is A.Diamond");
		           getch();
				   break;
		       }
		       
		case 6:
		printf("\n\n(Q-6) Which of the following is a large blood vessel that carries blood away\n    from the heart?");
		printf("\n\nA.Vein\n\nB.Artery\n\nC.Capillary\n\nD.Nerve");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is B.Artery");
		           getch();
				   break;
		       }
		       
		
		case 7:
		printf("\n\n(Q-7)  Fungi are plants that lack:");
		printf("\n\nA.Oxygen\n\nB.Carbon dioxide\n\nC.Chlorophyll\n\nD.None of these");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is C.Chlorophyll");
		           getch();
				   break;
		       }
		       
	    case 8:
		printf("\n\n(Q-8) Which of the following is an air-borne disease?");
		printf("\n\nA.Measles\n\nB.Typhoid\n\nC.Pink eye\n\nD.None of the above");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is A.Measles");
		           getch();
				   break;
		       }
	
       
	  case 9:
		printf("\n\n(Q-9) Which one of the following is not a function of the liver?");
		printf("\n\nA.Regulation of blood sugar\n\nB.Enzyme activation\n\nC.Detoxification\n\nD.Reproduction");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is D.Reproduction");
		           getch();
				   break;
		       }
	
	case 10:
		printf("\n\n(Q-10) Detergent is defined as.....");
		printf("\n\nA.A liquid surfactant\n\nB.A liquid soluble\n\nC.A liquid sovent\n\nD.A liquid solution");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is A.A liquid surfactant");
		           getch();
				   break;
		       }
	
    case 11:
		printf("\n\n(Q-11) Which acid is present in lemon?");
		printf("\n\nA.marlic acid\n\nB.citric acid\n\nC.lactic acid\n\nD.tartaric acid");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is B.citric acid");
		           getch();
				   break;
		       }
		       
		       
    case 12:
		printf("\n\n(Q-12) Which of the following is not a type of elements?");
		printf("\n\nA.Metals\n\nB.Non Metals\n\nC.Metalloids\n\nD.Gases");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is D.Gases");
		           getch();
				   break;
		       }
	
    case 13:
		printf("\n\n(Q-13) Who among the following Scientist is associated with discovery of \n    electron? ");
		printf("\n\nA.Galileo\n\nB.Einstein\n\nC.J.J Thomson\n\nD.C.R.T Wilson");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is C.J.J Thomson");
		           getch();
				   break;
		       }
		       
    case 14:
		printf("\n\n(Q-14) Out of the following, ………….. is an inert gas.");
		printf("\n\nA.Helium\n\nB.Fluorine\n\nC.Hydrogen\n\nD.Nitrogen");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is A.Helium");
		           getch();
				   break;
		       }
		       
			        
    case 15:
		printf("\n\n(Q-15) Which of the following devices measures current?");
		printf("\n\nA.Voltmeter\n\nB.Barometer\n\nC.Picometer\n\nD.Ammeter");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is D.Ammeter");
		           getch();
				   break;
		       }
    
	case 16:
		printf("\n\n(Q-16) Of the following quantities, one remains constant during freefall:");
		printf("\n\nA.height\n\nB.velocity\n\nC.potential energy\n\nD.Total energy");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is D.Total energy");
		           getch();
				   break;
		       }
	
 
	case 17:
		printf("\n\n(Q-17) Worms use ……… to breathe:");
		printf("\n\nA.Gills\n\nB.Lungs\n\nC.Skin\n\nD.Mouth");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is C.Skin");
		           getch();
				   break;
		       }
	
	case 18:
		printf("\n\n(Q-18) The colour of the eye depends upon the pigment present inside?");
		printf("\n\nA.cornea\n\nB.iris\n\nC.rods\n\nD.cones");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is B.iris");
		           getch();
				   break;
		       }
	
	case 19:
		printf("\n\n(Q-19) The number of chromosomes present in a normal human being is?");
		printf("\n\nA.23\n\nB.46\n\nC.22\n\nD.48");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is B.46");
		           getch();
				   break;
		       }
	
	case 20:
		printf("\n\n(Q-19) Cement is made hard by:");
		printf("\n\nA.dehydration\n\nB.hydration and dissociation of water\n\nC.Dissociation of water\n\nD.Polymerisation");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect answer!!!");
				++count;
			    getch();
				break;
}
		else
		       {
		           printf("\n\nWrong answer!!! The correct answer is B.hydration and dissociation of water");
		           getch();
				   break;
		       }

	}
     
}
system("cls");
    
	    if(count > 0)  
        {  
                printf("\n\n\n    Thanks for playing, You scored: %d points \t\n\n", count*5);  
  
                p.score=count*5;  
  
                if(p.score > 79)  
                {  
                    printf("   Stars: * * * * *");  
                    p.stars=5;  
                }  
                else if(p.score > 59 && p.score < 80)  
                {  
                    printf(" Stars: * * * *");  
                    p.stars=4;  
                }  
                else if(p.score > 39 && p.score < 60)  
                {  
                    printf(" Stars: * * *");  
                  p.stars=3;  
                }  
                else if(p.score > 19 && p.score < 40)  
                {  
                    printf(" Stars: * *");  
                    p.stars=2;  
                }  
                else if(p.score < 20)  
                {  
                    printf(" Star: *");  
                     p.stars=1;  
                }  
  
    
                    fprintf(fp,"%s  %d  %d ", p.playername,p.score,p.stars);  
                    fclose(fp);  
        }  
        else  
        {  
            printf("Try again!");  
        }  
}  

void high_score()  
{  
  system("cls");
    char ch;  
  
    FILE *fp;  
    if((fp=fopen("play.txt", "r"))==NULL)  
          {   
                printf("\n  No games played yet! \n");  
            }  
            else  
            {  
  
    printf("\n******************************* HIGH SCORES *******************************\n\n");  
    printf("NAME     POINTS     RATING\n");  
    while(fscanf(fp,"%s %d %d ",p.playername,&p.score,&p.stars) !=EOF)  
    {  
        printf("____________________________\n");  
        printf("%s           %d           %d\n\n",p.playername,p.score,p.stars);  
    }  
  
    fclose(fp);  
  
    }  
    printf("\nContinue playing ? (Y for Yes and N for No) :  ");  
    scanf("%s",&ch);  
  
    if(ch=='Y'|| ch=='y')  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
  
}
void reset_score()
    {
	system("cls");
    float sc;
	char nm[20];
	FILE *fp;
	fp=fopen("play.txt","r+");
	fscanf(fp,"%s%f",&nm,&sc);
	sc=0;
	fprintf(fp,"%s,%.2f",nm,sc);
    fclose(fp);
	}

