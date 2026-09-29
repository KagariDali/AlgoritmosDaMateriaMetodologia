const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question('Digite a quantidade de valores: ', (resposta) => {
    const tamanho = parseInt(resposta);
    let valorTotal = 0;

    for (let i = 0; i < tamanho; i++) {
        // Math.random() gera entre 0 e 0.999...
        // Multiplicamos por 101 e arredondamos para baixo para ter de 0 a 100
        let numRandom = Math.floor(Math.random() * 101);
        valorTotal += numRandom;
        console.log(numRandom);
    }

    // Math.floor para simular a divisão inteira (//) do Python
    const media = Math.floor(valorTotal / tamanho);

    console.log("Média:", media);

    if (media > 50) {
        console.log("Aprovado");
    } else {
        console.log("Reprovado");
    }

    rl.close();
})
