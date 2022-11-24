#include<iostream>
#include<math.h>

using namespace std;

class SET
{
   public :
   
     
     void D_M_function();
     
     void D_M_set();
     
     void D_M_relation();
};

void SET :: D_M_function()
{
    int N , S , i , j ,  ch , p;
    char Q[10];
    char W[10];
	cout<<" Enter the size of set Q : ";
	cin>>N;
	cout<<" Enter the size of set W : ";
	cin>>S;
	
	
	
	for(i=0;i<N;i++)
	{
	
	cout<<" Enter the elements of set Q one by one  : ";
	cin>>Q[i];
    }
    
    for(i=0;i<S;i++)
	{
	
	cout<<" Enter the elements of set W one by one : ";
	cin>>W[i];
    }
    
    cout<<"\n SET Q : ";
    cout<<" { ";
    for(i=0;i<N;i++)
	{
	cout<<Q[i]<<" , ";
    }
    cout<<" }\n";
    
    cout<<"\n SET W : ";
    cout<<" { ";
    for(i=0;i<S;i++)
	{
	cout<<W[i]<<" , ";
    }
    cout<<" }\n";
    
    
    cout<<" \t\tCHOICES \n 1 = Q TO W ! \n 2 = W TO Q ! \n";
    cout<<" choose the choice  ( either 1 OR 2)whether you want function from Q to W  or  W to Q : ";
    cin>>ch;
     cout<<"how many pairs you want add in relation :";
	cin>>p;
    char A[p],B[p],C[p],D[p];
    switch (ch)
    {
    	case 1:
    	cout<<" BELOW IS THE ALL POSIBILITIES OF THE RELATION FROM Q TO W \n";
    	cout<<" { ";
	    for(i=0;i<N;i++)
	    {
		for(j=0;j<S;j++)
		{
			cout<<" ("<<Q[i]<<","<<W[j]<<") "<<",";
		}
      	}
     	cout<<" } \n";
	    cout<<" NOTE = USER SHOULD TAKE ABOVE REFERENCE & ENTER THE ELEMENTS OF PAIR \n";
		cout<< "FROM THE ABOVE !\n";
	   
    	for(i=0;i<p;i++){
	    
    	cout<<"ENTER 1 ST ELEMENT OF PAIR "<<i+1<<" : ";
    	cin>>A[i];
    	cout<<"ENTER 2nd ELEMENT OF PAIR "<<i+1<<" : ";
    	cin>>B[i];
    		}
    	cout<<"\n DISPAYING THE PAIRS YOU HAVE ENTER IN RELATION : ";	
    	cout<<"\n{ ";
    	for(i=0;i<p;i++){
	    cout<<" (";
    	cout<<A[i];
    	cout<<",";
    	cout<<B[i];
    	cout<<") ,";
    		}
    	cout<<" }\n";
    	break;
		
		
	   	case 2:
		cout<<" BELOW IS THE ALL POSIBILITIES OF THE RELATION FROM Q TO W ";
    	cout<<" { ";
	for(i=0;i<S;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<" ("<<W[i]<<","<<Q[j]<<") "<<",";
		}
	}
	cout<<" } \n";
	    cout<<" NOTE = USER SHOULD TAKE ABOVE REFERENCE & ENTER THE ELEMENTS OF PAIR \n";
		cout<< "FROM THE ABOVE !\n";
	   
    	for(i=0;i<p;i++){
	
    	cout<<"ENTER 1 ST ELEMENT OF PAIR "<<i+1<<" : ";
    	cin>>C[i];
    	cout<<"ENTER 2nd ELEMENT OF PAIR "<<i+1<<" : ";
    	cin>>D[i];
    		}
    		
    	cout<<"\n DISPAYING THE PAIRS YOU HAVE ENTER IN RELATION : ";	
    	cout<<"\n{ ";
    	for(i=0;i<p;i++){
	    cout<<" (";
    	cout<<C[i];
    	cout<<",";
    	cout<<D[i];
    	cout<<") ,";
    		}
    	cout<<" }\n";
    	break;
			
		default:
			cout<<" EXIT !";
			break;
			
    	
    	
	}
	int count1=0,count2=0,var1=0,var2=0;
	int sum1=0,sum2=0, sum3=0,VAR1=0;
	int sum4=0;
	
	
	
	
	
	
	
	
	
	if(ch==1)
	{
		
		for(i=0;i<S;i++)
		{
			for(j=0;j<p;j++)
			{
				if(W[i]==B[j])
				{
					count1+=1;
					//cout<<"1st";
				}
			}
		}int k=0;
		for(i=0;i<p;i++)
		{   
		    k+=1;
		    
			for(k=k;k<p;k++)
			{   
				if(A[i]==A[k])
				{  
				    
					count2+=1;
					
					
				
				}
			}
		}
		int l=0;
		for(i=0;i<p;i++)
		{   
		    l+=1;
			for(l=l;l<p;l++)
			{   
				if(B[i]==B[l])
				{
					var1+=1;
					VAR1+=1;
				
				
				}
			}
		}
		for(i=0;i<S;i++)
		{
			
		
		 for(j=0;j<p;j++)
					{
						if(W[i]==B[j])
						{
							sum3+=1;
							cout<<" ha";
							i+=1;
						}
					}
	
		}
		}
		
		
		
		
		
		if(ch==2)
		{
			
			for(i=0;i<N;i++)
		{
			for(j=0;j<p;j++)
			{
				if(Q[i]==D[j])
				{
					count1+=1;
					
				}
			}
		}
		int k=0;
		for(i=0;i<p;i++)
		{   
		    k+=1;
			for(k=k;k<p;k++)
			{   
				if(C[i]==C[k])
				{
					count2+=1;
			}
			}
		}
		int m=0;
		for(i=0;i<p;i++)
		{   
		    m+=1;
			for(m=m;m<p;m++)
			{   
				if(D[i]==D[m])
				{
					var2+=1;
					
				
				}
			}
		}
		
		for(i=0;i<N;i++)
		{
			
		
		 for(j=0;j<p;j++)
					{
						if(Q[i]==D[j])
						{
							sum4+=1;
							cout<<"1 ha";
							i+=1;
						}
					}
	
		}
		}
		
		
		if(ch==1)                  //ch1
		{
		
		if(count1>=1 && count2==0 && sizeof(A)==N)
		{   
		    cout<<" f : Q TO W  ";
			cout<<"  IS A FUNCTION \n";
			sum1+=1;
			
			
			
		}
		else
		{
			cout<<" f : Q TO W  ";
			cout<<"  IS NOT A FUNCTION !\n ";
		}
		if(sum1==1){
	
		if(VAR1==0 )
		{   if(sizeof(B)==S)
		{
			cout<<" f : Q TO W  ";
			cout<<" IT IS ONE TO ONE & ONTO FUNCTION : \n";
			cout<<" HENSE IT IS BIJECTIVE \n";
		}
		   else if(sizeof(B)<=S){
		   
		    cout<<" f : Q TO W  ";
			cout<<" IT IS ONE TO ONE FUNCTION : \n";
			}
			else 
			{
				cout<<" f : Q TO W  ";
			    cout<<" IT IS NEITHER ONE TO ONE NOR ONTO FUNCTION : \n";
			}
		}
		else if(sizeof(B)>S && sum3==S)
		
		{   //cout<<sizeof(B);
			cout<<" f :  Q TO W   ";
			cout<<" IT IS ONTO FUNCTION : \n";
		}
		else 
		{ 
		    cout<<" f : Q TO W  ";
		    cout<<" IT IS NEITHER ONE TO ONE NOR ONTO FUNCTION : \n";
			
		}
			}
		//if()
	
		}
		if(ch==2)
		{
			if(count1>=1 && count2==0 && sizeof(C)==S)
		{   
		    cout<<" f : W TO Q  ";
			cout<<"  IS A FUNCTION \n";
			sum2+=1;
			
			
		}
			else
		{
			cout<<" f : W TO Q  ";
			cout<<"  IS NOT A FUNCTION ! \n";
		}
		if(sum2==1){
		
		if(var2==0 )
		{   
		    if(sizeof(D)==N)
		{
			cout<<" f : W TO Q  ";
			cout<<" IT IS ONE TO ONE & ONTO FUNCTION :";
			cout<<" HENSE IT IS BIJECTIVE \n";
		}
		   else if(sizeof(D)<=N){
		   
		    cout<<" f : W TO Q  ";
			cout<<" IT IS ONE TO ONE FUNCTION : \n";
			}
			else 
			{
				cout<<" f : W TO Q  :";
			    cout<<" IT IS NEITHER ONE TO ONE NOR ONTO FUNCTION : \n";
			}
		}
		else {
			//cout<<;
		if( sizeof(D)>N && sum4==N)
		{
			cout<<" f :  W TO Q   ";
			cout<<" IT IS ONTO FUNCTION :";
		}
		else 
		{
			cout<<" f : W TO Q  ";
			cout<<" IT IS NEITHER ONE TO ONE NOR ONTO FUNCTION : \n";
		}}
		
		
	}
	}
	

	
	
		if(ch==1)
		{
			if(count1>=1 && count2==0 && sizeof(A)==N)
		{  
		    cout<<" A FUNCTION : ";
		    cout<<" f : Q TO  W \n";
			
			cout<<" DOMAIN : ";
			
            cout<<"\n { ";
            for(i=0;i<N;i++)
            {
            cout<<Q[i]<<" , ";
            }
              cout<<" }\n";
              
            cout<<" CO DOMAIN : ";
            
            cout<<"\n { ";
            for(i=0;i<S;i++)
         	{
           	cout<<W[i]<<" , ";
             }
            cout<<" }\n";
            
            cout<<" PRE IMAGE :";
            
           	cout<<"\n{ ";
    	    for(i=0;i<p;i++){
	         
    	    cout<<A[i];
    	    cout<<",";
    	     
    	   	}
    	    cout<<" }\n";
    
            
              
			
			
		}
			
		}
			if(ch==2)
		{
			if(count1>=1 && count2==0 && sizeof(C)==S)
		{  
		    cout<<"\n A FUNCTION : ";
		    cout<<" f : W TO  Q \n";
			
			cout<<" DOMAIN : ";
			
            cout<<"\n { ";
            for(i=0;i<S;i++)
            {
            cout<<W[i]<<" , ";
            }
              cout<<" }\n";
              
            cout<<" CO DOMAIN : ";
            
            cout<<"\n { ";
            for(i=0;i<N;i++)
         	{
           	cout<<Q[i]<<" , ";
             }
            cout<<" }\n";
            
            cout<<" PRE IMAGE :";
            
           	cout<<"\n{ ";
    	    for(i=0;i<p;i++){
	         
    	    cout<<C[i];
    	    cout<<",";
    	     
    	   	}
    	    cout<<" }\n";
    
            
              
			
			
		}
		
		}
}

