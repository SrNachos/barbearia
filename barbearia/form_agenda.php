<!DOCTYPE html>
<html lang="pt-BR">
	<head>
		<meta charset="utf-8">
		<title>barbearia</title>
		<link rel="stylesheet">
	</head>
	<body>
		<?php
			include "funcoes.inc";
			include "menu.inc";
			if(empty($_POST)){
				include "form_agenda.inc";
			}else{
				ler_dados_agenda();
			}
		?>	
	</body>
</html>





