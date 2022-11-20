function solution(stones, k) {
  const max = Math.max(...stones);
  const min = Math.min(...stones);
  
  
  const checkPossible = (arr2) => {
      let continuous = 0;
      
      for (const el of arr2) {
          if (el <= 0) {
              continuous += 1;
              if (continuous > k) return false;
          } else {
              continuous = 0;
          }
      }
      
      return true;
  }
  
  const recursive = (low, high) => {
      if (low === high) return low;
      const mid = Math.ceil((low + high) / 2);
      const converted = stones.map(el => el - mid);
      
      const isPossible = checkPossible(converted);
      
      if (isPossible) {
          return recursive(mid, high);
      } else {
          return recursive(low, mid - 1);
      }
  }
  
  return recursive(min, max); 
}

console.log(solution([2, 4, 5, 3, 2, 1, 4, 2, 5, 1], 3));