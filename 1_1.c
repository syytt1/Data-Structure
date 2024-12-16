# include<stdio.h>
# define max 100000
typedef struct Term{
    int ex;
    int cof;
}Term;
int main(){
    int m,n;
    scanf("%d",&m);
    Term a[m];
    for (int i=0;i<m;i++){
        scanf("%d %d", &a[i].cof,&a[i].ex);
    }
    scanf("%d",&n);
    Term b[n];
    for (int j=0;j<n;j++){
        scanf("%d %d", &b[j].cof,&b[j].ex);
    }
    Term res[max];
    int count=0;int i=0;int j=0;
    while (i<m||j<n){
        if (i<m&&j<n){
            if (a[i].ex>b[j].ex){
                res[count] = a[i];
                i++;
            }
            else if (a[i].ex<b[j].ex){
                res[count] = b[j];
                j++;
            }
            else{
                res[count].ex = a[i].ex;
                res[count].cof = a[i].cof+b[j].cof;
                i++;j++;
            }
        }
        else{
            if (i<m){
                res[count] = a[i];
                i++;
            }
            else{
                res[count] = b[j];
                j++;
            }
        }
        if (res[count].cof!=0) count++;
    }
    int flag=0;
        if (count!=0){
            if (flag!=0) printf(" ");
            for (int i=0;i<count;i++){
                printf("%d %d", res[i].cof,res[i].ex);
            }
        }
        else printf("0 0");
}