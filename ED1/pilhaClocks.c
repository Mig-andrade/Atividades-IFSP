	#include <stdio.h>
	#include <string.h>
	#include <math.h>
	#include <time.h>
	#include <stdlib.h>

	#define tamanho 25001

	typedef struct pilha {
		int vetor[tamanho];
		int topo;
	} Pilha;

	Pilha pi;

	void inserir(int p);
	int remover();
	void imprimir();
	int verificarCheia();
	int verificarVazia();
	void inicializar();

	void inserir(int p) {
		if(!verificarCheia()) {
			pi.topo++;
			pi.vetor[pi.topo] = p;
		} else {
			printf("Nao eh possivel inserir elemento na pilha pois ela estah cheia");
		}
	}

	int remover() {
		if(!verificarVazia()) {
			int aux;
			aux = pi.vetor[pi.topo];
			pi.topo--;
			return aux;
		}
		else {
			printf("A pilha estah vazia.");
			return 0;
		}
	}

	void imprimir() {
		int i;
		if(!verificarVazia()) {
			for(i = pi.topo; i >= 0; i--) {
				printf("%d ", pi.vetor[i]);
			}
		} 
		else {
			printf("A pilha estah vazia.");
		}
	}

	int verificarCheia() {
		if(pi.topo == tamanho - 1)
			return 1;
		else return 0;
	}

	int verificarVazia() {
		if(pi.topo == -1)
			return 1;
		else return 0;
	}

	void inicializar() {
		pi.topo = -1;
	}

	int numeroAleatorio(int low, int high) {
		int k;
		double d;
		d = (double) rand () / ((double) tamanho + 1);
		k = d * (high - low + 1);
		return low + k;
	}

	int obterDado() {
		return numeroAleatorio(0, tamanho);
	}

	void exibirDado(int p) {
		printf("\nElemento: %i", p);
	}

	double start, finish, elapsed;

	int main(int argc, char *argv[]) {
		int opcao, p, i, quantidade;
		printf("Digite a quantidade de elementos para testar: ");
		scanf("%d", &quantidade);
		inicializar();
		do {
			printf("\n     MENU");
			printf("\n1. Inserir %d elementos na pilha", quantidade);
			printf("\n2. Remover %d elementos na pilha", quantidade);
			printf("\n3. Imprimir a pilha");
			printf("\n4. Inicializar pilha");
			printf("\n5. Sair");
			printf("\nDigite a opcao: ");
			scanf("%d", &opcao);
			
			switch(opcao) {
				case 1:
					inicializar();
					start = (double) clock();
					for(i = 0; i < quantidade; i++) {
						p = obterDado();
						inserir(p);
						exibirDado(p);
					}
					finish = (double) clock();
					elapsed = finish - start;
					printf("\nForam utilizados %.2f clocks", elapsed);
					break;
				case 2:
					inicializar();
					for(i = 0; i < quantidade; i++) {
						p = obterDado();
						inserir(p);
					}
					start = (double) clock();
					for(i = 0; i < quantidade; i++) {
						p = remover();
						exibirDado(p);	
					}
					finish = (double) clock();
					elapsed = finish - start;
					printf("\nForam utilizados %.2f clocks", elapsed);
					break;
				case 3:
					inicializar();
					for(i = 0; i < quantidade; i++) {
						p = obterDado();
						inserir(p);
					}
					start = (double) clock();
					imprimir();
					finish = (double) clock();
					elapsed = finish - start;
					printf("\nForam utilizados %.2f clocks", elapsed);
					break;
				case 4:
					inicializar();
					break;
				case 5:
					printf("\nEncerrando o programa...");
					break;
				default:
					printf("\nOpcao invalida. Escolha um numero de 1 a 5.");
			}
			
		} while(opcao != 5);
	}
