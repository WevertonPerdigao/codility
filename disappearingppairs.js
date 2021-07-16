let S = 'BABABA';
console.log(solucao(S));

function solucao(S) {

    S = S.split("");
    if (S.length === 0) {
        return "";
    }
    let index = 0;
    while (index <= S.length - 1) {

        if (S[index] + S[index + 1] === 'AA' || S[index] + S[index + 1] === 'BB' || S[index] + S[index + 1] === 'CC') {
            S.splice(index, 2);
            index--;
        } else {
            index++;
        }
    }
    return S.toString().replace(/,/g, "");
}
