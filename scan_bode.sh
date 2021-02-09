# requires imagemagick
convert -density 150 -colorspace gray bode_template.pdf -linear-stretch 3.5%x10% -blur 0x0.1 -attenuate 0.4 +noise Gaussian -rotate 0.6 bode_template_that_looks_handwritten.pdf
echo \`bode_template_that_looks_handwritten.pdf\` file created in the current dir.
