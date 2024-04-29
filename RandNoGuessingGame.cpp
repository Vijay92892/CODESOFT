#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int main(int argc, char const *argv[])
{
    label0:
    cout<<"'Welcome' to our"<<endl;//Welcome
    cout<<endl<<"Number Guessing Game"<<endl;
    //Selecting Game Level
    int level; 
    cout<<endl<<"Select game mode: "<<endl<<endl<<"1.Easy(Range b/w 1 to 25)"<<endl<<endl<<"2.Medium(Range b/w 1 to 75)"<<endl<<endl<<"3.Hard(Range b/w 1 to 150)"<<endl;
    label1:
    cout<<"Select 1, 2 or 3 :";
    cin>>level;
    int t = time(0);//Getting random numbers
    srand(t);
    int start,end;
    int ranNo;
    if (level == 1)//level 1 b/w 1 to 25
    {
        start = 1;
        end = 25;
        ranNo = 1 + rand() % 25;
    }
    else if (level == 2)//level 2 b/w 1 to 75
    {
        start = 1;
        end = 75;
        ranNo = 1 + rand()%75;
    }
    else if (level == 3)//level 3 b/w 1 to 150
    {
        start = 1;
        end = 150;
        ranNo = 1 + rand()%150;
    }
    else{
        goto label1;//Wrng input
    }

    //checking random no. if needed
    // cout<<"::::::"<<ranNo<<"::::::::::::"<<endl; 

    int num;//taking the gusses input

    cout<<endl<<endl<<"(:   Great now lets start the game   :)"<<endl<<endl;
    cout<<"Try a number between "<<start<<" and "<<end<<endl<<"----->";
    bool fst = false;
    label3:
    cin>>num;
    

    if(ranNo==num){//if guesse is correct
        if (fst==true)
        {
            cout<<endl<<"Finally got that right"<<endl;
        }
        else{
            cout<<endl<<"WoW!! You seem to be lucky!"<<endl;
        }
        cout<<"Your random number is "<<num<<endl;
        string ask;
        cout<<"Do you want to play again (y/n) ?"<<endl<<"------->";//Wanna play again??
        cin>>ask;
        if (ask == "y")
        {
            goto label0;
        }
        
    }

    else if (ranNo>num)//guess is smaller than the random
    {
        fst = true;
        cout<<"Guess a bigger number ";
        goto label3;
    }
    else{//guess is larger than the random
        fst = true;
        cout<<"Guess a smaller number ";
        goto label3;
    }

    cout<<endl<<endl;
    
    return 0;
}
