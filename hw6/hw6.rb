inp = gets
inp = inp.gsub(/\AF/, 'Gh')
inp = inp.gsub(/\Af/, 'gh')
inp = inp.gsub(/\sF/, ' Gh')
inp = inp.gsub(/\sf/, ' gh')
inp = inp.gsub(/SH\s/, 'TI ')
inp = inp.gsub(/Sh\s/, 'Ti ')
inp = inp.gsub(/sH\s/, 'tI ')
inp = inp.gsub(/sh\s/, 'ti ')
while inp.match?(/\wi\w|\wI\w/) == true
	pos = inp.index(/\wi\w|\wI\w/)
	pos += 1
	if inp[pos] == 'i'
		inp[pos] = 'o'
	end
	if inp[pos] == 'I'
		inp[pos] = 'O'
	end
end
puts inp
