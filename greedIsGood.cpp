#include <vector>

int score(const std::vector<int>& dice) {
  int arr[6] = {0} , sum=0;
  for(int i =0; i<5;i++)
    arr[dice[i]-1]++;
  for(int i = 1; i<6;i++){
    if(arr[i] >= 3 && i != 4){
      sum += (i+1)*100;
    }
  }
  int x = arr[0];
  if(x <3)
    sum += x*100;
  if(x == 3)
    sum += 1000;
  if(x > 3)
    sum += 1000 + (x%3)*100;
  int y = arr[4];
  if(y < 3)
    sum += y*50;
  if(y == 3)
    sum += 500;
  if(y > 3)
    sum += 500 + (y%3)*50;
  
  return sum;
  
}
