#include<bits/stdc++.h>
using namespace std;
struct item{
	int value, weight;
};
bool cmp(item i, item j)
{
	return (double)i.value/i.weight>(double)j.value/j.weight;
}
int main()
{
	item a[]={{100,30},{70,20}, {40,40}};
	int n=3;
	sort(a,a+3,cmp);
	int capacity=60, cw=0;
	double val=0;
	for(int i=0; i<n;i++)
	{
		if(cw+a[i].weight<=capacity)
		{
			cw=cw+a[i].weight;
			val=val+a[i].value;
		}
		else{
			val+=(capacity-cw)*(double)a[i].value/a[i].weight;
			break;
		}
	}
	cout<<val;
}
