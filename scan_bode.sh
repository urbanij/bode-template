# requires imagemagick
convert -density 150 -colorspace gray bode_template.pdf -linear-stretch 3.5%x20% -blur 0x0.2 -attenuate 0.5 +noise Gaussian -rotate 0.22 bode_template_that_looks_handwritten.pdf
echo [+] \`bode_template_that_looks_handwritten.pdf\` file created in the current dir.
