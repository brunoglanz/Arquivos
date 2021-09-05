
from struct import Struct
import sys



registro_rua = Struct("72s72s72s72s2s8sxx")
rua_tabela_column = 0
print ("Tamanho da Est: %d" % registro_rua.size)
f = open("cep.dat","rb")
line = f.read(registro_rua.size)
limited = 0 
counter = 0
rua = "Rua 1"
rua = rua.strip().upper() 
while len(line) == registro_rua.size:
	record = registro_rua.unpack(line)
	rua_tabela_ = record[rua_tabela_column].decode('latin1').strip()
	if rua_tabela_ == rua:
		for coluna in record:
			print(str(coluna,'latin1'))
		limited += 1
		if limited == 20: 
			break
	line = f.read(registro_rua.size)
	counter += 1
print ("Total : %d" % counter)
f.close()
