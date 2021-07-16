const A = [3, 1];

const reducer = (acc, value) => acc + value;


let menor = 100001;
for (let i = 0; i < A.length - 1; i++) {

    let v = Math.abs((A.slice(0, i + 1).reduce(reducer)) - A.slice(i + 1, A.length).reduce(reducer));

    console.log(v);
    if (v < menor) {
        menor = v;
    }

}

console.log(menor);


