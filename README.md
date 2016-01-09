## PILHA GENÉRICA EM C

### LICENÇA
**MIT**
[Leia a licença](LICENSE)

### COMPILADOR UTILIZADO
***GCC (TDM-1) 4.7.1 -> Windows***

### OBJETIVO
Criar tipos genéricos de campos para utiliza-lo em conceitos como Lista, Fila e entre outros.

###NOTAS:
- [GenericField](https://github.com/LorhanSohaky/GenericField)

### COMO USAR
`Stack *createStack()`: Retorna o endereço de memória da Pilha. Retorna NULL em caso de erro.

`int insertElement(Stack *stack,void *value, int type)`: Insere elemento na pilha. Retorna -1 em caso de erro.
- Stack *stack: Endereço de memória da pilha.
- void *value: Endereço de memória do valor.
- int type: Tipo de valor.

`GenericField *getElement(const Stack *stack)`: Retorna o elemento. Retorna -1 em caso de erro.
- const Stack *stack: Endereço de memória da pilha.

`int nextElement(Stack *stack)`: Move para o próximo elemento. Retorna -1 em caso de erro.
- Stack *stack: Endereço de memória da pilha.

`int clearStack(Stack *stack)`: Limpa a pilha. Retorna -1 em caso de erro.
- Stack *stack: Endereço de memória da pilha.
