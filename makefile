all:
	pdflatex semilog.tex && pdflatex bode_template.tex && pdflatex bode_template.tex
	
clean:
	rm -v -rf *.pdf *.aux *.log *.out semilog.tikz

clean_except_pdfs:
	rm -v -rf *.aux *.log *.out	semilog.tikz