# CRUD em C++ [CREATE], [READ], [UPDATE], [DELETE]

## Introdução

Gostaria de mencionar que este código faz parte de um vídeo do YouTube, no qual, ao longo de uma playlist sobre C++, é desenvolvido um sistema CRUD. O projeto é construído passo a passo, desde a exibição do menu até um bônus especial: a separação das classes do arquivo principal em bibliotecas individuais. Esse processo foi um aprendizado em conjunto, seguindo boas práticas de responsabilidade única de função, garantindo a escalabilidade e a manutenção inteligente do código. ;) 

Você pode assistir ao vídeo [aqui](https://www.youtube.com/watch?v=E7qTuZA11us).

## O que é um CRUD e sua importância?

**CRUD** é um acrônimo para as quatro operações básicas em sistemas que manipulam dados:

- **Create (Criar):** Adicionar novos registros ao sistema.
- **Read (Ler):** Consultar e exibir registros armazenados.
- **Update (Atualizar):** Modificar registros existentes.
- **Delete (Excluir):** Remover registros do sistema.

Esse conceito é amplamente utilizado no desenvolvimento de software, sendo a base para a criação de sistemas de gerenciamento de informações. Neste projeto, vamos aplicar essas operações na construção de um sistema simples, mas bem estruturado.

## Vamos lá!

Nosso foco será a implementação de um CRUD para gerenciar **clientes**, aplicando boas práticas de programação como **princípio da responsabilidade única** e **organização modular** do código. Isso garantirá que o sistema seja escalável e de fácil manutenção.

Além disso, ao longo da série, evoluiremos o código, implementando melhorias como **armazenamento persistente** dos dados em um arquivo binário. A ideia é proporcionar um aprendizado prático e dinâmico, permitindo que você acompanhe e compreenda cada passo do desenvolvimento.

Então, prepare seu ambiente de desenvolvimento e vamos juntos construir esse sistema!


## Introdução
- [X] Intro
- [X] O que é um CRUD e sua importância na manipulação de dados
- [X] Vamos lá! 

## Estrutura do MENU
- [X] Menu principal `Main`

## Criar Classe Cliente
- [x] Atributos da Classe: `id`,`nome`, `numClientes`
- [X] Metodos da Classe: `Construtor`,`pegarId`,`pegarNome`,`alterarNome`
- [X] Configurar ID automaticamente 

## Conceito de Responsabilidade Unica
- [X] Separar responsabilidade do sistema

## Criar Classe Sistema
- [X] Atributos da Classe `Vetor de Cliente`
- [X] Metodos da Classe: `criar`,`listar`,`editar`,`excluir`
- [X] Create (Criar)
- [X] Read (listar)
- [X] Update (Editar)
- [X] Delete (Excluir)

## Conclusão
- [X] Resumo do que foi aprendido sobre CRUD
- [X] Importância da organização para manutenção e escalabilidade

## Atualização do Código
- [X] Criar Biblioteca para limpar o código
- [ ] Salva Informações em um arquivo `Binario(txt)`
