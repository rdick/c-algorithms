void maximumAdjacent(int sizeOfArray, int arr[]){
    int prev = arr[0];
    
    for(int i = 1; i < sizeOfArray; i++){
       if(prev > arr[i]){
           cout << prev;
          cout << " ";
       } else {
          cout << arr[i]; 
          cout << " ";
       }
        prev = arr[i];
    }
}