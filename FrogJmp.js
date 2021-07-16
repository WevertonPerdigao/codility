let X = 10;
let Y = 85;
let D = 30;

console.log(solution(X, Y, D));

function solution(X, Y, D) {
    if (X === Y) {
        return 0;
    } else if ((Y - X) <= D) {
        return 1;
    } else {
        let multiplo = (Y - X) / D;
        multiplo += multiplo === parseInt(multiplo) ? 0 : 1;
        return parseInt(multiplo);
    }
}



