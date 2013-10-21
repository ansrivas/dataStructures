#include <stdio.h>
#include <malloc.h>
#include <string.h>

void merge(int *iArr, int iStart, int iMid,  int iEnd, int iLen){
     int *tempArr= (int *)malloc(sizeof(int)*iLen);
     memset(tempArr, 0, iLen);
     int i = iStart/*Counter after start*/, 
         j = iMid +1 /*Counter after mid*/,
         k = 0 /*Copy remaining elements*/; 
     
     while(i <= iMid && j <= iEnd){
       if(iArr[i] <= iArr[j]){
          tempArr[k++] = iArr[i++];              
       }else{
          tempArr[k++] = iArr[j++];      
       }            
     }
     
     while(i <= iMid){ //Copying the remaining elements of the other part , if left still
        tempArr[k++] = iArr[i++];             
     }
     
     while(j <= iEnd){      //Copying the remaining elements of the other part , if left still
        tempArr[k++] = iArr[j++] ;       
     }
     
	 k--; // Since the final value of K in the above while-loop has increased by one , so to adjust it
     while(k >=0){
      iArr[iStart + k] = tempArr[k]; 
	  k--;
     }
     free(tempArr) ;
     tempArr = NULL;
}

void vPrintArr(int *iArr, int iLen){
     for(int i = 0 ; i < iLen ; i++){
        printf("%d ", iArr[i]);       
     }

}

void mergeSort(int *iArr, int iStart, int iEnd, int iLen){
   
  if(iStart < iEnd ){  
  int pivot = (iStart + iEnd)/2 ;
  mergeSort(iArr, iStart, pivot, iLen); 
  mergeSort(iArr, pivot+1, iEnd,iLen);
  
  merge(iArr, iStart, pivot, iEnd,iLen);    
 }  
 return; 
}


int main(){
 int iArr[] = {1,4,9,8};   
 mergeSort(iArr, 0, 3, 4);
 vPrintArr(iArr, 4);
 getchar();
 return 0;

}
