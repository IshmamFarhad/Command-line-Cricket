#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    string user_name;
    cout << "                                     Welcome to the classic game of hand cricket." << endl<<endl<<endl;
    cout << "What's your name?" <<endl ;
    cin  >> user_name;
    cout << endl << endl ;
    cout <<"Welcome "<<user_name<<"."<<endl;
    cout <<"                                                 INSTRUCTIONS"<<endl;
    cout <<"1.Always type in either small case(ex-toss) or capital case(ex-TOSS) or with only capitalizing the 1st alphabet(ex-Toss)"<<endl;
    cout <<"2.Don't type like tOss , TosS,tOSs etc etc."<<endl;
    cout <<"3.After the toss u will either bat or ball"<<endl;
    cout <<"4.While batting u will type 1,2,3,4,5 or 6. The computer will do the same. If your and computer's move match up then you will lose a wicket."<<endl;
    cout <<"5.If your and computer's move don't match, your move will be added to your total run."<<endl;
    cout <<"6.There are 4 wickets each team."<<endl;
    cout <<"7.There are 4 overs."<<endl;
    cout <<"8.After your all wickets are over or the overs the over than its computer's time to bat"<<endl;
    cout <<"9.Computer will chase your score. If computer is successful in the chase he wins, if not u win"<<endl;
    cout <<"10.If you ball first the process is reversed"<<endl<<endl;
    cout <<"                                                 Enjoy the game"<<endl;
    int random_toss_chooser = 1 + rand()%2;
    int coin_toss = 1 + rand()%2;
    int computer_win_status = 0;//0 means computer lost the toss and 1 means computer won the toss
    int computer_call_int = 1+rand()%2;//computer choosing head or tails
    int computer_choice = 1+rand()%2;//1 means computer choose batting , 2 means computer choose balling
    int computer_country_chooser = 1+rand()%7;
    int just_leave;
    string players_choice;//stores wither players choose batting or bowling
    string players_call;//stores head or tail
    string toss;// just stores toss
    string Player_country_choice;//stores which country the player chooses
    string Computer_country_choice;//stores which country the player chooses
    string Bangladesh[4]={"Tamim Iqbal","Sakib Al Hasan","Mahmudullah","Mashrafi Mortoza"};
    string India[4]={"Rohit Sharma","Virat Kholi","Hardik Pandya","Ravindra Jadeja"};
    string Pakistan[4]={"Imam-ul-haq","Babar Azam","Shoaib Malik","Mohammad Hafeez"};
    string Australia[4]={"Steve Smith","David Warner","Glenn Maxwell","Mitchell Starc"};
    string England[4]={"Joe Root","Eoin Morgan","Ben stokes","Moeen Ali"};
    string Afganistan[4]={"Hazratullah Zazai","Najibullah Zadran","Mohammad Nabi","Rahmat Shah"};
    string Srilanka[4]={"Dimuth Karunaratne","Avishka Fernando","Thisara Perera","Angelo Mathews"};
    string Player_Country[4];
    string computer_country[4];
    string commentary_on_wicket[5]={"A brilliant inswing and ","A yorker and ","The ball is up in the air and it's a catch and ","Bowled it!! and ", "An easy catch behind the stumps and "};
    cout << "Choose your country. Type the name of the country you want to be."<<endl;
    cout <<"Available countries are Bangladesh,India,Pakistan,Australia,England,Afganistan,Srilanka."<<endl;
    cout <<"N.B = Please don't misspell the country name."<<endl;
    cin >>Player_country_choice;
    cout <<"Computer choosing country :-"<<endl;


    if(computer_country_chooser==1){
        Computer_country_choice = "Bangladesh";
        computer_country[0]=Bangladesh[0];
        computer_country[1]=Bangladesh[1];
        computer_country[2]=Bangladesh[2];
        computer_country[3]=Bangladesh[3];
    }


    if(computer_country_chooser==2){
        Computer_country_choice = "India";
        computer_country[0]=India[0];
        computer_country[1]=India[1];
        computer_country[2]=India[2];
        computer_country[3]=India[3];
    }

    if(computer_country_chooser==3){
        Computer_country_choice = "Pakistan";
        computer_country[0]=Pakistan[0];
        computer_country[1]=Pakistan[1];
        computer_country[2]=Pakistan[2];
        computer_country[3]=Pakistan[3];
    }

    if(computer_country_chooser==4){
        Computer_country_choice = "Australia";
        computer_country[0]=Australia[0];
        computer_country[1]=Australia[1];
        computer_country[2]=Australia[2];
        computer_country[3]=Australia[3];
    }

    if(computer_country_chooser==5){
        Computer_country_choice = "England";
        computer_country[0]=England[0];
        computer_country[1]=England[1];
        computer_country[2]=England[2];
        computer_country[3]=England[3];
    }

    if(computer_country_chooser==6){
        Computer_country_choice = "Afganistan";
        computer_country[0]=Afganistan[0];
        computer_country[1]=Afganistan[1];
        computer_country[2]=Afganistan[2];
        computer_country[3]=Afganistan[3];
    }

    if(computer_country_chooser==7){
        Computer_country_choice = "Srilanka";
        computer_country[0]=Srilanka[0];
        computer_country[1]=Srilanka[1];
        computer_country[2]=Srilanka[2];
        computer_country[3]=Srilanka[3];
    }
    cout <<Computer_country_choice<<endl;



    if(Player_country_choice=="Bangladesh" || Player_country_choice=="bangladesh" || Player_country_choice=="BANGLADESH"){
        Player_Country[0]=Bangladesh[0];
        Player_Country[1]=Bangladesh[1];
        Player_Country[2]=Bangladesh[2];
        Player_Country[3]=Bangladesh[3];
        }
    if(Player_country_choice=="India" || Player_country_choice=="india" || Player_country_choice=="INDIA"){
        Player_Country[0]=India[0];
        Player_Country[1]=India[1];
        Player_Country[2]=India[2];
        Player_Country[3]=India[3];
    }
    if(Player_country_choice=="Pakistan" || Player_country_choice=="pakistan" || Player_country_choice=="PAKISTAN"){
        Player_Country[0]=Pakistan[0];
        Player_Country[1]=Pakistan[1];
        Player_Country[2]=Pakistan[2];
        Player_Country[3]=Pakistan[3];
    }
    if(Player_country_choice=="Australia" || Player_country_choice=="australia" || Player_country_choice=="AUSTRALIA"){
        Player_Country[0]=Australia[0];
        Player_Country[1]=Australia[1];
        Player_Country[2]=Australia[2];
        Player_Country[3]=Australia[3];
    }

    if(Player_country_choice=="England" || Player_country_choice=="england" || Player_country_choice=="ENGLAND"){
        Player_Country[0]=England[0];
        Player_Country[1]=England[1];
        Player_Country[2]=England[2];
        Player_Country[3]=England[3];
    }

    if(Player_country_choice=="Afganistan" || Player_country_choice=="afganistan" || Player_country_choice=="AFGANISTAN"){
        Player_Country[0]=Afganistan[0];
        Player_Country[1]=Afganistan[1];
        Player_Country[2]=Afganistan[2];
        Player_Country[3]=Afganistan[3];
    }
    if(Player_country_choice=="Srilanka" || Player_country_choice=="srilanka" || Player_country_choice=="SRILANKA"){
        Player_Country[0]=Srilanka[0];
        Player_Country[1]=Srilanka[1];
        Player_Country[2]=Srilanka[2];
        Player_Country[3]=Srilanka[3];
    }






    if(random_toss_chooser==1){
      cout<<"It's your call, type head or tail to make your call"<<endl;
      cin >> players_call;

      if(coin_toss==1){
        cout << "It's a head."<<endl;
        if(players_call=="Head" || players_call=="head" || players_call=="HEAD"){
            cout << "You win the toss. Type bat for batting or ball for bowling."<<endl;
            cin >>players_choice;

            }
        if(players_call=="Tail" ||  players_call=="tail" || players_call=="TAIL"){
            cout <<"You lost the toss."<<endl;
            computer_win_status = 1;

        }
      }
      if(coin_toss==2){
            cout << "It's a tail."<<endl;
        if(players_call=="Tail" || players_call=="tail" || players_call=="TAIL"){
            cout << "You win the toss. Type bat for batting or ball for bowling."<<endl;
            cin >>players_choice;

            }
        if(players_call=="Head" ||  players_call=="head" || players_call=="HEAD"){
            cout <<"You lost the toss."<<endl;
            computer_win_status = 1;

        }

      }

    }
    if (random_toss_chooser==2){


        cout << "You will toss the coin and computer will choose"<<endl;
        cout <<"Type toss to toss the coin"<<endl;
        cin >> toss;

         if(computer_call_int==1){
        cout <<"Computer's call-Head" <<endl;
        }
        if(computer_call_int==2){
        cout <<"Computer's call-Tail"<<endl;
        }
        if(coin_toss==1){
            cout <<"It's a head"<<endl;
        }
        if(coin_toss==2){
            cout <<"It's a tail"<<endl;
        }
        if(coin_toss==computer_call_int){
            cout <<"You loss the toss"<<endl;
            computer_win_status=1;
        }
        else{
            cout <<"You won the toss"<<endl;
            cout << "Type bat for batting or ball for bowling."<<endl;
            cin >>players_choice;


        }
    }

        if((computer_win_status==1 && computer_choice==1) || (computer_win_status==0 && (players_choice=="Ball" || players_choice=="ball" || players_choice=="BALL"))){

          int wicket = 0;
          int over = 0;
          int ball = 0;
          int computer_runs = 0;
          cout << "The innings is starting. computer with the bat. "<<endl;
          cout << computer_country[0]<< " is with the bat and "<<Player_Country[3]<<" with the ball"<<endl;
          while(wicket<4 && over<4){
                int computer_move_bat = 1 + rand()%6;
                int player_move_ball;
                cout << "Your move:- ";
                cin >>player_move_ball;
                cout <<"Computer's move:- ";
                cout <<computer_move_bat<<endl;
              if(player_move_ball<7){

                ball ++;
                if(ball==6){
                    over ++;
                    ball =0;
                    cout<<over<<" over completed. "<<Player_Country[3-over]<<" is the new bowler."<<endl;

                }
                if(player_move_ball==computer_move_bat){

                  cout << commentary_on_wicket[1+rand()%5] << computer_country[wicket] << " is out."<<endl;
                  wicket++;
                  cout << "New batsman is "<<computer_country[wicket]<<"."<<endl;



                }
                if(player_move_ball!=computer_move_bat){
                        computer_runs = computer_runs + computer_move_bat;

                }
                if(computer_runs==50){
                    cout <<"Computer reaches half-century"<<endl;
                }
                if(computer_runs==100){
                    cout <<"Computer reaches century"<<endl;
                }
                cout << "Score:- "<<computer_runs<<"/"<<wicket<<" Overs:- "<<over<<"."<<ball<<endl<<endl;


               }
               if(player_move_ball>6){
                cout<<"Your move can't be bigger than 6. Try again"<<endl<<endl;
               }
              }
              cout<<"The 1st innings is over. The target is "<<computer_runs+1<<". To win you have to chase it before 4 overs"<<endl<<endl<<endl;

          int wicket_2 = 0;
          int over_2 = 0;
          int ball_2= 0;
          int player_runs = 0;
          cout << "The 2nd innings is starting. You will bat now. "<<endl;
          cout << Player_Country[0]<< " is with the bat and "<<computer_country[3]<<" with the ball"<<endl;
          while(wicket_2<4 && over_2<4 && player_runs<=computer_runs){
              int computer_move_ball = 1 + rand()%6;
              int player_move_bat;
               cout << "Your move:- ";
                cin >>player_move_bat;
                cout <<"Computer's move:- ";
                cout <<computer_move_ball<<endl;
                if(player_move_bat<7){

                   ball_2++;
                   if(ball_2==6){
                    over_2 ++;
                    ball_2 =0;
                    cout<<over_2<<" over completed. "<<computer_country[3-over]<<" is the new bowler."<<endl;

                }
                 if(player_move_bat==computer_move_ball){

                  cout << commentary_on_wicket[1+rand()%5] << Player_Country[wicket] << " is out."<<endl;
                  wicket++;
                  cout << "New batsman is "<<Player_Country[wicket]<<"."<<endl;



                }
                if(computer_move_ball!=player_move_bat){
                        player_runs = player_runs + player_move_bat;


                }
                if(player_runs==50){
                    cout <<"Congrates! You reached half-century"<<endl;
                }
                if(player_runs==100){
                    cout <<"Cogrates! You reached century"<<endl;
                }
                cout << "Score:- "<<player_runs<<"/"<<wicket_2<<" Overs:- "<<over_2<<"."<<ball_2<<endl<<endl;



          }
          if(player_move_bat>6){
                cout<<"Your move can't be bigger than 6. Try again"<<endl<<endl;
               }




        }
        if (computer_runs==player_runs){
            cout<<"The game is a draw"<<endl;
        }
        if (player_runs>computer_runs){
            cout<<"You Won!!! Congratulation!!!"<<endl;
        }
        if (computer_runs>player_runs){
            cout<<"Alas!!You lost!!Try again!!"<<endl;
        }

        }
        if((computer_win_status==1 && computer_choice==2) || (computer_win_status==0 && (players_choice=="Bat" || players_choice=="bat" || players_choice=="BAT"))){

          int wicket_2 = 0;
          int over_2 = 0;
          int ball_2= 0;
          int player_runs = 0;
          cout << "The  innings is starting. You will bat now. "<<endl;
          cout << Player_Country[0]<< " is with the bat and "<<computer_country[3]<<" with the ball"<<endl;
          while(wicket_2<4 && over_2<4){
                int computer_move_ball = 1 + rand()%6;
              int player_move_bat;
               cout << "Your move:- ";
                cin >>player_move_bat;
                cout <<"Computer's move:- ";
                cout <<computer_move_ball<<endl;
                if(player_move_bat<7){

                   ball_2++;
                   if(ball_2==6){
                    over_2 ++;
                    ball_2 =0;
                    cout<<over_2<<" over completed. "<<computer_country[3-over_2]<<" is the new bowler."<<endl;

                }
                 if(player_move_bat==computer_move_ball){

                  cout << commentary_on_wicket[1+rand()%5] << Player_Country[wicket_2] << " is out."<<endl;
                  wicket_2++;
                  cout << "New batsman is "<<Player_Country[wicket_2
                  ]<<"."<<endl;



                }
                if(computer_move_ball!=player_move_bat){
                        player_runs = player_runs + player_move_bat;


                }
                if(player_runs==50){
                    cout <<"Congrates! You reached half-century"<<endl;
                }
                if(player_runs==100){
                    cout <<"Cogrates! You reached century"<<endl;
                }
                cout << "Score:- "<<player_runs<<"/"<<wicket_2<<" Overs:- "<<over_2<<"."<<ball_2<<endl<<endl;


          }
           if(player_move_bat>6){
                cout<<"Your move can't be bigger than 6. Try again"<<endl<<endl;
               }
        }
        cout<<"The 1st innings is over. The target is "<<player_runs+1<<". To win computer has to chase it before 4 overs"<<endl<<endl<<endl;


        int wicket = 0;
        int over = 0;
        int ball = 0;
        int computer_runs = 0;
        cout << "The 2nd innings is starting. Computer will bat now. "<<endl;
        cout << computer_country[0]<< " is with the bat and "<<Player_Country[3]<<" with the ball"<<endl;
        while(wicket<4 && over<4 && computer_runs <= player_runs){
             int computer_move_bat = 1 + rand()%6;
                int player_move_ball;
                cout << "Your move:- ";
                cin >>player_move_ball;
                cout <<"Computer's move:- ";
                cout <<computer_move_bat<<endl;
              if(player_move_ball<7){

                ball ++;
                if(ball==6){
                    over ++;
                    ball =0;
                    cout<<over<<" over completed. "<<Player_Country[3-over]<<" is the new bowler."<<endl;

                }
                if(player_move_ball==computer_move_bat){

                  cout << commentary_on_wicket[1+rand()%5] << computer_country[wicket] << " is out."<<endl;
                  wicket++;
                  cout << "New batsman is "<<computer_country[wicket]<<"."<<endl;



                }
                if(player_move_ball!=computer_move_bat){
                        computer_runs = computer_runs + computer_move_bat;

                }
                if(computer_runs==50){
                    cout <<"Computer reaches half-century"<<endl;
                }
                if(computer_runs==100){
                    cout <<"Computer reaches century"<<endl;
                }
                cout << "Score:- "<<computer_runs<<"/"<<wicket<<" Overs:- "<<over<<"."<<ball<<endl<<endl;


               }
               if(player_move_ball>6){
                cout<<"Your move can't be bigger than 6. Try again"<<endl<<endl;
               }


        }
         if (computer_runs==player_runs){
            cout<<"The game is a draw"<<endl;
        }
        if (player_runs>computer_runs){
            cout<<"You Won!!! Congratulation!!!"<<endl;
        }
        if (computer_runs>player_runs){
            cout<<"Alas!!You lost!!Try again!!"<<endl;
        }



        }









    cin >> just_leave;


    return 0;

}
