AutonomousArduinoCar 🚗🤖

Este projeto consiste em um carrinho autônomo controlado por Arduino, que utiliza um sensor ultrassônico para detectar obstáculos e uma ponte H (L9110) para controlar os motores. O carrinho anda em linha reta e, ao detectar um obstáculo a uma distância mínima, ele vira para evitar colisões.
Componentes Utilizados 🛠️

    Arduino (Uno, Nano ou similar)

    Sensor Ultrassônico HC-SR04 (para detectar obstáculos)

    Ponte H L9110 (para controlar os motores)

    Motores DC (2 unidades)

    Chassis do carrinho (com rodas e suportes)

    Bateria ou fonte de alimentação (para alimentar o Arduino e os motores)

    Jumpers e protoboard (para conexões)

Funcionalidades ⚙️

    Detecção de obstáculos: O sensor ultrassônico mede a distância em tempo real.

    Movimento autônomo: O carrinho anda em linha reta e vira ao detectar um obstáculo.

    Controle de motores: A ponte H L9110 controla a direção e velocidade dos motores.

Esquema de Conexões 🔌
Componente	Pino no Arduino
Sensor Trig	2
Sensor Echo	3
Ponte H A_IA	8
Ponte H A_IB	9
Ponte H B_IA	10
Ponte H B_IB	11
Como Usar o Código 💻

    Conecte os componentes conforme o esquema acima.

    Carregue o código no Arduino usando a IDE.

    Alimente o circuito com uma bateria ou fonte de energia.

    O carrinho começará a se mover e evitar obstáculos automaticamente.

Funções Principais

    direcaoFrente(): Faz o carrinho andar em linha reta.

    direcaoVira(): Faz o carrinho virar ao detectar um obstáculo.

    pararMotores(): Para os motores (não usada no loop principal, mas disponível para expansões).

Exemplo de Saída no Monitor Serial 📊

O código exibe a distância medida pelo sensor ultrassônico no Monitor Serial do Arduino:
Copy

Distância: 15 cm
Distância: 8 cm
Distância: 20 cm

Personalização 🛠️

    Distância mínima: Altere a variável distanciaMinima no código para ajustar a sensibilidade do carrinho.

    Tempo de virada: Ajuste o delay(500) na função loop() para controlar o tempo de virada.

Contribuições 🤝

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou pull requests com melhorias, correções ou novas funcionalidades.
Licença 📄

Este projeto está licenciado sob a licença MIT. Veja o arquivo LICENSE para mais detalhes.
Como Adicionar ao GitHub:

    Crie um arquivo chamado README.md na raiz do seu repositório.

    Copie e cole o conteúdo acima no arquivo.

    Salve e faça commit no GitHub.