void  SET :: D_M_set()
{
    int i,j,k;
	int n,p;
	
	char A[15],B[14];
	
	cout<<"Enter the size of the set A( total no of elements ):";
	cin>>n;
	cout<<"Enter the size of the set B( total no of elements ):";
	cin>>p;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter the elements of the set A:";
		cin>>A[i];
	}
	
	for(j=0;j<p;j++)
	{
		cout<<"Enter the elements of the set B:";
		cin>>B[j];
	}
	
	
	cout<< "\n SET A :\n";
	cout<<" { ";
	for(i=0;i<n;i++)
	{
		cout<<A[i]<<" , ";
	}
	cout<<" } ";
	
	cout<<"\n SET B:\n";
	cout<<" { ";
	for(j=0;j<p;j++)
	{
		cout<<B[j]<<" , ";
	}
	cout<<" } ";
	
	cout<<"\n CARDANALITY :\n";
	cout<<" cardinality of set A :"<<n;
	cout<<" \n cardinality of power set A :"<<pow(2,n);
	cout<<endl;
	cout<<" cardinality of set B :"<<p;
	cout<<" \n cardinality of power set B :"<<pow(2,p);
	cout<<endl;
	
	int var=0;
	int count=0;
	int sum=0;
	if(n==p)
	{
		
		for(i=0;i<n;i++)
		{
		
			for(j=0;j<p;j++)
			{
			
				 if(A[i]==B[j])
				 {  
				 	var+=1;
				 }
			}
			
        }
	}

	if(n>p)
	{
		for(j=0;j<p;j++)
		{
			for(i=0;i<n;i++)
			{
				 if(B[j]==A[i])
				 {
				 	
				 	count+=1;
				 }
			}
			
		}
	}
	

	if(p>n){
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<p;j++)
			{
				 if(A[i]==B[j])
				 {
				 	sum+=1;
				 }
			}
			
		}
	}

	cout<<"RESULT : \n";
	
	
	if(var==n && var==p)
	
		{
		cout<<" A & B is a subset of each other "<<endl;
	}
	 
	 else
	{
		cout<<"A & B is a not subset of each other !"<<endl;
	}
	
	
	
	

	if(count==p)
	
	{
		cout<<"B is a subset of A"<<endl;
		cout<<"B is also proper subset of A "<<endl;
	}
	else
	{   
	    cout<<"B is not a subset of A"<<endl;
		cout<<"B is  also not proper subset of A "<<endl;
	}
	
	

	

	if(sum==n)
	{
		cout<<"A is a subset of B"<<endl;
		cout<<"A is also proper subset of B "<<endl;
	}
	else
	{
		cout<<"A is not a subset of B"<<endl;
		cout<<"A is also not proper subset of B "<<endl;
	}
	
}

