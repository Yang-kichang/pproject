#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int mafia=99;
int police=99;
int doctor=99;

int Police(int a)
{
      int b;
          if(a==0)
                {
                          
                          printf("choose one player for scanning(1~7): ");
                                  scanf("%d",&b);
                                          if(b==mafia)
                                                    {
                                                                  printf("마피아 입니다\n\n");
                                                                              return b;
                                                                                      }
                                                  
                                                  else
                                                            {
                                                                          printf("마피아가 아닙니다\n\n");
                                                                                      return b;
                                                                                              }
                                                      }
              
              else
                    {
                              
                              b=rand()%8;
                                  
                                      while (b == police)
                                                {
                                                              b=rand()%8;
                                                                      }
                                              return b;
                                                  }
                  
}

int Mafia(int a)
{
      int b;
          if(a==0)
                {
                          
                          printf("choose one player for killing");
                                  scanf("%d",&b);
                                          return b;
                                                  
                                              }
              
              else
                    {
                         
                              b=rand()%8;
                                      while (b == mafia)
                                                {
                                                              b=rand()%8;
                                                                          
                                                                      }
                                              
                                              if( b== police)
                                                        {
                                                                      
                                                                  }
                                                      return b;
                                                          }
}

 void Doctor(int a)
   {
             int b;
                     if(a==0)
                               {
                                             
                                             printf("choose one player for healing");
                                                         scanf("%d",&b);
                                                                     
                                                                 }
                             
                             else
                                       {
                                                   
                                                     b=rand()%8;
                                                                 while (b == doctor)
                                                                               {
                                                                                                 b=rand()%8;
                                                                                                             }
                                                                        }
                                  
   }

