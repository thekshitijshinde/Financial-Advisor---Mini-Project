#include<stdio.h>
#include<math.h>

//Compiler version gcc  6.3.0
//fixed deposit 
int fd(int x,int y);
int fd(int x,int y)
{
  int i;
  int inve,per;
  float rate,fds,interest;
  for(i=0;i<=50;i++)
      { printf("_"); }
  
  FILE *fp=fopen("fd.txt","r");
  char ch;
  ch=getc(fp);
  while(ch!=EOF)
  {
    printf("%c",ch);
    ch=getc(fp);
  }
  fclose(fp);
  
  printf("\n\nCalculation For your Fixed Deposits :");
  inve=x;
  per=y;
  rate=5.55;
  fds=inve+(inve*rate*per/100);
  interest=(inve*rate*per/100);
  printf("\n\t\t\tTotal Investment\t\t\t\tTotal Interest ");
  printf("\n\t\t\t  ₹%d\t\t\t\t              ₹%f",inve,interest);
  printf("\n\t\t\t                 Maturity Value ");
  printf("\n\t\t\t                  ₹%f\n",fds);
 printf("\n");
  for(i=0;i<=143;i++)
      { printf("_"); }
}
//scss
int scss(int x);
int scss(int x)
{
  int invest,i;
  float qint,tqint,rate;
  for(i=0;i<=143;i++)
      { printf("_"); }
  
  FILE *fp=fopen("scss.txt","r");
  char ch;
  ch=getc(fp);
  while(ch!=EOF)
  {
    printf("%c",ch);
    ch=getc(fp);
  }
  fclose(fp);
  
  invest=x;
  printf("\nCalculations are :- ");
  rate=7.4;
  qint=(invest*rate*4/100);
  tqint=invest+qint;
  printf("\n\t\t\tTotal Investment.        Quarterly Amount ");
  printf("\n\t\t\t     ₹%d.                 ₹%f ",invest,qint);
  printf("\n\t\t\t            Total Quarterly Amount ");
  printf("\n\t\t\t                     ₹%f\n",tqint);
 printf("\n");
  for(i=0;i<=92;i++)
      { printf("_"); }
      
}
//PMVVY 
int pmvvy(int k);
int pmvvy(int k) 
{
  int period,invest,rats,i;
  float finalv,interest;
  for(i=0;i<=50;i++)
      { printf("_"); }
  FILE *fp=fopen("pmvvy.txt","r");
  char ch;
  ch=getc(fp);
  while(ch!=EOF)
  {
    printf("%c",ch);
    ch=getc(fp);
  }
  fclose(fp);
  printf("\n");
  for(i=0;i<=92;i++)
      { printf(" _"); }
  invest=k;
  
  printf("\nEnter Period (yrs) :");
  scanf("%d",&period);//as knowledge he will get from specific plans 
  rats=8;//avg PMVVY returns 
    finalv=invest+(invest*rats*period/100);
    interest=(invest*rats*period/100);
    printf("\n\t\t\tTotal Investment\t\t\t\tTotal Interest ");
    printf("\n\t\t\t   ₹%d\t\t\t\t              ₹%f",invest,interest);
    printf("\n\t\t\t                 Maturity Value ");
    printf("\n\t\t\t                       ₹%f\n",finalv);
  for(i=0;i<=143;i++)
      { printf("_"); }
}
//Real_Estate
int realestate();
int realestate()
{
  int i,invt,per;
  float tret,rent;
  
  for(i=0;i<=50;i++)
      { printf("_"); }
  printf("\nEnter your Investment :");
  scanf("%d",&invt);
  printf("\nEnter your period ;");
  scanf("%d",&per);
      
  FILE *fp=fopen("reale.txt","r");
  char ch;
  ch=getc(fp);
  while(ch!=EOF)
  {
    printf("%c",ch);
    ch=getc(fp);
  }
  fclose(fp);
  
  printf("\nCalculation of Real Estate : ");

  //rate=2%
  rent=invt*(0.02);
  printf("\nRent (2): ₹%f ",rent);

  //rate=7.5%
   tret=invt*((pow((1+0.075),per))-1);
  printf("\nTotal Return (7.5) : ₹%f ",tret);
  printf("\n");
  for(i=0;i<=92;i++)
      { printf("_"); }
}
//ULIP
int ulip();
int ulip()
{
  int i;
  for(i=0;i<=50;i++)
      { printf("_"); }
  FILE *fp=fopen("ulip.txt","r");
  char ch;
  ch=getc(fp);
  while(ch!=EOF)
  {
    printf("%c",ch);
    ch=getc(fp);
  }
  fclose(fp);
  printf("\n");
  for(i=0;i<=143;i++)
      { printf("_"); }
}
//POTD
int potd(int x ,int y);
int potd(int x ,int y)
{
  int i,invt,per,g;
  float mat,rate;
  invt=x;
  per=y;
  for(i=0;i<=50;i++)
      { printf("_"); }
  printf("\n\n");
  FILE *fp=fopen("potd.txt","r");
  char ch;
  ch=getc(fp);
  while(ch!=EOF)
  {
    printf("%c",ch);
    ch=getc(fp);
  }
  fclose(fp);
  printf("\nSelct you plan of investment -");
  printf("\nCalculations of POTD are :-"
         "\n1. 1 year{5.50}"
         "\n2. 2 years{5.50}"
         "\n3. 3 years{5.50}"
         "\n4. 5 years{6.7}");
  printf("\nEnter Plan No. :(1/2/3/4) ");
  scanf("%d",&g);
  if(g==1)
  {
    rate=5.50;
    mat=invt*(pow((1+(rate/100)),per));
    printf("\nTotal Investment               Maturity Amount      ");
    printf("\n   ₹%d                                ₹%f",invt,mat);
  }
  else if(g==2)
       {
         rate=5.50;
         mat=invt*(pow((1+rate/100),per));
         printf("\nTotal Investment               Maturity Amount      ");
         printf("\n   ₹%d                                ₹%f",invt,mat);

       }
       else if(g==3)
            {
              rate=7.5;
              mat=invt*(pow((1+rate/100),per));
              printf("\nTotal Investment               Maturity Amount      ");
              printf("\n   ₹%d                                ₹%f",invt,mat);
            }
            else if(g==4)
                 {
                   rate=6.7;
                   mat=invt*(pow((1+(rate/100)),per));
                   printf("\nTotal Investment               Maturity Amount      ");
                   printf("\n   ₹%d                                ₹%f",invt,mat);
                 }
  
  printf("\n");
  for(i=0;i<=92;i++)
     { printf("_"); }
}
//Mutual Funds 
int mf();


