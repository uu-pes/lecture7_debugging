# 1DT106 Lecture 7: Debugging

This repository holds the slides for the sixth lecture in 1DT106 Programming
Embedded Systems at Uppsala University, 2025 Edition. 

## Required software 

In order to work with this presentation, a few things need to be installed: 

- Git 
- Decktape 
- VS Code + Live preview plugin 

## Clone this repository 

In order to clone this repository do the following: 

```bash 
git clone --recursive https://github.com/uu-pes/lecture7_debugging.git
```

## Export slides to PDF 

There are multiple ways of exporting the slides to pdf. Reveal.js can print the 
slides as oultined in the [documentation](https://revealjs.com/pdf-export/). This 
does not work in all setups. Alternatively, you can use [Decktape](https://github.com/astefanutti/decktape). But even decktape sometimes has problems layouting the slides 
correctly. The most reliable method I found was to instruct decktape to create screenshots of the slides and then combine these images to a pdf: 

```bash 
mkdir screenshots 
decktape reveal index.html presentation.pdf --screenshots --screenshot-size='2048x1200'
```

Now combine the resulting PNGs to a pdf with your preferred program. 

