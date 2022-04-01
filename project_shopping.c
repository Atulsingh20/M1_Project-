#include<stdio.h>
#include<string.h>
 main()
{
 static int totalCost;
 int i,j,choice,c=1,a[9],cost[9];
 for(i=0;i<9;i++)
 a[i]=0;

 char str[100];
 char items[9][100]={" VESACE",
 "Beardo Godfather",
 "Whisky Smoke",
 "Lee Cooper",
 "Highlander",
 "Roadster",
 "Jockey",
 "wildcraft",
 "DaMensch",
 "joardan",
 "Nike air max",
 "Airforce",
 "LV T-shirt",
 "nike Tishirt",
 "balenciaga"
 };
 printf("Please Enter Your Name\n");
 gets(str);
 printf("Hello Mr/Mrs. %s, Welcome to Brand Store .\n",str);
 do{
  //C is 1 by default
  if(c==1){
  printf("Enter\n1 - cologne\n2 - Shoes\n3 - Jeans\n4 - underwear\n5 - clothing\nAny other number to exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    int cologneChoice;
    printf("Enter\n1 - VESACE - Rs.15000\n2 - Beardo Godfather- Rs.1870\n3 - Whisky Smoke - Rs.23050\nAny other number to exit\n");
    scanf("%d",&cologneChoice);
    cost[0]=15000;
    cost[1]=18070;
    cost[2]=23050;
    switch(cologneChoice)
    {
     case 1:
     {
      int num;
      printf("You chose VESACE with Rs.15000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[0]++;
       totalCost+=15000;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose Beardo Godfather with Rs.18070.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[1]++;
       totalCost+=18070;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose Whisky Smoke with Rs.2350.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[2]++;
       totalCost+=23050;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from cologne \n");
      break;
     }
    }
    break;
   }
   case 2:
   {
    int shoesChoice;
    printf("Enter\n1 - joardan- Rs.12550\n2 - Nike air max - Rs.50000\n3 - Airforce nike - Rs.23800\nAny other number to exit\n");
    scanf("%d",&shoesChoice);
    cost[3]=12550;
    cost[4]=5000;
    cost[5]=23800;
    switch(shoesChoice)
    {
     case 1:
     {
      int num;
      printf("You chose joardan Shoes for Rs.12550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[3]++;
       totalCost+=12550;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose Nike air max Shoes for Rs.50000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[4]++;
       totalCost+=50000;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose Airforce Shoes for Rs.23800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[5]++;
       totalCost+=28300;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from Shoes Category\n");
      break;
     }
    }
    break;
   }
   case 3:
   {
    int JeansChoice;
    printf("Enter\n1 - Lee Cooper- Rs.3000\n2 - Highlander - Rs.5600\n3 - Roadster- Rs.2400\nAny other number to exit\n");
    scanf("%d",&JeansChoice);
    cost[3]=3000;
    cost[4]=5600;
    cost[5]=2400;
    switch(JeansChoice)
    {
     case 1:
     {
      int num;
      printf("You chose Lee Cooper for Rs.3000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[3]++;
       totalCost+=3000;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose Highlanders for Rs.5600.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[4]++;
       totalCost+=5600;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose Roadster for Rs.2400.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[5]++;
       totalCost+=2400;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from Jeans Category\n");
      break;
     }
    }
    break;
   }

   case 4:
   {
    int UnderwearChoice;
    printf("Enter\n1 - Jockey - Rs.350\n2 - wildcraft - Rs.650\n3 - DaMensch- Rs.450\nAny other number to exit\n");
    scanf("%d",&UnderwearChoice);
    cost[3]=350;
    cost[4]=650;
    cost[5]=450;
    switch(UnderwearChoice)
    {
     case 1:
     {
      int num;
      printf("You chose Jockey for Rs.350.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[3]++;
       totalCost+=350;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose wildcraft for Rs.650.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[4]++;
       totalCost+=650;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose DaMensch for Rs.450.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[5]++;
       totalCost+=450;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from Underwear Category\n");
      break;
     }
    }
    break;
   }

   case 5:
   {
    int clothing;
    printf("Enter\n1 - LV T-shirt - Rs.27000\n2 - nike T-shirt- Rs.9999\n3 - balenciaga- Rs.13800\nAny other number to exit\n");
    scanf("%d",&clothing);
    cost[6]=27000;
    cost[7]=9999;
    cost[8]=13800;
    switch(clothing)
    {
     case 1:
     {
      int num;
      printf("You chose to buy LV T-shirt for Rs.27000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[6]++;
       totalCost+=27000;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose to buy nike T-shirt for Rs.9999.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[7]++;
       totalCost+=9999;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose to buy balenciaga  for Rs.13800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[8]++;
       totalCost+=13800;
      }
      printf("Your Cost in Cart is %d\n",totalCost);
      break;
     }
     default:{
      printf("Exit from clothing \n");
      break;
     }
    }
    break;
   }
   default:
   {
    printf("Enter Valid Categories Choice\n");
    break;
   }
  }
  printf("%s's cart\n",str);
  printf("Id\tItems\t\t\tQuantity\t\t\tCost\n");
  for(i=0;i<9;i++)
  {
   if(a[i]!=0)
   {
    printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
   }
  }
  printf("Total Cost\t\t\t\t\t%d\n",totalCost);
  printf(" wish to buy more amazing goods Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
  scanf("%d",&c);
 }
  if(c==2)
  {
   int id;
   printf("To delete item Enter id\n");
   scanf("%d",&id);
   if(id<9&&id>0){
   totalCost=totalCost-(cost[id]*a[id]);
   a[id]=0;
   }
   else{
    printf("Enter Valid id\n");
   }
       printf("Revised Items \n");
       printf("Id\tItems\t\t\tQuantity\t\tCost\n");
            for(i=0;i<9;i++)
      {
     if(a[i]!=0)
      {
    printf("%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
      }
     }
        printf("Total Cost\t\t\t\t\t%d\n",totalCost);
        printf(" wish to buy more goods Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
     scanf("%d",&c);
  }

 }while(c==1 || c==2);
 printf("Your Total Purchase Bill =%d\n",totalCost);
 printf("Thanks %s for Shopping and Visit again to Brand Store .\n",str);

}