int mf()
{
  int i,invem,rates,peri,j;
  float fvalue,interest;
  for(i=0;i<=143;i++)
      { printf("_"); }
  
   FILE *fp=fopen("mf.txt","r");
  char ch;
  ch=getc(fp);
  while(ch!=EOF)
  {
    printf("%c",ch);
    ch=getc(fp);
  }
  fclose(fp);
  printf("\nEnter your type of plan "
         "\n1.Large cap equity{1}"
         "\n2.Mid cap equity{2}"
         "\n3.long term debt{3}");
  scanf("%d",&j);
  if(j==1)
  {
    printf("\nEnter Investment :");
    scanf("%d",&invem);
    printf("\nEnter Period (yrs) :");
    scanf("%d",&peri);
    rates=16;//avg large cap returns 
    fvalue=invem+(invem*rates*peri/100);
    interest=(invem*rates*peri/100);
    printf("\n\t\t\tTotal Investment\t\t\t\tTotal Interest ");
    printf("\n\t\t\t   ₹%d\t\t\t\t              ₹%f",invem,interest);
    printf("\n\t\t\t                 Maturity Value ");
    printf("\n\t\t\t                       ₹%f\n",fvalue);
  
  } 
  else if(j==2)
       {
         printf("\nEnter Investment :");
         scanf("%d",&invem);
         printf("\nEnter Period (yrs) :");
         scanf("%d",&peri);
         rates=15;//avg mid cap returns 
         fvalue=invem+(invem*rates*peri/100);
         interest=(invem*rates*peri/100);
         printf("\n\t\t\tTotal Investment\t\t\t\tTotal Interest ");
         printf("\n\t\t\t    ₹%d\t\t\t\t             ₹%f",invem,interest);
         printf("\n\t\t\t                 Maturity Value ");
         printf("\n\t\t\t                       ₹%f\n",fvalue);
  
  
       }
       else if(j==3)
            {
              printf("\nEnter Investment :");
              scanf("%d",&invem);
              printf("\nEnter Period (yrs) :");
              scanf("%d",&peri);
              rates=8;//avg long term debt returns 
              fvalue=invem+(invem*rates*peri/100);
              interest=(invem*rates*peri/100);
              printf("\n\t\t\tTotal Investment\t\t\t\tTotal Interest ");
              printf("\n\t\t\t   ₹%d\t\t\t\t              ₹%f",invem,interest);
              printf("\n\t\t\t                 Maturity Value ");
              printf("\n\t\t\t                       ₹%f\n",fvalue);
  
            }
  printf("\nProceed Next .");
  printf("\n");
  for(i=0;i<=143;i++)
      { printf("_"); }
  
 }
