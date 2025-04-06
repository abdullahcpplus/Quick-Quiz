#include<iostream>
#include<cstring>
#include<windows.h>
#include<conio.h>
using namespace std;
void quiz(){
    system("cls");
    char ans;
    int marks=0;
    char dec;
    bool run= true;
    while(run){
      system("cls");
    cout<<"1) The world's most popular sport?"<< endl;
    cout<<"a) cricket \tb) soccer"<<endl;
    cout<<"c) football\td)Hockey"<< endl;
    cout<<"Enter youe option: ";
    cin>>ans;
    if(ans=='c' || ans=='C'){
      marks+=1;
    }
    cout<<"2) Who's the first president of america?"<< endl;
    cout<<"a) George Washington \tb) William Henry Harrison"<<endl;
    cout<<"c) Abraham Lincoln   \td)John F. Kennedy"<< endl;
    cout<<"Enter youe option: ";
    cin>>ans;
    if(ans=='a' || ans=='A'){
      marks+=1;
    }    cout<<"3) How many letters are there in the English alphabet?"<< endl;
    cout<<"a) 18   \tb) 22"<<endl;
    cout<<"c) 14   \td) 26"<< endl;
    cout<<"Enter youe option: ";
    cin>>ans;
    if(ans=='d' || ans=='D'){
      marks+=1;
    }
    cout<<"4) What Netflix show had the most streaming views in 2021?"<< endl;
    cout<<"a) Jupiter's Legacy\tb) Squid Game"<< endl;
    cout<<"c) The Night Agent \td) Dark"<< endl;
    cout<<"Enter your option: ";
    cin>> ans;
    if(ans=='B' || ans=='b'){
      marks+=1;
    }    cout<<"5) What is the highest-grossing film of all time? "<< endl;
    cout<<"a) Avangers Endgame b) Avatar"<< endl;
    cout<<"c) Titanic          d) Oppenheimer "<< endl;
    cout<<"Enter your option: ";
    cin>> ans;
    if(ans=='B' || ans=='b'){
      marks+=1;
    }    cout<<"6) What is the only mammal capable of true flight?"<< endl;
    cout<<"a) Bat\tb) Rat"<< endl;
    cout<<"c) Hen\td) The ostrich"<< endl;
    cout<<"Enter your option: ";
    cin>> ans;
    if(ans=='a' || ans=='A'){
      marks+=1;
    }    cout<<"7) In what year did World War II end?"<< endl;
    cout<<"a) 1948 \tb) 1942"<< endl;
    cout<<"c) 1940 \td) 1945" << endl;
    cout<<"Enter your option: ";
    cin>> ans;
    if(ans=='d' || ans=='D'){
      marks+=1;
    } cout<<"8) What software company is headquartered in Redmond, Washington?"<< endl;
    cout<<"a) Oracle    \tb) Linux"<< endl;
    cout<<"c) Mircosoft \td) Adobe" << endl;
    cout<<"Enter your option: ";
    cin>> ans;
    if(ans=='c' || ans=='C'){
      marks+=1;
    } cout<<"9) What phone company produced the 3310?"<< endl;
    cout<<"a) Samsung  \tb) Nokia"<< endl;
    cout<<"c) Motorola \td) Google" << endl;
    cout<<"Enter your option: ";
    cin>> ans;
    if(ans=='B' || ans=='b'){
      marks+=1;
    } cout<<"10) Who's the creater of this quiz?"<< endl;
    cout<<"a) Ahamd \tb) Jhon"<< endl;
    cout<<"c) Bilal \td) Abdullah" << endl;
    cout<<"Enter your option: ";
    cin>> ans;
    if(ans=='d' || ans=='D'){
      marks+=1;
    }
    cout<< endl;
    cout<<"\tYour total marks "<< marks<<" out of 10."<< endl;
    if( marks>= 6){
      cout<<"\tCongratulate yor are pass"<<endl<< endl;
    }
    else{
      cout<<"\tFail try again"<< endl<< endl;
    }
     cout<<"Press 1 to start quiz again."<<endl;
     cout<<"Press 2 to back to home page."<< endl;
     cin>>dec;
     if(dec == '1'){

     }
     else if( dec== '2'){
      run = false;
     }
     else{
      system("cls");
      cout<<"You enter wrong key now you take this quiz again"<< endl;
      Sleep(1500);
     }

     }
}
int main(){
    char option, choice;
    bool run= true;
    while (run)
    {
      system("cls");
      cout<<"\t****************Wlecome to short quiz*******************"<< endl<< endl;
      cout<<"\t _____________________________________________________"<<endl;
      cout<<"\t| This is a short quiz based on 10 question.          |"<<endl;
      cout<<"\t| Every Question contain 1 mark.                      |"<<endl;
      cout<<"\t| To pass this quiz you should get 6 maks out of 10.  |"<<endl;
      cout<<"\t| Don't worry no negtive marking.                     |"<<endl;
      cout<<"\t| Press s to start the quiz.                          |"<<endl;
      cout<<"\t| Press q to quit this page.                          |"<<endl;
      cout<<"\t|_____________________________________________________|"<<endl;
      cout<<"Enter your choice: ";
      cin>>choice;
      if(choice== 's' || choice== 'S'){
          quiz();
      }
      else if(choice == 'q' || choice== 'Q'){
        system("cls");
        run = false;
        cout<<"\t\tBest of Luck.";
        Sleep(2000);
       }else{
        system("cls");
        cout<<"You choice wrong option."<<endl;
        cout<<"Rdirecting the page."<< endl;
        Sleep(1000);
       }
    }
    
}