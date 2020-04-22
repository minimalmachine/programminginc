#include <iostream>
using namespace std;

int main() {
  int calorie;
  bool continua = true;
  char risposta = 's';
  int totaleCalorie = 0;
  int obiettivoCalorieGiornaliero;
  int giorniSuperamentoObiettivo = 0;
  int sommaCalorieSottoObiettivo = 0;
  int giorniSottoObiettivo = 0;
  float mediaSottoObiettivo;
  
  // Limite calorie giornaliero
  cout<<"Valore obiettivo giornaliero calorie da consumare?";
  cin>>obiettivoCalorieGiornaliero;

  while(continua)
  {
    do
    {
     
      cout<<"Calorie consumate nella giornata?";
      cin>>calorie;
      if(calorie>3500)
      {
        cout<<"\nValore di calorie superiore alle 3500 Kcal.Inserire un valore corretto!\n";
      }
    }while(calorie>3500);
    
    // Totale calorie consumate
    totaleCalorie = totaleCalorie+calorie;

    // Giorni superamento obietivo giornaliero
    if(calorie>obiettivoCalorieGiornaliero)
    {
      giorniSuperamentoObiettivo++;
    }
  
    // Media calorie consumete sotto il valore obiettivo
    if(calorie<obiettivoCalorieGiornaliero)
    {
      sommaCalorieSottoObiettivo = sommaCalorieSottoObiettivo + calorie;
      giorniSottoObiettivo++;
    }
    mediaSottoObiettivo = float(sommaCalorieSottoObiettivo)/float(giorniSottoObiettivo);
      


      // Richiesta per continuare ad inserire le claorie consumate giornaliere
      cout<<"\nVuoi continuare?(s/n)?";
      cin>>risposta;
      if(risposta=='n')
      {
       continua= false;
      }
      cout<<"\n";

    

  }

  cout<<"\n===============================\n";
  cout<<"Totale calorie consumate:\t"<<totaleCalorie;
  cout<<"\nGiorni superamento limite obiettivo:\t"<<giorniSuperamentoObiettivo;
  cout<<"\nMedia calorie sotto obiettivo:\t"<<mediaSottoObiettivo;
  cout<<"\n--------------------------------\n";

  
}