//IPO
int ipo();
int ipo()
{
  int i,peri,invem,rates;
  float fvalue,interest;
  for(i=0;i<=60;i++)
      { printf("_"); }
      
  FILE *fp=fopen("ipo.txt","r");
  char ch;
  ch=getc(fp);
  while(ch!=EOF)
  {
    printf("%c",ch);
    ch=getc(fp);
  }
  fclose(fp);
  printf("\n");
  printf("\nEnter Investment :");
  scanf("%d",&invem);
  printf("\nEnter Period (yrs) :");
  scanf("%d",&peri);
  rates=25;//avg ipo returns 
    fvalue=invem+(invem*rates*peri/100);
    interest=(invem*rates*peri/100);
    printf("\n\t\t\tTotal Investment\t\t\t\tTotal Interest ");
    printf("\n\t\t\t   ₹%d\t\t\t\t              ₹%f",invem,interest);
    printf("\n\t\t\t                 Maturity Value ");
    printf("\n\t\t\t                       ₹%f\n",fvalue);
  
  for(i=0;i<=143;i++)
      { printf("_"); }

}

//Share Market(Intraday/Swing)
int smintra();
int smintra()
{
  int i,share,shares;
  float priceb,pricea,diff,diffs,pricebs,priceas,swing,intra;
  for(i=0;i<=143;i++)
      { printf("_"); }
      
  FILE *fp=fopen("smintra.txt","r");
  char ch;
  ch=getc(fp);
  while(ch!=EOF)
  {
    printf("%c",ch);
    ch=getc(fp);
  }
  fclose(fp);
 
 
  printf("\nHave a Calculation : \n");
  printf("\nEnter No.of Shares : ");
  scanf("%d",&share);
  printf("\nEnter Share price Before trade : ");
  scanf("%f",&priceb);
  printf("\nEnter Share price After trade : ");
  scanf("%f",&pricea);
  diff=pricea-priceb;
  intra=share*diff;
  printf("\nYour Profit : ₹%f \n",intra);
  printf("\nSame theory & calculation is with Swing trading , \nthe only main difference is of amount you invest & the duration for it is invested . \n");
  for(i=0;i<=70;i++)
      { printf(" _"); }
  printf("\n\nEnter No.of Shares : ");
  scanf("%d",&shares);
  printf("\nEnter Share price Before trade : ");
  scanf("%f",&pricebs);
  printf("\nEnter Share price After trade : ");
  scanf("%f",&priceas);
  diffs=priceas-pricebs;
  swing=shares*diffs;
  printf("\nYour Profit in Swing trade is ₹%f .\n ",swing);
  printf("\n");
  for(i=0;i<=92;i++)
      { printf("_"); }
  }
// Smdel
int smdel();
int smdel()
{
  int i;
  for(i=0;i<=143;i++)
      { printf("_"); }
      
  FILE *fp=fopen("smdel.txt","r");
  char ch;
  ch=getc(fp);
  while(ch!=EOF)
  {
    printf("%c",ch);
    ch=getc(fp);
  }
  fclose(fp);
  printf("\n");
  for(i=0;i<=92;i++)
      { printf("_"); }
}
int sm();
int sm()
{
  int hh,inve,per;
  
  while(1)
  {printf("\n\nSome plans depends on your own research.");
  printf("\nThese are investing in Share Market & Real Estate .");
  printf("\nFor Share Market Enter {1}"
         "\nFor Real Estate Enter {2}"
        "\nFor IPO(Initial public offering) {3}"
        "\nFor exit{4}");
  scanf("%d",&hh);
    switch(hh)
    {
      case 1:
        smintra();
        smdel();
        break;
      case 2:
        realestate();
        break;
      case 3:
        ipo();
        break;
      case 4:
        return 0;
      default:
        renter();
    }
  }
}

