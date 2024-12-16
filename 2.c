# include<stdio.h>
# define max 100000
int arr[max];
int main(){
    int num;char c;int i=0;
    while(scanf("%d%c",&num,&c)==2) arr[i++] = num;
    int j=0;int n=i-1;int mid = i/2;int flag = 1;
    while(1){
        if (arr[j]!=arr[n]){
            flag=0;
            break;
        } 
        if (j>mid) break;
        j++;n--;
    }
    if (flag) printf("Yes");
    else printf("No");
    printf("\n");
}