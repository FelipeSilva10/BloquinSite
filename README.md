
# Bloquin IDE

> Site oficial do Bloquin, uma IDE visual em português para Arduino e ESP32.

[![Versão](https://img.shields.io/badge/versão-2.7.0-F56E2E?style=flat-square)](https://bloquin.online)
[![Plataforma](https://img.shields.io/badge/plataforma-Windows%20%2B%20Linux-0078D4?style=flat-square)](https://bloquin.online)
[![Licença](https://img.shields.io/badge/licença-MIT-50E37A?style=flat-square)](https://bloquin.online)
[![Site](https://img.shields.io/badge/site-bloquin.online-F56E2E?style=flat-square)](https://bloquin.online)

---

## O que é o Bloquin?

O **Bloquin** é uma IDE visual de programação em blocos voltada para hardware real. O estudante monta a lógica visualmente, acompanha o código C++ gerado e envia o programa para uma placa Arduino ou ESP32.

Pensado para crianças, alunos do ensino fundamental e médio, e qualquer pessoa que queira aprender robótica e eletrônica sem a barreira da sintaxe de programação.

---

## Funcionalidades

- **Programação em blocos drag-and-drop** — interface visual em português, sem barreira de idioma
- **Geração de código C++ em tempo real** — veja o código que os blocos geram enquanto você monta
- **Compilação local** — arduino-cli incluído no aplicativo
- **Upload direto para a placa** — via USB, sem configuração extra
- **Monitor serial integrado** — para debug e comunicação com a placa
- **Suporte a Arduino e ESP32** — Uno, Nano e ESP32 DevKit V1
- **Recursos educacionais conectados** — turmas, projetos na nuvem e painel do professor
- **Modo visitante** — permite experimentar o editor sem criar conta

---

## Placas suportadas

| Placa | Família | Status |
|-------|---------|--------|
| Arduino Uno | AVR | ✅ Suportado |
| Arduino Nano | AVR | ✅ Suportado |
| ESP32 | Xtensa | ✅ Suportado |

---

## Requisitos do sistema

- **Sistema operacional:** Windows 10 ou superior (64-bit), ou Linux x86_64
- **Armazenamento:** ~6 GB de espaço livre
- **Outros:** Nenhum — tudo que precisa está incluso no instalador

---

## Download e instalação

1. Acesse [bloquin.online](https://bloquin.online) ou baixe a versão estável diretamente:

   | Plataforma | Arquivo | Tamanho | Status |
   | --- | --- | --- | --- |
   | Windows 10/11 (64-bit) | **[↓ BloquinIDE_2.7.0.exe](https://github.com/FelipeSilva10/Bloquin/releases/latest/download/BloquinIDE_2.7.0.exe)** | 22,2 MB | ✅ Disponível |
   | Linux x86_64 | **[↓ Bloquin-Linux-x86_64.AppImage](https://github.com/FelipeSilva10/Bloquin/releases/latest/download/Bloquin-Linux-x86_64.AppImage)** | 103,3 MB | ✅ Disponível |
   | Microsoft Store | **[↓ Bloquin na Microsoft Store](https://apps.microsoft.com/detail/9N3MJX3CVHW4)** | — | ✅ Disponível |

   > O nome do instalador Windows muda a cada versão (ex.: `BloquinIDE_2.7.0.exe`). Use sempre a [página de releases](https://github.com/FelipeSilva10/Bloquin/releases/latest) para pegar o arquivo certo — o site já faz isso automaticamente (o link acima é apenas um fallback estático e pode ficar desatualizado até a próxima atualização do site).

2. No Windows, execute o instalador e siga as instruções. No Linux, permita a execução do arquivo AppImage e abra-o.
3. Conecte sua placa via USB.
4. Abra o Bloquin, selecione a placa e comece a programar.

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
├── conteudos/                # Biblioteca de projetos e componentes
├── public/
│   └── favicon.png           # Marca otimizada para uso na interface
├── index.html               # Página principal do site
├── sitemap-main.xml         # Sitemap para SEO
├── robots.txt               # Regras para crawlers
├── CNAME                    # Domínio personalizado (GitHub Pages)
└── README.md                # Este arquivo
```

---

## Para educadores

O Bloquin foi projetado pensando no ambiente escolar:

- **Instalação direta** — o arduino-cli acompanha o aplicativo
- **Compilação e upload locais** — não dependem de compilador no navegador
- **Interface em português** — sem barreira de idioma para alunos brasileiros
- **Ponte para o código real** — alunos avançados podem ver e aprender o C++ gerado
- **Recursos de turma** — projetos na nuvem e painel do professor usam conexão com a internet
- **Código aberto** — distribuído sob licença MIT

---

## Roadmap

- [x] Publicação na Microsoft Store
- [ ] Mais blocos de sensores
- [ ] Modo tutorial interativo
- [ ] Biblioteca de projetos prontos
- [ ] Exportação de projetos como código puro

---

## Desenvolvido por

Felipe da Conceição Silva

---

## Licença

O Bloquin é distribuído sob a licença MIT.

---

*© 2026 Bloquin — Feito com ❤️ para a educação*
