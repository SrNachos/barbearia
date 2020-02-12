<section>
	<form action="form_agenda.php" method="post">
		<fieldset>
			<legend>Cadastro de agendamento</legend>
			<p>
				<input type="text" name="nome" size="30" placeholder="nome."
				/>
			</p>
			<p>
				<input type="email" name="email" size="30" placeholder="email."
				/>	
			</p>
			<p>
				<input type="text" name="telefone" placeholder="telefone."
				/>
			</p>
			<p>
				<label>data:</label>
				<input type="date" name="data" size="30"
				/>
			</p>
			<p>
				<input type="text" name="hora" size="5" placeholder="hora."
				/>
			</p>
			<input type="submit" value="Enviar"/>
		</fieldset>
	</form>
</section>