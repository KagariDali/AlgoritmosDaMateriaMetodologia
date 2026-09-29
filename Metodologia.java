import java.util.*;



public class Metodologia {



	public static void main(String[] args) {

		Scanner tec = new Scanner(System.in);

		Random ram = new Random();

		

		System.out.println("Gerando Números Pseudo Aleatórios");

		int soma = 0;

		for(int i = 0;i != 100; i++) {

			int valor = 0;

			valor = ram.nextInt(101);

			soma += valor;

			System.out.println(valor);

		}

		

		int media = soma/100;

		

		if(media>50) {

			System.out.println("Sua média foi: " + media + " Aprovado");

		}

		else {

			System.out.println("Sua média foi: " + media + " Reprovado");

		}



	}



}