void SET :: D_M_relation()
{
    char Array[100];
	int i, n;
	cout<<"Enter the size of the set(TOTAL NO OF VARIBLES ):";
	cin>>n;
	for(i=0;i<n;i++)
	{
	  cout<<"Enter the set of characters(VARIABLE): ";
	  cin>>Array[i];
	}
	

	int p;
	p<2^n;
	
	
	cout<<"how many pairs you want add in relation :";
	cin>>p;
	char R1[2*p];
	int sum=0;
	int count=0;
	int j, k;
	char A1[p],A2[p];
	for(i=0;i<p;i++)
	{
	  
	  
	  cout<<"Enter the  1st elements of pair of relation: ";
	  cin>>A1[i];
	  //A1[i]=R1[i];
	  cout<<"Enter the 2nd element of pair of relation: ";
	  cin>>A2[i];
	 // A2[i]=R1[i++];
}
 cout<<" RELATION :\n";
	cout<<" { ";
	for(i=0;i<p;i++)
	{
		
		
					cout<<" ("<<A1[i]<<","<<A2[i]<<") "<<",";
		
	}
	cout<<" } \n";
 

	 for(i=0;i<p;i++) 
	{ if(A1[i]==A2[i])                              //condition for reflexive
     {
	 sum +=1;
     }
     
    
    }
  
   
   for(j=0;j<p;j++)
   {
   	  for(k=1;k<p;k++)
   	  {
   	  	 if(A1[j]!=A2[j] && A1[k]!=A2[k]){
			 
   	  	   if(A1[j]==A2[k] && A2[j]==A1[k]){
   	  	   	
					
			 
   	  		count+=1;}
			 }
   	  	 }
	  }
     
    
    cout<<"\n Relation is : \n";
	 
    if(sum==n)
    {cout<<"\t\tREFLEXIVE"<<endl;
	}
    else
    {
    	cout<<"\t\tNOT REFLEXIVE !"<<endl;
	}
	if(count>=1)
	{
		cout<<"\t\tSYMMETRIC"<<endl;
		cout<<"\t\tNOT  ANTY SYMMETRIC !"<<endl;
	}
	else
	{
		
		cout<<"\t\tNOT SYMMETRIC !"<<endl;
		if(sum>=1)
		{
			cout<<"\t\tANTY SYMMETRIC"<<endl;
		}
		else
		{
			cout<<"\t\tNOT  ANTY SYMMETRIC !"<<endl;
		}
	}
	
}

int main()
{  
    int choice ;
    SET obj;
    cout<<" \n \t\t\t WELCOME \n District Mathemetics Project :";
     do 
     {
         
     cout<<"\n\n_______________________________________________________________________\n" ;
     
    cout<<"\t\t Menue \n" ;
    cout<<" 1] function ( properties of function ) \n";
    cout<<" 2] set ( cardinality , subset , proper subset cheking) \n";
    cout<<" 3] relation ( identify types of relation ) \n";
    cout<<" 4] exit \n";
    
    cout<<" enter the choice : \n" ;
    cin>>choice;
    
    switch(choice)
    {
        case 1:
           obj.D_M_function();
           break;
        
        case 2:
          obj.D_M_set();
           break;
           
        case 3:
          obj.D_M_relation();
          break;
           
        default:
           break;
    }
    }while(choice<=3);

	return 0;
}
	
