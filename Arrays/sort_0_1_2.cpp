void sort012(int *arr, int n)
{
   //   Write your code here
    int s =0;
    int m =0;
    int e = n-1;
    
    while(m<=e){
    switch(arr[m]){
          case 0:
                swap(arr[s++],arr[m++]);
                break;
           case 1:
                m++;
                break;
           case 2:
                swap(arr[m],arr[e--]);
                break;
    }
    }
}