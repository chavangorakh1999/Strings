//
//  main.cpp
//  PermitationString
//
//  Created by Gorakh Chavan on 03/04/20.
//  Copyright © 2020 Gorakh Chavan. All rights reserved.
//

#include <iostream>
using namespace std;
void perm(char s[],int k)
{
    static int a[10]={0};
    static char res[10];
    int i;
    if(s[k]=='\0')
    {
        res[k]='\0';
        cout<<res<<endl;
    }
    else
    {
        for(i=0;s[i]!='\0';i++)
        {
            if(a[i]==0)
            {
                res[k]=s[i];
                a[i]=1;
                perm(s,k+1);
                a[i]=0;
            }
            
        }
        
    }
}

int main()
{
    char s[]="GOR";
    perm(s,0);
    return 0;
}