int maindis();
int maindis()
{
  int  i,incm,sav,rewd,ainst,x;
  int rr,aa,bb,aaa,bbb;
  
  
  printf("\n\t\t\t\t\t\t\tWELCOME TO \n");
  
  printf("\n\t\t\t\t\t\tFinancial Advisor Application\n");
  printf("\nThere are two ways to invest period wise Monthly & Lumpsum .");
  printf("\nIn Monthly investment you have invest or deposit money in the selected plan every month .");
  printf("\nIn Lumpsum investment you have to invest all your money at starting & only one time and the interest money will be added in the same amount .");
  printf("\n\nEnter ypur Investment Category :"
         "\n1.Monthly {1}."
         "\n2.Lum-Sum {2}.");
  scanf("%d",&x);


  if(x==1)
  {
    printf("\n\nYou are in Monthly Investment Plan .");
    monthly();
    printf("\nDid you want to know about Lum-Sum plans press '11'");
    scanf("%d",&aaa);
    if(aaa==11)
   {
         ls();      
   }
   else
   {
         printf("\nHave a safe & growing financial state .");
   }
  }
  else
  {
    printf("\n\nYou are in Lum-Sum Investment Plan. ");
    ls();
    printf("\nDid you want to know about Monthly plans press '11'");
    scanf("%d",&bbb);
    if(bbb==11)
   {
         monthly();      
   }
   else
   {
         printf("\nHave a safe & growing financial state .");
   }
  }
}
int renter();
int renter()
{
  printf("\n\nEntet valid choice .\n");
}
int endis();
int endis()
{
  int i;
  printf("\n\t\t\t\t\t      Thank You \n");
  printf("\n\t\t\t\t\tFor using our Application .");
  printf("\n");
}
//monthly plans
int monthly();
int monthly()
{
  int rr,aa,i,inve,per,risk;
  //Monthly Term Investment plan
  printf("\n\nEnter your Investment Amount (₹):");
  scanf("%d",&inve);
  printf("\nEnter your Investment Period (yrs) :");
  scanf("%d",&per);
  printf("\nEnter your Risk (percentage) :");
  scanf("%d",&risk);
         
//Monthly Term 
                   for(i=0;i<=143;i++)
                   { printf("_"); }
                   printf("\n\t\t\t\tYour Investment Plan comes in Monthly Term section .\n");
                   for(i=0;i<=92;i++)
                   { printf("_"); }
                   fd(inve,per);
                   printf("\n");
                   for(i=0;i<=92;i++)
                      { printf("_");}
                   printf("\n");
              
              
              while(1)
              {
                printf("\n Suggestions : ");
              printf("\n1.Fixed Deposits"
                     "\n2.Post Office Monrhly Income Scheme "
                     "\n3.Senior Citizen Saving Scheme "
                     "\n4.Exit");
              scanf("%d",&aa);
                switch(aa)
                {
                  case 1:
                    fd(inve,per);
                    break;
                  case 2:
                    potd(inve,per);
                    break;
                  case 3:
                    scss(inve);
                    break;
                  case 4:
                    return 0;
                  default:
                    renter();
                  }
              }
}
//lumpsum plans
int ls();
int ls()
{
  int rr,i,bb,inve,per,risk;
  //Lum-Sum Term Investment plan 
  printf("\n\nEnter your Investment Amount (₹):");
  scanf("%d",&inve);
  printf("\nEnter your Investment Period (yrs) :");
  scanf("%d",&per);
  printf("\nEnter your Risk (percentage) :");
  scanf("%d",&risk);
  //L<=10.  M<=20.  H<=30.
  if(risk<=10)
  {
    rr=1;//Low Risk 
  }
  else if(risk<=25)
       {
        rr=2;//Medium Risk 
       }
       else if(risk<=100)
            {
              rr=3;//High Risk 
            }
   if(rr==1)
    {//Lumpsum Term Low Risk 
      for(i=0;i<=143;i++)
      { printf("_"); }
      printf("\n\t\t\t\tYour Investment Plan comes in Lump-Sum Term Low Risk section .\n");
      for(i=0;i<=92;i++)
      { printf("_"); }
        pmvvy(inve);
      for(i=0;i<=50;i++)
      { printf("_");}
    }
    else if (rr==2)
         {//Lumpsum Term Medium Risk 
             for(i=0;i<=143;i++)
             { printf("_"); }
             printf("\n\t\t\t\tYour Investment Plan comes in Lump-Sum Term Medium Risk section .\n");
             for(i=0;i<=92;i++)
             {  printf("_"); }
                mf();
             for(i=0;i<=92;i++)
             {  printf("_"); }  
         }
         else if(rr==3)
              {//Lumpsum Term High Risk 
                   for(i=0;i<=92;i++)
                   { printf(" _"); }
                   printf("\n\t\t\t\tYour Investment Plan comes in Lump-Sum Term High Risk section .\n");
                   for(i=0;i<=92;i++)
                   { printf(" _"); }
                     ulip();
                   printf("\n");
                   for(i=0;i<=92;i++)
                      { printf("_");}

              }
              
              while(1)
              {
                printf("\n Suggestions : ");
              printf("\n1.ULIP(8-24)"
                     "\n2.PMVVY(8)"
                     "\n3.MUTUAL FUNDS"
                     "\n4.Exit");
              scanf("%d",&bb);
                switch(bb)
                {
                  case 1:
                    ulip();
                    break;
                  case 2:
                    pmvvy(inve);
                    break;
                  case 3:
                    mf();
                    break;
                  case 4:
                    return 0;
                  default:
                    renter();
                 }
              }
}
int main()
{
  int a;
  while(1)
 {
  printf("\n1.Enter program .\n2.Exit.");
  printf("\nEnter your choice (1/2):");
  scanf("%d",&a);
  switch(a)
        {
          case 1:
             maindis();    
             sm();
             break;
         case 2: 
             endis();
             return 0;

         default:
             renter();
             break;
        }
   }
   return 0;
}