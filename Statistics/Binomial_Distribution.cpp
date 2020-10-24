#include<bits/stdc++.h>

using namespace std;


/* Program to implement Binomial Distribution 

    Expected Mean = n*p
    Variance_Binomial = n*p*(1-p)

    -> Exact number of successes and a range of of binomial successes (eg >=50 )

*/


double variance_binomial(int n,double p )
{

    return (double)n*(p*(1-p));
}

double expected_binomial(int n, double p)
{
    return (double)n*p;
}

double nCr(int n,int r)
{
    double nr=n;
    double dr=r;

    for(int i=1;i<r;i++)
    {
        dr=dr*i;
    }

    for(int i=n-1;i>=((n-r)+1);i--)
    {
        nr=nr*i;
    }

    return nr/dr;
}

double calc_exact(int n, double p,int e)
{

    return nCr(n,e) * pow(1-p,n-e) * pow(p,e);
}

double calc_range(int n, double p,int lower,int upper)
{
    double res=0;
    for(int i=lower;i<=upper;i++)
    {
        res=res+(nCr(n,i) * (pow(p,i)) * pow(1-p,n-i)   );
    }

    return res;
}


int main()
{

    int n;
    double p;

    cout<<"ENTER VALUES OF n and p \n";

    cin>>n>>p;

    cout<<"Binomial variance : "<<variance_binomial(n,p)<<"\n";

    cout<<"Binomial Expected val : "<<expected_binomial(n,p)<<"\n";

    cout<<"Enter exactly how many successes \n";
    int e;
    cin>>e;

    cout<<"Answer for exact : "<<calc_exact(n,p,e)<<"\n";

    cout<<"Enter range lower and upper \n";
    int upper,lower;
    cin>>lower>>upper;

    cout<<"Answer for range : "<<calc_range(n,p,lower,upper)<<"\n";
    


    return 0;
}
