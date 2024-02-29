

        /// QS - 6: Bubble Sort

    void sort(int n, int a[]) {
    for (int steps=0; steps<n; steps++) {
        for (int i=n-1; i>0; i--) {
	       if(a[i]<a[i-1])
           {
                int temp = a[i];
                a[i] = a[i-1];
                a[i-1]= temp;
           }
       }
   }
}
