#include<iostream>
#include<string>

using namespace std;
//besmellah
//LinearSearch
//Muhammad Sharafi
//GitHub: MMD-Shen
//for
//Doctor Mojtaba Salehi / Tarahi Algo.
//Title:
//Count Words
//Mohasebeye horuf 

//its price, ye Salavat ba Ajjel farajahom
int main(){
  
    //get DATA
    //reshte:jomle vorudi
    //j:Word's Counter integer
    
    string reshte;
    int j=0;
    getline(cin,reshte);
    //get DATA
    
    //Calculate Loop
    for(int i=0;i<reshte.length();i++){
        //if a word Detected adds it to j++;
        if(isalpha(reshte[i]))
          j++;
        }
    //Calculate Loop
    
    //Extras..
    string javab[7]={"\nBe Salamat",
    "\nAmre Dige?","\nYa Ali","\nMibinamet","\nKhob??","\nGerefti?","\nSalam Beresun"};
    int r;
    srand(time(NULL));
    r=rand()%7;
    //Extras..
    
    //Answer if Valid input
   if(j>0){
       cout<<"Jomleye Shoma: "<<reshte<<endl;
       cout<<"Te'dade Horuf: "<<j<<endl;
    
    //Extra Output;
       cout<<javab[r];}
    //Answer if Valid input
    //
    //Error if Not Valid input 
   else
       cout<<"Chizi Naneveshti Ke Bi Ma'refat..";
    //Error if Not Valid Input
    
   return 0;
} 
