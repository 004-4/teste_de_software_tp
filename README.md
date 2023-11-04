# TP Teste de Software - app "aGENDA :)"

## Membros do grupo:
  Clara Costa da Fonseca
  2021031971
## O sistema:
  O sistema consiste em um aplicativo de agenda para desktop, no qual o usuário pode adicionar seus contatos, atualizá-los ou excluí-los e, principalmente, ver sua própria agenda. Um contato é composto por Nome, Celular/Telefone, E-mail e Categoria.
  
  A primeira página é a página de login, no qual existe a opção de entrar com um usuário existente ou cadastrar um novo. No entanto, existe apenas um banco de dados por trás do sistema e o cadastro não foi de fato implementado, o usuário ("claraboia") e a senha ("bolinho86") existente foram adicionados para manter a estética.
  
  Na página principal, o usuário tem a opção de adicionar um novo contato (que leva a uma página de adição de contatos), de ver a agenda (que leva a uma página de vizualização da agenda) ou de ver seu perfil (que leva a uma página mostrando seu usuário, senha -, e o nome de sua agenda) . Nesta segunda página ele pode escolher atualizar ou excluir um contato selecionado (que fica marcado de roxo); existe também uma barra de pesquisa, no qual pode se pesquisar por qualquer atributo da tabela, com excessão de ID. 
  
## As ferramentas utilizadas:
  As ferramentas utilizadas para contruir esse aplicativo foi o framework Qt 6.0.0 com a linguagem C++, os testes foram realizados no QtCreator no com QtTests e C++ e posteriormente automatizados no GitHub Actions como solicitado. 
