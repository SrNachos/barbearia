<html lang="pt-BR">
	<head>
		<head>
		<meta charset="utf-8">
		<title>barbearia</title>
		<link rel="stylesheet" href="estilos.css">
	</head>
	</head>
	<body>
		<?php
			include "funcoes.inc";
			include "menu.inc";
			if(file_exists("agenda.xml")){
				include "tabela_agenda.inc";
			}else{
				echo "<section>
						<h2>Nenhum agendamento cadastrado.</h2>
					</section>";
			}
		?>
	</body>
</html>		
		
		
		