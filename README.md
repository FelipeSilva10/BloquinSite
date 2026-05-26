
# Bloquin IDE

> IDE gratuito de programação em blocos para Arduino e ESP32. Sem escrever uma linha de código.

[![Versão](https://img.shields.io/badge/versão-0.1.0-F56E2E?style=flat-square)](https://bloquin.online)
[![Plataforma](https://img.shields.io/badge/plataforma-Windows%2010%2B-0078D4?style=flat-square)](https://bloquin.online)
[![Licença](https://img.shields.io/badge/licença-Gratuito-50E37A?style=flat-square)](https://bloquin.online)
[![Site](https://img.shields.io/badge/site-bloquin.online-F56E2E?style=flat-square)](https://bloquin.online)

---

## O que é o Bloquin?

O **Bloquin** é um IDE visual de programação em blocos, inspirado no Scratch, mas voltado para hardware de verdade. Em vez de escrever código, você arrasta blocos, conecta a lógica, e envia para a sua placa Arduino ou ESP32 — tudo com um clique.

Pensado para crianças, alunos do ensino fundamental e médio, e qualquer pessoa que queira aprender robótica e eletrônica sem a barreira da sintaxe de programação.

---

## Funcionalidades

- **Programação em blocos drag-and-drop** — interface visual em português, sem barreira de idioma
- **Geração de código C++ em tempo real** — veja o código que os blocos geram enquanto você monta
- **Compilação offline** — arduino-cli embutido, funciona sem internet
- **Upload direto para a placa** — via USB, sem configuração extra
- **Monitor serial integrado** — para debug e comunicação com a placa
- **Suporte a Arduino e ESP32** — Uno, Nano, Mega, ESP32, ESP32-S2

---

## Placas suportadas

| Placa | Família | Status |
|-------|---------|--------|
| Arduino Uno | AVR | ✅ Suportado |
| Arduino Nano | AVR | ✅ Suportado |
| ESP32 | Xtensa | ✅ Suportado |

---

## Requisitos do sistema

- **Sistema operacional:** Windows 10 ou superior (64-bit)
- **Armazenamento:** ~6 GB de espaço livre
- **Outros:** Nenhum — tudo que precisa está incluso no instalador

---

## Download e instalação

1. Acesse [bloquin.online](https://bloquin.online) ou baixe direto:

   **[↓ Baixar Bloquin v0.1.0 (.exe)](https://www.mediafire.com/file/h1e5z03az2uk84a/bloquin_0.1.0_x64-setup.exe/file)**

2. Execute o instalador e siga as instruções
3. Conecte sua placa via USB
4. Abra o Bloquin, selecione a placa e comece a programar

---

## Como usar

```
1. Monte os blocos   → Arraste e conecte na área de trabalho
2. Veja o código     → O C++ gerado aparece em tempo real
3. Compile           → Clique em "Compilar" — erros em linguagem simples
4. Envie para a placa → Clique em "Upload" com a placa conectada via USB
```

---

## Estrutura do repositório (site)

```
BloquinSite/
├── assets/
│   ├── Logo_Bloquin.png     # Logotipo do Bloquin
│   ├── logo_SAG.png         # Logotipo da SAG
│   ├── alunos1.jpg          # Foto de alunos em aula
│   └── alunos2.jpg          # Foto de alunos em aula
├── index.html               # Página principal do site
├── sitemap-main.xml         # Sitemap para SEO
├── robots.txt               # Regras para crawlers
├── CNAME                    # Domínio personalizado (GitHub Pages)
└── README.md                # Este arquivo
```

---

## Para educadores

O Bloquin foi projetado pensando no ambiente escolar:

- **Zero configuração** — instale uma vez, funciona em todos os computadores do laboratório
- **100% offline** — sem Wi-Fi necessário para compilar e fazer upload
- **Interface em português** — sem barreira de idioma para alunos brasileiros
- **Ponte para o código real** — alunos avançados podem ver e aprender o C++ gerado
- **Gratuito para sempre** — sem licenças por escola, sem assinaturas

---

## Roadmap

- [ ] Mais blocos de sensores
- [ ] Modo tutorial interativo
- [ ] Biblioteca de projetos prontos
- [ ] Exportação de projetos como código puro

---

## Desenvolvido por

Felipe da Conceição Silva

---

## Licença

Bloquin é gratuito para uso pessoal e educacional.

---

*© 2026 Bloquin — Feito com ❤️ para e alunos*