int main(void)
{
      int rand_v;
          int temp;
              int i=0;
                  int n;
                      int player[8];
                          int vote[8];
                              int judge[8];
                                  
                                  srand((unsigned)time(NULL));
                                      for(i=0;i<8;i++)
                                            {
                                                      player[i]=i;
                                                          }
                                       
                                          
                                          printf("밤이 되었습니다.(계속 진행하시려면 1키를 누르세요)\n\n\n");
                                              while(n!=1)
                                                    {
                                                              scanf("%d",&n);
                                                                  }
                                                  
                                                  printf("====================================================\n");
                                                      printf("경찰, 마피아, 의사를 지목합니다.(계속 진행하시려면 1키를 누르세요)\n");
                                                          
                                                          printf("=====================================================\n\n\n");
                                                              
                                                              n=0;
                                                                  while(n!=1)
                                                                        {
                                                                                  scanf("%d",&n);
                                                                                      }

                                                                     
                                                                      for(i=0;i<8;i++)
                                                                            {
                                                                                      rand_v=rand()%8;
                                                                                              temp=player[i];
                                                                                                 
                                                                                                      
                                                                                                      player[i]=player[rand_v];
                                                                                                          

                                                                                                              player[rand_v]=temp;
                                                                                                                  
                                                                                                                  }
                                                                          
                                                                          if(player[0]==0)
                                                                                {
                                                                                          printf("당신은 마피아 입니다.\n\n");
                                                                                              }
                                                                              
                                                                              else if(player[1]==0)
                                                                                    {
                                                                                              printf("당신은 경찰 입니다.\n\n");
                                                                                                  }
                                                                                  
                                                                                  else if(player[2]==0)
                                                                                        {
                                                                                                  printf("당신은 의사 입니다.\n\n");
                                                                                                      }

                                                                                      else
                                                                                            {
                                                                                                      printf("당신은 시민 입니다.\n\n");
                                                                                                          }
                                                                                          

                                                                                          mafia = player[0];
                                                                                              police=player[1];
                                                                                                  doctor=player[2];
                                                                                                      
                                                                                                      
                                                                                                      
                                                                                                      printf("=======================================================\n");
                                                                                                          printf("지목이 완료되었습니다. 경찰은 일어나서 스캔할 사람을 선택하십시오.(계속 진행하시려면 1키를 누르세요)");
                                                                                                              n=0;
                                                                                                                  while(n!=1)
                                                                                                                        {
                                                                                                                                  scanf("%d",&n);
                                                                                                                                      }
                                                                                                                      printf("=======================================================\n\n\n");
                                                                                                                        
                                                                                                                          
                                                                                                                          Police(police);
                                                                                                                              
                                                                                                                              
                                                                                                                              
                                                                                                                              printf("================================================================================\n");
                                                                                                                                  printf("지목이 완료되었습니다. 마피아는 일어나서 죽일 사람을 선택하십시오.(계속 진행하시려면 1키를 누르세요)");
                                                                                                                                      n=0;
                                                                                                                                          while(n!=1)
                                                                                                                                                {
                                                                                                                                                          scanf("%d",&n);
                                                                                                                                                              }

                                                                                                                                              printf("================================================================================\n\n\n");
                                                                                                                                                      
                                                                                                                                                  
                                                                                                                                                  Mafia(mafia);
                                                                                                                                                      
                                                                                                                                                      
                                                                                                                                                      printf("===============================================================================\n");
                                                                                                                                                          printf("지목이 완료되었습니다. 의사는 일어나서 살릴 사람을 선택하십시오.(계속 진행하시려면 1키를 누르세요)\n");
                                                                                                                                                              printf("===============================================================================\n\n");
                                                                                                                                                                  n=0;
                                                                                                                                                                      while(n!=1)
                                                                                                                                                                            {
                                                                                                                                                                                      scanf("%d",&n);
                                                                                                                                                                                          }
                                                                                                                                                                          
                                                                                                                                                                          Doctor(doctor);
                                                                                                                                                                              
                                                                                                                                                                              printf("낮이 되었습니다. 죽일 사람을 투표합니다:");
                                                                                                                                                                                  for(i=1;i<8;i++)
                                                                                                                                                                                         {
                                                                                                                                                                                                   while(vote[i]==i)
                                                                                                                                                                                                             {
                                                                                                                                                                                                                           
                                                                                                                                                                                                                       vote[i]=rand()%8;
                                                                                                                                                                                                                            
                                                                                                                                                                                                                               }
                                                                                                                                                                                                        }
                                                                                                                                                                                      scanf("%d",&vote[0]);
                                                                                                                                                                                          
                                                                                                                                                                                              
                                                                                                                                                                                          if((police!=0)&&(Police(police)==mafia))
                                                                                                                                                                                                {
                                                                                                                                                                                                          vote[police]=mafia;
                                                                                                                                                                                                              }
                                                                                                                                                                                              
                                                                                                                                                                                              
                                                                                                                                                                                              
                                                                                                                                                                                              printf("(계속 진행하시려면 1키를 누르세요)\n");
                                                                                                                                                                                                  n=0;
                                                                                                                                                                                                      while(n!=1)
                                                                                                                                                                                                            {
                                                                                                                                                                                                                      scanf("%d",&n);
                                                                                                                                                                                                                          }
                                                                                                                                                                                                          
                                                                                                                                                                                                          printf("용의자로 지목된 플레이어는 %d 번 플레이어입니다.\n",mafia);
                                                                                                                                                                                                              printf("찬성/반대 투표를 진행하겠습니다:(찬성:0, 반대:1)");
                                                                                                                                                                                                                  for(i=1;i<8;i++)
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                  n=0;
                                                                                                                                                                                                                                          judge[i]=rand()%2;
                                                                                                                                                                                                                                                  if(judge[i]==0)
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                          n++;
                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      
                                                                                                                                                                                                                      while(judge[0]!=0&&judge[0]!=1)
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                   scanf("%d",&judge[0]);
                                                                                                                                                                                                                                        if(judge[i]==0)
                                                                                                                                                                                                                                               {
                                                                                                                                                                                                                                                         n++;
                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                          
                                                                                                                                                                                                                          if(n>=4)
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                          for(i=0;i<8;i++)
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                  if(player[i]==mafia)
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                                  player[i]=9999;
                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                              
                                                                                                                                                                                                                              printf("계속 하시려면 1키를 누르십시오.");
                                                                                                                                                                                                                                  n=0;
                                                                                                                                                                                                                                      while(n!=1)
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                      scanf("%d",&n);
                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                          for(i=0;i<8;i++)
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                          printf("%d",player[i]);
                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                              printf("\n");
                                                                                                                                                                                                                                                  
}
