<?php

	function ler_dados_agenda(){
		$nome = $_POST["nome"];
		$data = $_POST["data"];
		$hora = $_POST["hora"];
		$telefone = $_POST["telefone"];
		$email = $_POST["email"];
			if(!file_exists("agenda.xml")){
				$xml =
					'<?xml version="1.0" encoding="UTF-8" ?>
					<agendas>
						<agenda>
							<nome>'.$nome.'</nome>
							<data>'.$data.'</data>
							<hora>'.$hora.'</hora>
							<telefone>'.$telefone.'</telefone>
							<email>'.$email.'</email>
						</agenda>
					</agendas>';
					file_put_contents("agenda.xml", $xml);
					
			}else{
				$xml = simplexml_load_file("agenda.xml");
				$agenda = $xml->addChild("agenda");
				$agenda->addChild("nome", $nome);
				$agenda->addChild("data", $data);
				$agenda->addChild("hora", $hora);
				$agenda->addChild("telefone", $telefone);
				$agenda->addChild("email", $email);
				file_put_contents("agenda.xml", $xml->asXML());
			}
			echo "<section>
					<h2>agendamento cadastrado com sucesso.</h2>
				</section>";
		}
	function lista_agenda(){
		$xml = simplexml_load_file("agenda.xml");
		foreach($xml->children() as $agenda){
			echo "<tr>
					<td>$agenda->nome</td>
					<td>$agenda->data</td>
					<td>$agenda->hora</td>
					<td>$agenda->telefone</td>
					<td>$agenda->email</td>
				</tr>";
		}
	}
?>