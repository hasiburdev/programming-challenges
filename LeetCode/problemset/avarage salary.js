var average = function (salary) {
  const sortedArray = salary.sort((a, b) => a - b);
  let sum = 0;
  console.log(sortedArray);
  for (let i = 1, len = sortedArray.length - 1; i < len; i++) {
    sum += sortedArray[i];
  }
  return sum / (sortedArray.length - 2);
};

console.log(average([4000, 3000, 1000, 2000]));
