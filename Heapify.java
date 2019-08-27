public class Heapify {

   static void  heapify(int arr[], int n, int i)
    {
        int largest = i; // Initialize largest as root
        int l = 2*i + 1; // left = 2*i + 1
        int r = 2*i + 2; // right = 2*i + 2

        // If left child is larger than root
        if (l < n && arr[l] > arr[largest])
            largest = l;

        // If right child is larger than largest so far
        if (r < n && arr[r] > arr[largest])
            largest = r;

        // If largest is not root
        if (largest != i)
        {
            int swap = arr[i];
            arr[i] = arr[largest];
            arr[largest] = swap;

            // Recursively heapify the affected sub-tree
            heapify(arr, n, largest);
        }
    }

    public static void main(String[] args) {
        int[] bTree={35, 33, 42, 10, 14, 19, 27, 44, 26, 31};
        for (int i = bTree.length / 2 - 1; i >= 0; i--) {
            heapify(bTree, bTree.length, i);
        }
        for(int i:bTree){
            System.out.println("i = " + i);
        }
        

    }
}
