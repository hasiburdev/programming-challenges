/**
 * @param {number} low
 * @param {number} high
 * @return {number}
 */
var countOdds = function (low, high) {
  let oddCount = 0;
  if (low % 2 === 1) {
    low++;
    oddCount++;
  }
  if (high % 2 === 1) {
    high--;
    oddCount++;
  }
  oddCount += (high - low) / 2;
  return oddCount;
};
