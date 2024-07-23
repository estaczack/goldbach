# CONJECTURA DE GOLDBAH

Minha eterna pesquisa sobre a Conjectura de Goldbach, que já dura mais de vinte anos e só agora parece estar ehegando a slgum lugar.

- **./bin/gold01** => Exibe as configurações de somas desde n=6 até um valor que está harrcoded atualmente.
- **./bin/gold02** => Exibe a configuração de somas de um certo n passado como parâmetro.
- **./bin/gold03** => Exibe um amostra dos conjuntos dos n's ond g(n) é par e g(n) é ímpar.
- **./bin/gold04** => Exibe um quadro com os tipos de n's, coloridos segundo seus tipos.
- **./bin/gold05** => Exibe uma lista extensa com n's e seus parâmetros calculados, abordando a questão da divisibilidade.
- **./bin/gold07** => Lista de n's situando-os em G0, G1, G2 ou nenhum.
- **./bin/gold08** => Lista dos n's que não estão em G0, G1 ou G2.

# Como executar os programas

- Clone este repositório em uma pasta qualquer
- Estando nessa pasta, faça ```cd goldbach```
- Faça ```./compila.sh```

E pronto! Supondo que a compilação tenha dado certo, todo os executáveis estarão na pasta **bin**.

Se a compilação não deu certo, provavelmente você não tem todas as ferramentas de programação instaladas. Se estiver usando uma distribuição da família Debian (Ubuntu, Mint...), o comando ```sudo apt-get install build-essential``` provavelemnte resolverá esse problema. Se não resolver, me manda uma mensagem em estaczack@gmail.com e tentarie ajudar.

# Todo

- Ler como parâmetro o máximo valor para ser exibido em gold01.c
