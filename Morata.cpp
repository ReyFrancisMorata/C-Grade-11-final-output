    #include <iostream>
using namespace std;
int main() 
// staff/dagger beats claymore, claymore beats bow, bow beats dagger
{
	bool gameloop=true;//if true will cause the game to repeat once done
	int i=0;
	int enemyhp=100;
	char dmgtype;
    cout<<"Defeat this enemy"<<"\n";
    do{
    i++;
	if(i>=2){
	enemyhp=100;}
    
    int dmgdg=0;
	srand(time(0));
	dmgdg=rand() % 20 + 10;//dmgdg used to be dagger but I got too lazy to replace each and every dmgdg variable to someething more fitting to the staff.
	int dmgbw=0;
	srand(time(0));
	dmgbw=rand() % 20 + 10;
	
	int dmgcm=0;
	srand(time(0));
	dmgcm=rand() % 20 + 10;
    int enemytype=0;
	srand(time(0));
	enemytype=rand() % 3 + 1; 
     switch(enemytype){
     case 1:
     cout<<"Mage(staff)"<<"\n";
     break;
     case 2:
     cout<<"Paladin(claymore)"<<"\n";
     break;
     case 3:
     cout<<"Archer(bow)"<<"\n";
     break;
     }//enemy weapon type generator
     cout<<enemyhp<<"\n";
    
   cout<<"Select (s) to use staff, select (b) to use bow, and select (c) to use claymore."<<"\n";
   
   while(enemyhp>0){
   cin>>dmgtype;
   if(dmgtype=='s'){
       if(enemytype==2){
           dmgdg*=2;
           cout<<"critical hit!"<<"\n";
       }
       enemyhp-=dmgdg;
       cout<<enemyhp<<"\n";
   } else if(dmgtype=='b'){
       if(enemytype==1){
           dmgbw*=2;
           cout<<"critical hit!"<<"\n";
       }
       enemyhp-=dmgbw;
       cout<<enemyhp<<"\n";
   } else if(dmgtype=='c'){
       if(enemytype==3){
           dmgcm*=2;
           cout<<"critical hit!"<<"\n";
       }
       enemyhp-=dmgcm;
       cout<<enemyhp<<"\n";
   }if(enemyhp<=0){
       switch(enemytype){
     case 1:
     cout<<"You defeated the Mage(staff)"<<"\n";
     break;
     case 2:
     cout<<"You defeated the Paladin(claymore)"<<"\n";
     break;
     case 3:
     cout<<"You defeated the Archer(bow)"<<"\n";
     break;}
   }
       
   }
    }while(gameloop==true);
}