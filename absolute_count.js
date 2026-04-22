function solution(A) {
    let left = 0;              // points to the start (most negative number)
    let right = A.length - 1;  // points to the end (most positive number)
    let count = 0;             // tracks distinct absolute values found

    while (left <= right) {

        let absLeft  = Math.abs(A[left]);   // absolute value of left pointer
        let absRight = Math.abs(A[right]);  // absolute value of right pointer

        if (absLeft > absRight) {
            // if left side is bigger — count it, move left pointer inward
            count++;

            // if we just counted |-5|, skip any other -5s
            while (left <= right && Math.abs(A[left]) === absLeft) {
                left++;
            }

        } else if (absRight > absLeft) {
            // if right side is bigger — count it, move right pointer inward
            count++;

            // e.g. if we just counted |6|, skip any other 6s
            while (left <= right && Math.abs(A[right]) === absRight) {
                right--;
            }

        } else {
            // --- both sides are EQUAL ---
            count++;


            while (left <= right && Math.abs(A[left]) === absLeft) {
                left++;
            }
            while (left <= right && Math.abs(A[right]) === absRight) {
                right--;
            }
        }
    }

    return count;
}


const A = [-5, -3, -1, 0, 3, 6];
console.log(solution(A));          // → 5  (0,1,3,5,6)

const C = [1];
console.log(solution(C));          // → 1  single element

const D = [-5, -5, -5];
console.log(solution(D));          // → 1  all same absolute value

const E = [-3, -1, 0, 1, 3];
console.log(solution(E));          // → 3  (0, 1, 3)