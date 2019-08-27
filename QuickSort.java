public class QucikSort {


    public  static void main(String[] args){

        int[] arr={5,4,3,6,4,7,3,9,8};

        quicksort(arr,0,arr.length-1);

        for(int i:arr){
            System.out.println(i);
        }
    }



   public static void quicksort(int[] arr,int start,int end){

       if(start>=end){
           return;
       }

       int pivotIndex=partition(arr,start,end);
       quicksort(arr,start,pivotIndex-1);
       quicksort(arr,pivotIndex+1,end);

    }

    public static int partition(int[] arr,int start,int end){

       int pivot=arr[end];
      int pIndex=start;
      for(int i=start;i<=end-1;i++){
          if(arr[i]<=pivot){
              int temp=arr[i];
              arr[i]=arr[pIndex];
              arr[pIndex]=temp;
              pIndex++;
          }
      }
      int temp=arr[pIndex];
      arr[pIndex]=arr[end];
      arr[end]=temp;
      return pIndex;
    }
}
