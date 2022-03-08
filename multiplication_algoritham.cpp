
#include<iostream>
using namespace std;
                                                                              //zeeshan zafar      p200569     (A)

int concat(int a, int b)
{
 
    // Convert both the integers to string
    string s1 = to_string(a);
    string s2 = to_string(b);
 
    // Concatenate both strings
    string s = s1 + s2;
                                                                  // this is a concatinate function that will actually concatinate two integers
    // Convert the concatenated string
    // to integer
    int c = stoi(s);
 
    // return the formed integer
    return c;
}

int main()
{
    // std::stack<int> sd;
    int num1,num2,a,b,c,d;
    int step1,step2,step3,step4;
    

     int len1=0,len2=0;
    cout<<"\n\nEnter your First number  ";
    cin>>num1;
    cout<<"\n\nEnter your Second number  ";
    cin>>num2;

    int pri1=num1;
    int pri2=num2;

    while(pri1>0)
    {
      pri1=pri1/10;
                                  //finding the length of first integer
      len1++;
    }

    while(pri2>0)
    {
      pri2=pri2/10;
                               //finding the length of second integer
      len2++;
    }

    if(len1%2 != 0)
    {
        len1++;
    }
    if(len2%2 != 0)                            // if anyone of them are odd in number then make them even for further simplicity
    {
        len2++;
    }
     

     int mode_V=1;                                       // mode integer that will store the actual mode that we will find in further steps
     int p_l1=len1,p_l2=len2;                        



     if(p_l1>=p_l2)
     {
       for(int i=0;i<=p_l1;i++)
       {
          mode_V = concat(mode_V, 0);
          p_l1=p_l1-2;   
       }
     }

                                                          // these two will help us to find the mode to divide number into equal two parts

     if(p_l2>p_l1)
     {
       for(int i=0;i<=p_l2;i++)
       {
          mode_V = concat(mode_V, 0);
          p_l2=p_l2 - 2;   
       }
     }


     a=num1%mode_V;  //first part of number
     b=num1/mode_V;  //last  part of number

     c=num2%mode_V;  //first part of number
     d=num2/mode_V;  //last part of number
   

     step1=(b*d);        
     step2=(b*c);                               //four steps to multiply four numbers in sequence that we will find in previous steps
     step3=(a*d);
     step4=a*c;


     if(len1>=len2)
     {

     
     for(int i=0;i<len1;i++)
     {
         if(step1!=0)
         {
         step1=concat(step1, 0);
         }
         else
         {
           break;
         }
     }

     if(len1>=4)
     {
       len1=len1/2;
     }
     else
     {
       len1--;
     }

     for(int i=0;i<len1;i++)
     {
        if(step2!=0)
        {
          step2=concat(step2,0);
        }

        if(step3!=0)
        {
          step3=concat(step3,0);
        }   
         
     }
     
     
     }

                           // using these two if's we concatinate some zeros with numbers with some order

      if(len2>len1)
     {

     
     for(int i=0;i<len2;i++)
     {
                     
         if(step1!=0)
         {
            step1=concat(step1, 0);
         }
         else
         {
           break;
         }
     }
     
     if(len2>=4)
     {
       len2=len2/2;
     }
     else
     {
       len2--;
     }

     for(int i=0;i<len2;i++)
     {
       if(step2!=0)
       {
          step2=concat(step2,0);
       }
       if(step3!=0)
       {
        step3=concat(step3,0);
       }
         
     }
     
     
     }
    
     cout<<"\n\n-------By Multiplying both of the integers--------\n ";
    
    cout<<"\n\nResult = "<<step1+step2+step3+step4;                   //finally we will find result by adding all the numbers
    cout<<endl;

   
    
}