all:
	pdflatex semilog.tex && pdflatex bode_template.tex

clean:
	rm -rf *.pdf *.aux *.log *.out
