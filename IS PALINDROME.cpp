	int isPlaindrome(string S)
	{
	    int flag=0;
	    // Your code goes here
	    int n=S.length();
	    
	    int l=0;
	    int r=n-1;
	    
	    while(l<r)
	    {
	        if(S[l]!=S[r])
	        {
	            flag=1;
	        }
	        l++;
	        r--;
	    }
	    
	    if(flag==0)
	    {
	        return 1;
	    }
	    else if(flag==1)
	    {
	        return 0;
	    }
	    
	}
