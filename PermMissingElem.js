let A = [6, 10, 14, 18, 26];


console.log(getValorGap(A));


function getValorGap(A) {
    if (A.length === 0) {
        return 1;
    } else if (A.length === 1) {
        return A[0] + 1;
    } else {

        A.sort(((a, b) => a - b));

        let razao = (A[1] - A[0]) > (A[A.length - 1] - A[A.length - 2]) ? A[A.length - 1] - A[A.length - 2] : A[1] - A[0];

        for (let i = 0; i < A.length - 1; i++) {
            if (A[i] + razao !== A[i + 1]) {

                return A[i] + razao;
            }
        }
    }
}
