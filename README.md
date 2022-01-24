# A [Distância de Manhattan](https://pt.wikipedia.org/wiki/Geometria_do_t%C3%A1xi)
É a distância entre dois pontos em uma grade (como a geografia do bairro de Manhattan em Nova Iorque, que se assemelha a uma grade), calculada usando apenas linhas verticais e horizontais.

Em contrapartida, [a menor distância entre dois pontos](https://brasilescola.uol.com.br/matematica/distancia-entre-dois-pontos.htm) é chamada Euclideana e medida usando uma única linha reta que une esses dois pontos.

Escreva a função `float manhattan_dist(Point, Point)` que retorna a distância de Manhattan entre dois pontos.

Para comparação, escreva também a função `float euclidean_dist(Point, Point)`.

## Potenciais limitações
- A classe Point é imutável
- A classe Point não tem getters e nem setters.

## Exemplos de testes
- manhattan_dist(Point(1, 1), Point(1, 1)) retorna 0
- manhattan_dist(Point(5, 4), Point(3, 2)) retorna 4
- manhattan_dist(Point(1, 1), Point(0, -3)) retorna 8
- euclidean_dist(Point(1, 1), Point(1, 1)) retorna 0
- euclidean_dist(Point(5, 4), Point(3, 2)) retorna 2.82
- euclidean_dist(Point(1, 1), Point(0, -3)) retorna 5.65

## Referências
[Exercício original](https://codingdojo.org/kata/manhattan-distance/)
[Facilitação de dojos](https://github.com/lula42/42Labs/blob/main/dojos.md)
