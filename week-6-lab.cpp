#include <iostream>

using namespace std;

int main()
{
    int score;
    cout <<"enter any number";
    cin >> score;
    if(score >=86)
    {
        cout <<"Grade is A";
    }
    else if (score >=72)
    {
        cout <<"grade is B";
    }
   
    else if (score >=60)
    {
        cout <<"grade is C";
    }
    else if (score >=50)
    {
        cout <<"grade is D";
    }
    else
    {
        cout <<"Grade is F";
    }
    
}