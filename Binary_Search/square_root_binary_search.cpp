long long int floorSqrt(long long int x) 
{
   long low = 0;
   long high = x;
   int ans;
   while(low <= high){
      long mid = (high+low)/2;
      long square = mid*mid;
      if(x == square) {
          return mid;
      } else if (square > x){
          high = mid-1;
      } else { //sauare < x
          ans = mid;
          low = mid +1;
      }
   } 
   return ans;
}