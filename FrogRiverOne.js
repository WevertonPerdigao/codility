let A = [1, 3, 1, 4, 2, 3, 5, 4];
let X = 5;


function solution(X, A) {
    if (A.length < X) {
        return -1;
    }

    let r = [];

    for (let i = 0; i < X; i++) {
        r.push(i + 1);
    }


    for (let i = 0; i < A.length - 1; i++) {

        let index = r.indexOf(A[i]);

        if (index > -1) {
            r.splice(index, 1);
            if (r.length === 0) {
                return i;
            }
        }
    }

    return -1;
}
