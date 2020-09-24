SET GLOBAL log_bin_trust_function_creators = 1;
SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='TRADITIONAL';

CREATE SCHEMA IF NOT EXISTS `laundry` DEFAULT CHARACTER SET cp1250 COLLATE cp1250_general_ci ;
USE `laundry`;

-- -----------------------------------------------------
-- Table `laundry`.`Anagrafica`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `laundry`.`Anagrafica` ;

CREATE  TABLE IF NOT EXISTS `laundry`.`Anagrafica` (
  `IDUtente` INT UNSIGNED NOT NULL COMMENT 'Identificativo univoco per ogni cliente.' ,
  `Nome` VARCHAR(45) NOT NULL ,
  `Cognome` VARCHAR(45) NOT NULL ,
  `CodiceFiscaleIva` VARCHAR(30) NULL ,
  `Indirizzo` VARCHAR(100) NULL ,
  `Telefono` VARCHAR(30) NOT NULL ,
  `Cellulare` VARCHAR(30) NULL ,
  `Email` VARCHAR(40) NULL ,
  `DataRegistrazione` DATETIME NULL ,
  `FlagAttivo` TINYINT(1) NOT NULL DEFAULT 1 COMMENT 'Valore boolean che indica se attivo o meno.\n1 = SI, 0 = NO' ,
  PRIMARY KEY (`IDUtente`) )
ENGINE = InnoDB
COMMENT = 'Gestione dei clienti.';

CREATE INDEX `FiltroCognome` ON `laundry`.`Anagrafica` (`Cognome` ASC) ;

CREATE INDEX `FiltroNome` ON `laundry`.`Anagrafica` (`Nome` ASC) ;

CREATE INDEX `FiltroNomeCognome` ON `laundry`.`Anagrafica` (`Cognome` ASC, `Nome` ASC) ;

CREATE INDEX `FiltroCodiceFiscaleIva` ON `laundry`.`Anagrafica` (`CodiceFiscaleIva` ASC) ;


-- -----------------------------------------------------
-- Table `laundry`.`StatoCommessa`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `laundry`.`StatoCommessa` ;

CREATE  TABLE IF NOT EXISTS `laundry`.`StatoCommessa` (
  `IDStato` SMALLINT NOT NULL ,
  `Descrizione` VARCHAR(60) NOT NULL ,
  PRIMARY KEY (`IDStato`) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `laundry`.`Commessa`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `laundry`.`Commessa` ;

CREATE  TABLE IF NOT EXISTS `laundry`.`Commessa` (
  `IDCommessa` INT UNSIGNED NOT NULL ,
  `Anagrafica_IDUtente` INT UNSIGNED NOT NULL ,
  `DataCreazione` DATETIME NULL ,
  `DataConsegna` DATETIME NULL ,
  `Ammontare` DECIMAL(5,2) NOT NULL ,
  `TipoPagamento` BIT NOT NULL DEFAULT 0 COMMENT 'Tipo di pagamento per la commessa:\n\n0 = anticipato\n1 = consegna\n' ,
  `Stato` SMALLINT NOT NULL DEFAULT 0 COMMENT 'Ciclo di vita della commessa:\n\n0 = accettazione\n1 = lavorazione\n2 = pronto\n3 = chiuso' ,
  PRIMARY KEY (`IDCommessa`, `Anagrafica_IDUtente`) ,
  CONSTRAINT `fk_Commessa_Anagrafica`
    FOREIGN KEY (`Anagrafica_IDUtente` )
    REFERENCES `laundry`.`Anagrafica` (`IDUtente` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Commessa_StatoCommessa`
    FOREIGN KEY (`Stato` )
    REFERENCES `laundry`.`StatoCommessa` (`IDStato` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
COMMENT = 'Rappresenta la consegna della merce da parte del cliente.';

CREATE INDEX `fk_Commessa_Anagrafica` ON `laundry`.`Commessa` (`Anagrafica_IDUtente` ASC) ;

CREATE INDEX `FiltroDataCreazione` ON `laundry`.`Commessa` (`DataCreazione` ASC) ;

CREATE INDEX `FiltroTipoPagamento` ON `laundry`.`Commessa` (`TipoPagamento` ASC) ;

CREATE INDEX `fk_Commessa_StatoCommessa` ON `laundry`.`Commessa` (`Stato` ASC) ;


-- -----------------------------------------------------
-- Table `laundry`.`StatoLotto`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `laundry`.`StatoLotto` ;

CREATE  TABLE IF NOT EXISTS `laundry`.`StatoLotto` (
  `IDStato` SMALLINT NOT NULL ,
  `Descrizione` VARCHAR(60) NOT NULL ,
  PRIMARY KEY (`IDStato`) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `laundry`.`Lotto`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `laundry`.`Lotto` ;

CREATE  TABLE IF NOT EXISTS `laundry`.`Lotto` (
  `IDLotto` INT NOT NULL ,
  `Commessa_IDCommessa` INT UNSIGNED NOT NULL ,
  `Anagrafica_IDUtente` INT UNSIGNED NOT NULL ,
  `Ammontare` DECIMAL(5,2) NOT NULL ,
  `FlagPagato` TINYINT(1) NOT NULL DEFAULT false COMMENT 'Se Commessa.TipoPagamento = 0, cioè pagamento anticipato, è sempre impostato a 1 = SI.\nSe Commessa.TipoPagamento = 1, coè da pagare alla consegna, è impostato a 0 = NO.\n' ,
  `Stato` SMALLINT NOT NULL DEFAULT 0 ,
  PRIMARY KEY (`IDLotto`, `Commessa_IDCommessa`, `Anagrafica_IDUtente`) ,
  CONSTRAINT `fk_Lotto_Commessa`
    FOREIGN KEY (`Commessa_IDCommessa` , `Anagrafica_IDUtente` )
    REFERENCES `laundry`.`Commessa` (`IDCommessa` , `Anagrafica_IDUtente` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Lotto_StatoLotto`
    FOREIGN KEY (`Stato` )
    REFERENCES `laundry`.`StatoLotto` (`IDStato` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB
COMMENT = 'Rappresenta nella commessa un gruppo di 4 pezzi.';

CREATE INDEX `fk_Lotto_Commessa` ON `laundry`.`Lotto` (`Commessa_IDCommessa` ASC, `Anagrafica_IDUtente` ASC) ;

CREATE INDEX `FiltroPagato` ON `laundry`.`Lotto` (`FlagPagato` ASC) ;

CREATE UNIQUE INDEX `FiltroCommAnaLottoStato` ON `laundry`.`Lotto` (`IDLotto` ASC, `Commessa_IDCommessa` ASC, `Anagrafica_IDUtente` ASC, `Stato` ASC) ;

CREATE INDEX `FiltroCommAna` ON `laundry`.`Lotto` (`Anagrafica_IDUtente` ASC, `Commessa_IDCommessa` ASC) ;

CREATE INDEX `FiltroCommAnaStato` ON `laundry`.`Lotto` (`Commessa_IDCommessa` ASC, `Anagrafica_IDUtente` ASC, `Stato` ASC) ;

CREATE INDEX `fk_Lotto_StatoLotto` ON `laundry`.`Lotto` (`Stato` ASC) ;


-- -----------------------------------------------------
-- Table `laundry`.`DescrizionePezzo`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `laundry`.`DescrizionePezzo` ;

CREATE  TABLE IF NOT EXISTS `laundry`.`DescrizionePezzo` (
  `IDDescrizione` INT NOT NULL AUTO_INCREMENT ,
  `Descrizione` VARCHAR(100) NOT NULL ,
  PRIMARY KEY (`IDDescrizione`) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `laundry`.`StatoPezzo`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `laundry`.`StatoPezzo` ;

CREATE  TABLE IF NOT EXISTS `laundry`.`StatoPezzo` (
  `IDStato` TINYINT(1) NOT NULL ,
  `Descrizione` VARCHAR(60) NOT NULL ,
  PRIMARY KEY (`IDStato`) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `laundry`.`Pezzo`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `laundry`.`Pezzo` ;

CREATE  TABLE IF NOT EXISTS `laundry`.`Pezzo` (
  `IDPezzo` INT NOT NULL ,
  `Lotto_IDLotto` INT NOT NULL ,
  `Commessa_IDCommessa` INT UNSIGNED NOT NULL ,
  `Anagrafica_IDUtente` INT UNSIGNED NOT NULL ,
  `StoricoPrezzo` DECIMAL(5,2) NOT NULL ,
  `StoricoTipoAzione` VARCHAR(60) NOT NULL ,
  `DescrizionePezzo_IDDescrizione` INT NOT NULL ,
  `Stato` TINYINT(1) NOT NULL DEFAULT 0 ,
  PRIMARY KEY (`IDPezzo`, `Lotto_IDLotto`, `Commessa_IDCommessa`, `Anagrafica_IDUtente`) ,
  CONSTRAINT `fk_Pezzo_Lotto`
    FOREIGN KEY (`Lotto_IDLotto` , `Commessa_IDCommessa` , `Anagrafica_IDUtente` )
    REFERENCES `laundry`.`Lotto` (`IDLotto` , `Commessa_IDCommessa` , `Anagrafica_IDUtente` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Pezzo_DescrizionePezzo`
    FOREIGN KEY (`DescrizionePezzo_IDDescrizione` )
    REFERENCES `laundry`.`DescrizionePezzo` (`IDDescrizione` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_Pezzo_StatoPezzo`
    FOREIGN KEY (`Stato` )
    REFERENCES `laundry`.`StatoPezzo` (`IDStato` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `fk_Pezzo_Lotto` ON `laundry`.`Pezzo` (`Lotto_IDLotto` ASC, `Commessa_IDCommessa` ASC, `Anagrafica_IDUtente` ASC) ;

CREATE INDEX `fk_Pezzo_DescrizionePezzo` ON `laundry`.`Pezzo` (`DescrizionePezzo_IDDescrizione` ASC) ;

CREATE INDEX `FiltroCommAnaLotto` ON `laundry`.`Pezzo` (`Commessa_IDCommessa` ASC, `Anagrafica_IDUtente` ASC, `Lotto_IDLotto` ASC) ;

CREATE INDEX `FiltroCommAnaLottoStato` ON `laundry`.`Pezzo` (`Lotto_IDLotto` ASC, `Commessa_IDCommessa` ASC, `Anagrafica_IDUtente` ASC, `Stato` ASC) ;

CREATE INDEX `fk_Pezzo_StatoPezzo` ON `laundry`.`Pezzo` (`Stato` ASC) ;


-- -----------------------------------------------------
-- Table `laundry`.`CategoriaPezzo`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `laundry`.`CategoriaPezzo` ;

CREATE  TABLE IF NOT EXISTS `laundry`.`CategoriaPezzo` (
  `IDCategoria` SMALLINT NOT NULL AUTO_INCREMENT ,
  `Descrizione` VARCHAR(30) NOT NULL ,
  `FlagAttivo` TINYINT(1) NOT NULL DEFAULT 1 ,
  PRIMARY KEY (`IDCategoria`) )
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `laundry`.`TastierinoPezzo`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `laundry`.`TastierinoPezzo` ;

CREATE  TABLE IF NOT EXISTS `laundry`.`TastierinoPezzo` (
  `IDTastierino` INT NOT NULL AUTO_INCREMENT ,
  `DescrizionePezzo_IDDescrizione` INT NOT NULL ,
  `CategoriaPezzo_IDCategoria` SMALLINT NOT NULL ,
  `Icona` VARCHAR(150) NOT NULL ,
  `FlagAttivo` TINYINT(1) NOT NULL DEFAULT true ,
  PRIMARY KEY (`IDTastierino`) ,
  CONSTRAINT `fk_TastierinoPezzo_DescrizionePezzo`
    FOREIGN KEY (`DescrizionePezzo_IDDescrizione` )
    REFERENCES `laundry`.`DescrizionePezzo` (`IDDescrizione` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_TastierinoPezzo_CategoriaPezzo`
    FOREIGN KEY (`CategoriaPezzo_IDCategoria` )
    REFERENCES `laundry`.`CategoriaPezzo` (`IDCategoria` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `fk_TastierinoPezzo_DescrizionePezzo` ON `laundry`.`TastierinoPezzo` (`DescrizionePezzo_IDDescrizione` ASC) ;

CREATE INDEX `FiltroFlagAttivo` ON `laundry`.`TastierinoPezzo` (`FlagAttivo` ASC) ;

CREATE INDEX `fk_TastierinoPezzo_CategoriaPezzo` ON `laundry`.`TastierinoPezzo` (`CategoriaPezzo_IDCategoria` ASC) ;


-- -----------------------------------------------------
-- Table `laundry`.`TipoAzionePezzo`
-- -----------------------------------------------------
DROP TABLE IF EXISTS `laundry`.`TipoAzionePezzo` ;

CREATE  TABLE IF NOT EXISTS `laundry`.`TipoAzionePezzo` (
  `IDTipoAzione` INT NOT NULL AUTO_INCREMENT ,
  `TastierinoPezzo_IDTastierino` INT NOT NULL ,
  `Descrizione` VARCHAR(60) NOT NULL ,
  `Prezzo` DECIMAL(5,2) NOT NULL ,
  `FlagAttivo` TINYINT(1) NOT NULL DEFAULT 1 ,
  PRIMARY KEY (`IDTipoAzione`, `TastierinoPezzo_IDTastierino`) ,
  CONSTRAINT `fk_TipoAzionePezzo_TastierinoPezzo`
    FOREIGN KEY (`TastierinoPezzo_IDTastierino` )
    REFERENCES `laundry`.`TastierinoPezzo` (`IDTastierino` )
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;

CREATE INDEX `fk_TipoAzionePezzo_TastierinoPezzo` ON `laundry`.`TipoAzionePezzo` (`TastierinoPezzo_IDTastierino` ASC) ;


DELIMITER //
DROP function IF EXISTS `laundry`.`sp_getNewIDUtente` //
CREATE FUNCTION `laundry`.`sp_getNewIDUtente` () RETURNS INT
BEGIN
  declare retMax int default 0;
  SELECT IFNULL(MAX(IDUtente), retMax) INTO retMax FROM Anagrafica;
  return retMax + 1;
END//
DROP function IF EXISTS `laundry`.`sp_getNewIDCommessa` //
CREATE FUNCTION `laundry`.`sp_getNewIDCommessa` (IDUtente INT) RETURNS INT
BEGIN
    declare retMax int default 0;
    SELECT IFNULL(MAX(IDCommessa), retMax) INTO retMax FROM Commessa WHERE Anagrafica_IDUtente = IDUtente;
    return retMax + 1;
END//
DROP function IF EXISTS `laundry`.`sp_getNewIDLotto` //
CREATE FUNCTION `laundry`.`sp_getNewIDLotto` (IDUtente INT, IDCommessa INT) RETURNS INT
BEGIN
    declare retMax int default 0;
    SELECT IFNULL(MAX(IDLotto), retMax) INTO retMax FROM Lotto 
        WHERE Anagrafica_IDUtente = IDUtente AND Commessa_IDCommessa = IDCommessa;
    return retMax + 1;
END//
DROP function IF EXISTS `laundry`.`sp_getNewIDPezzo` //
CREATE FUNCTION `laundry`.`sp_getNewIDPezzo` (IDUtente INT, IDCommessa INT, IDLotto INT) RETURNS INT
BEGIN
    declare retMax int default 0;
    SELECT IFNULL(MAX(IDPezzo), retMax) INTO retMax FROM Pezzo 
        WHERE Anagrafica_IDUtente = IDUtente AND Commessa_IDCommessa = IDCommessa AND Lotto_IDLotto = IDLotto;
    return retMax + 1;
END//
DROP function IF EXISTS `laundry`.`sp_insertNewUtente` //
CREATE FUNCTION `laundry`.`sp_insertNewUtente` (pNome VARCHAR(45), 
                                              pCognome VARCHAR(45),
                                              pCodiceFiscaleIva VARCHAR(30),
                                              pIndirizzo VARCHAR(100),
                                              pTelefono VARCHAR(30),
                                              pCellulare VARCHAR(30),
                                              pEmail VARCHAR(40)) RETURNS INT
BEGIN
    declare newID int;    
    
    SET newID = sp_getNewIDUtente();
    INSERT INTO Anagrafica (IDUtente, Nome, Cognome, CodiceFiscaleIva, Indirizzo, Telefono, Cellulare, Email)
        VALUES (newID, pNome, pCognome, pCodiceFiscaleIva, pIndirizzo, pTelefono, pCellulare, pEmail);
    IF ROW_COUNT() = 1 THEN
        RETURN newID; /* ritorna l'ID del nuovo cliente inserito */
    ELSE
        RETURN 0; /* indica che non è stato inserito il nuovo cliente */
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_insertNewCommessa` //
CREATE FUNCTION `laundry`.`sp_insertNewCommessa` (IDUtente INT,
                                                  DataConsegna DATETIME,
                                                  Ammontare DECIMAL(5, 2),
                                                  TipoPagamento BIT) RETURNS INT
BEGIN
    declare newID int;
    
    SET newID = sp_getNewIDCommessa(IDUtente);
    INSERT INTO Commessa (IDCommessa, Anagrafica_IDUtente, DataConsegna, Ammontare, TipoPagamento)
        VALUES (newID, IDUtente, DataConsegna, Ammontare, TipoPagamento);
    IF ROW_COUNT() = 1 THEN
        RETURN newID;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_insertNewLotto` //
CREATE FUNCTION `laundry`.`sp_insertNewLotto` (IDUtente INT, 
                                               ID_Commessa INT,
                                               Ammontare DECIMAL(5, 2)) RETURNS BOOL
BEGIN
    declare newID int default 0;
    declare retTipoPagamento bit;
    declare newFlagPagato bool default 0;
    /*
    Se TipoPagamento = 0 (anticipato), FlagPagato viene impostato su uno (SI); se
    TipoPagamento = 1 (consegna) FlagPagato verrà impostato su zero (NO)
    */
    SELECT TipoPagamento INTO retTipoPagamento FROM Commessa WHERE IDCommessa = ID_Commessa AND Anagrafica_IDUtente = IDUtente;
    IF retTipoPagamento = 0 THEN
        set newFlagPagato = 1;
    ELSE
        set newFlagPagato = 0;
    END IF;
    SET newID = sp_getNewIDLotto(IDUtente, ID_Commessa); -- prende il nuovo id da utilizzare per il nuovo lotto
    INSERT INTO Lotto (IDLotto, Commessa_IDCommessa, Anagrafica_IDUtente, Ammontare, FlagPagato)
        VALUES (newID, ID_Commessa, IDUtente, Ammontare, newFlagPagato);
    IF ROW_COUNT() = 1 THEN
        RETURN newID;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_insertNewPezzo` //
CREATE FUNCTION `laundry`.`sp_insertNewPezzo` (IDUtente INT, 
                                               IDCommessa INT,
                                               IDLotto INT,                                               
                                               IDDescrizionePezzo INT,
                                               IDTipoAzione INT,
                                               IDTastierino INT) RETURNS INT
BEGIN
    DECLARE newID INT DEFAULT 0;
    DECLARE maxPezziLotto INT DEFAULT 0;
    DECLARE storicoDescTipoAzione VARCHAR(60);
    DECLARE storicoPrezzoTipoAzione DECIMAL(5, 2);
    DECLARE esitoChiamataStorico BOOL DEFAULT 0;
    /*
    -- Reperisce il totale dei pezzi attualmente inseriti per questo lotto e commessa:
    */
    SELECT COUNT(*) INTO maxPezziLotto FROM Pezzo WHERE Lotto_IDLotto = IDLotto 
        AND Commessa_IDCommessa = IDCommessa AND Anagrafica_IDUtente = IDUtente;
    IF maxPezziLotto = 4 THEN /* è stato raggiunto il massimo di pezzi all'interno del lotto */
        RETURN -1;
    END IF;
    SET newID = sp_getNewIDPezzo(IDUtente, IDCommessa, IDLotto);
    /*
    -- Reperisce il prezzo e la descrizione per lo storico del pezzo:
    */
    CALL sp_insertStoricoPezzo(IDTipoAzione, IDTastierino, storicoDescTipoAzione, storicoPrezzoTipoAzione, esitoChiamataStorico);
    IF esitoChiamataStorico = 0 THEN /* indica che non sono stati reperiti dati validi */
        RETURN esitoChiamataStorico;
    END IF;
    INSERT INTO Pezzo (IDPezzo, Lotto_IDLotto, Commessa_IDCommessa, Anagrafica_IDUtente, DescrizionePezzo_IDDescrizione,
                        StoricoPrezzo, StoricoTipoAzione)
        VALUES (newID, IDLotto, IDCommessa, IDUtente, IDDescrizionePezzo, storicoPrezzoTipoAzione, storicoDescTipoAzione);
    IF ROW_COUNT() = 1 THEN
        RETURN newID;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_insertNewDesc` //
CREATE FUNCTION `laundry`.`sp_insertNewDesc` (newDescrizione VARCHAR(100)) RETURNS BOOL
BEGIN
    INSERT INTO DescrizionePezzo (Descrizione) VALUES (newDescrizione);
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_updateDesc` //
CREATE FUNCTION `laundry`.`sp_updateDesc` (ID INT, newDescrizione VARCHAR(100)) RETURNS BOOL
BEGIN
    UPDATE DescrizionePezzo SET Descrizione = newDescrizione WHERE IDDescrizione = ID;
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_setPezzoStato` //
CREATE FUNCTION `laundry`.`sp_setPezzoStato` (IDUtente INT, IDCommessa INT, IDLotto INT, ID_Pezzo INT, IDStato BOOL) RETURNS BOOL
BEGIN
    UPDATE Pezzo SET Stato = IDStato WHERE IDPezzo = ID_Pezzo AND Lotto_IDLotto = IDLotto 
        AND Commessa_IDCommessa = IDCommessa AND Anagrafica_IDUtente = IDUtente;
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_setLottoStato` //
CREATE FUNCTION `laundry`.`sp_setLottoStato` (IDUtente INT, IDCommessa INT, ID_Lotto INT, IDStato SMALLINT) RETURNS BOOL
BEGIN
    IF IDStato = 3 THEN /* se lo stato è di "chiusura", allora imposta il flag di pagato */
        UPDATE Lotto SET Stato = IDStato, FlagPagato = 1 WHERE IDLotto = ID_Lotto AND Commessa_IDCommessa = IDCommessa AND Anagrafica_IDUtente = IDUtente;
    ELSE
        UPDATE Lotto SET Stato = IDStato WHERE IDLotto = ID_Lotto AND Commessa_IDCommessa = IDCommessa AND Anagrafica_IDUtente = IDUtente;
    END IF;
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_setCommessaStato` //
CREATE FUNCTION `laundry`.`sp_setCommessaStato` (IDUtente INT, ID_Commessa INT, IDStato SMALLINT) RETURNS BOOL
BEGIN
    UPDATE Commessa SET Stato = IDStato WHERE IDCommessa = ID_Commessa AND Anagrafica_IDUtente = IDUtente;
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_getTotalFromLotto` //
CREATE FUNCTION `laundry`.`sp_getTotalFromLotto` (IDUtente INT, IDCommessa INT, IDStato SMALLINT) RETURNS INT
BEGIN
    declare totLotti int default 0;
    
    IF IDStato >= 0 THEN /* lo stato passato è valido quindi filtra */
        SELECT COUNT(*) INTO totLotti FROM Lotto WHERE Commessa_IDCommessa = IDCommessa 
            AND Anagrafica_IDUtente = IDUtente AND Stato = IDStato;
    ELSE
        SELECT COUNT(*) INTO totLotti FROM Lotto WHERE Commessa_IDCommessa = IDCommessa AND Anagrafica_IDUtente = IDUtente;
    END IF;
    RETURN totLotti;
END//
DROP function IF EXISTS `laundry`.`sp_getTotalFromPezzo` //
CREATE FUNCTION `laundry`.`sp_getTotalFromPezzo` (IDUtente INT, IDCommessa INT, IDLotto INT, IDStato BOOL) RETURNS INT
BEGIN
    declare totPezzi int default 0;
    
    IF IDStato >= 0 THEN /* lo stato passato è valido quindi filtra */
        SELECT COUNT(*) INTO totPezzi FROM Pezzo WHERE Commessa_IDCommessa = IDCommessa 
                    AND Anagrafica_IDUtente = IDUtente AND Lotto_IDLotto = IDLotto AND Stato = IDStato;
    ELSE
        SELECT COUNT(*) INTO totPezzi FROM Pezzo WHERE Commessa_IDCommessa = IDCommessa 
                    AND Anagrafica_IDUtente = IDUtente AND Lotto_IDLotto = IDLotto;
    END IF;
    RETURN totPezzi;
END//
DROP function IF EXISTS `laundry`.`sp_updateUtente` //
CREATE FUNCTION `laundry`.`sp_updateUtente` (ID INT, newNome VARCHAR(45),
                                            newCognome VARCHAR(45),
                                            newCodiceFiscaleIva VARCHAR(30),
                                            newIndirizzo VARCHAR(100),
                                            newTelefono VARCHAR(30),
                                            newCellulare VARCHAR(30),
                                            newMail VARCHAR(40),
                                            Attivo BOOL) RETURNS BOOL
BEGIN
    UPDATE Anagrafica 
    SET Nome = newNome, Cognome = newCognome, Indirizzo = newIndirizzo, Telefono = newTelefono, 
        Cellulare = newCellulare, email = newMail, CodiceFiscaleIva = newCodiceFiscaleIva, FlagAttivo = Attivo
    WHERE IDUtente = ID;
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_updateCommessa` //
CREATE FUNCTION `laundry`.`sp_updateCommessa` (ID_Utente INT, ID_Commessa INT, Data_Consegna DATETIME) RETURNS BOOL
BEGIN
    UPDATE Commessa SET DataConsegna = Data_Consegna WHERE IDCommessa = ID_Commessa AND Anagrafica_IDUtente = ID_Utente;
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_insertNewTastierino` //
CREATE FUNCTION `laundry`.`sp_insertNewTastierino` (IDDescrizione INT, 
                                                    IDCategoria SMALLINT,
                                                    PathIcona VARCHAR(150),
                                                    Attivo BOOL) RETURNS BOOL
BEGIN
    INSERT INTO TastierinoPezzo (DescrizionePezzo_IDDescrizione, CategoriaPezzo_IDCategoria, Icona, FlagAttivo)
    VALUES (IDDescrizione, IDCategoria, PathIcona, Attivo);
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_updateTastierino` //
CREATE FUNCTION `laundry`.`sp_updateTastierino` (ID INT, IDDescrizione INT, IDCategoria SMALLINT,
                                                    PathIcona VARCHAR(150),
                                                    Attivo BOOL) RETURNS BOOL
BEGIN
    UPDATE TastierinoPezzo SET DescrizionePezzo_IDDescrizione = IDDescrizione, CategoriaPezzo_IDCategoria = IDCategoria,
        Icona = PathIcona, FlagAttivo = Attivo WHERE IDTastierino = ID;
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_insertNewCategoriaPezzo` //
CREATE FUNCTION `laundry`.`sp_insertNewCategoriaPezzo` (Descrizione VARCHAR(30)) RETURNS BOOL
BEGIN
    INSERT INTO CategoriaPezzo (Descrizione) VALUES (Descrizione); 
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_updateCategoriaPezzo` //
CREATE FUNCTION `laundry`.`sp_updateCategoriaPezzo` (ID SMALLINT, newDescrizione VARCHAR(30), Attivo BOOL) RETURNS BOOL
BEGIN
    UPDATE CategoriaPezzo SET Descrizione = newDescrizione, FlagAttivo = Attivo WHERE IDCategoria = ID; 
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_insertNewTipoAzionePezzo` //
CREATE FUNCTION `laundry`.`sp_insertNewTipoAzionePezzo` (IDTastierino INT, 
                                                         Descrizione VARCHAR(60), 
                                                         Prezzo DECIMAL(5, 2)) RETURNS BOOL
BEGIN
    INSERT INTO TipoAzionePezzo (TastierinoPezzo_IDTastierino, Descrizione, Prezzo)
    VALUES (IDTastierino, Descrizione, Prezzo);
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_updateTipoAzionePezzo` //
CREATE FUNCTION `laundry`.`sp_updateTipoAzionePezzo` (IDAzione INT, 
                                                      IDTastierino INT, 
                                                      newDescrizione VARCHAR(60), 
                                                      newPrezzo DECIMAL(5, 2),
                                                      Attivo BOOL) RETURNS BOOL
BEGIN
    UPDATE TipoAzionePezzo 
    SET Descrizione = newDescrizione, Prezzo = newPrezzo, FlagAttivo = Attivo
    WHERE IDTipoAzione = IDAzione AND TastierinoPezzo_IDTastierino = IDTastierino;
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP function IF EXISTS `laundry`.`sp_deleteDesc` //
CREATE FUNCTION `laundry`.`sp_deleteDesc` (ID INT) RETURNS BOOL
BEGIN
    DELETE FROM DecrizionePezzo WHERE IDDescrizione = ID;
    IF ROW_COUNT() = 1 THEN
        RETURN 1;
    ELSE
        RETURN 0;
    END IF;
END//
DROP procedure IF EXISTS `laundry`.`sp_insertStoricoPezzo` //
CREATE PROCEDURE `laundry`.`sp_insertStoricoPezzo` (IN TipoAzionePezzo_IDTipoAzione INT,
                                                    IN IDTastierino INT,
                                                    OUT retDescTipoAzione VARCHAR(60),
                                                    OUT retPrezzo DECIMAL(5, 2),
                                                    OUT retEsito BOOL)
BEGIN
    /* reperisce i corrispondenti valori per i campi StoricoXXXXX */
    SELECT Descrizione, Prezzo INTO retDescTipoAzione, retPrezzo 
    FROM TipoAzionePezzo
    WHERE IDTipoAzione = TipoAzionePezzo_IDTipoAzione AND TastierinoPezzo_IDTastierino = IDTastierino;
    IF FOUND_ROWS() = 1 THEN
        SET retEsito = 1;
    ELSE
        SET retEsito = 0;
    END IF;
END//
DROP procedure IF EXISTS `laundry`.`sp_selectUtente` //
CREATE PROCEDURE `laundry`.`sp_selectUtente` (IN searchNome VARCHAR(45), 
                                              IN searchCognome VARCHAR(45),
                                              IN searchCodiceFiscaleIva VARCHAR(30))
BEGIN
    DECLARE isNome BOOL DEFAULT FALSE;
    DECLARE isCognome BOOL DEFAULT FALSE;

    /* CONTROLLA LA RICERCA PER NOME: */
    IF LENGTH(searchNome) > 0 THEN
       SET @tmpWHERE = CONCAT(CONCAT("Nome LIKE '", searchNome), "%' ");
       SET isNome = TRUE;
    ELSE
       SET @tmpWHERE = '';
    END IF;

    /* CONTROLLA LA RICERCA PER COGNOME: */
    IF LENGTH(searchCognome) > 0 THEN
       IF isNome = TRUE THEN
         SET @tmpWHERE = CONCAT(@tmpWHERE, 'AND ');
       END IF;
       SET @tmpWHERE = CONCAT(@tmpWHERE, CONCAT(CONCAT("Cognome LIKE '", searchCognome), "%' "));
       SET isCognome = TRUE;
    END IF;

    /* CONTROLLA LA RICERCA PER CODICE FISCALE O IVA: */
    IF LENGTH(searchCodiceFiscaleIva) > 0 THEN
       IF isNome = TRUE OR isCognome = TRUE THEN
         SET @tmpWHERE = CONCAT(@tmpWHERE, 'AND ');
       END IF;
       SET @tmpWHERE = CONCAT(@tmpWHERE, CONCAT(CONCAT("CodiceFiscaleIva LIKE '", searchCodiceFiscaleIva), "%' "));
    END IF;

    SET @tmpWHERE = CONCAT('SELECT * FROM Anagrafica WHERE ', @tmpWHERE);
    PREPARE stmt FROM @tmpWHERE;
    EXECUTE stmt;
    DEALLOCATE PREPARE stmt;
END//

DELIMITER ;
USE `laundry`;

DELIMITER //

DROP TRIGGER IF EXISTS `laundry`.`controlTextAndDateAnaOnInsert` //
CREATE TRIGGER controlTextAndDateAnaOnInsert BEFORE INSERT ON Anagrafica
    FOR EACH ROW
        BEGIN
            SET NEW.Nome = REPLACE(NEW.Nome, "'", "''"); 
            SET NEW.Cognome = REPLACE(NEW.Cognome, "'", "''"); 
            SET NEW.Indirizzo = REPLACE(NEW.Indirizzo, "'", "''"); 
            SET NEW.Telefono = REPLACE(NEW.Telefono, "'", "''"); 
            SET NEW.Cellulare = REPLACE(NEW.Cellulare, "'", "''"); 
            SET NEW.Email = REPLACE(NEW.Email, "'", "''"); 
            SET NEW.CodiceFiscaleIva = REPLACE(NEW.CodiceFiscaleIva, "'", "");
            SET NEW.DataRegistrazione = SYSDATE();
        END//


DROP TRIGGER IF EXISTS `laundry`.`controlTextAndDateAnaOnUpdate` //
CREATE TRIGGER controlTextAndDateAnaOnUpdate BEFORE UPDATE ON Anagrafica
    FOR EACH ROW
        BEGIN
            SET NEW.Nome = REPLACE(NEW.Nome, "'", "''"); 
            SET NEW.Cognome = REPLACE(NEW.Cognome, "'", "''"); 
            SET NEW.Indirizzo = REPLACE(NEW.Indirizzo, "'", "''"); 
            SET NEW.Telefono = REPLACE(NEW.Telefono, "'", "''"); 
            SET NEW.Cellulare = REPLACE(NEW.Cellulare, "'", "''"); 
            SET NEW.Email = REPLACE(NEW.Email, "'", "''"); 
            SET NEW.CodiceFiscaleIva = REPLACE(NEW.CodiceFiscaleIva, "'", "");
        END//


DELIMITER ;

DELIMITER //

DROP TRIGGER IF EXISTS `laundry`.`insertDateComm` //
CREATE TRIGGER insertDateComm BEFORE INSERT ON Commessa
    FOR EACH ROW 
        BEGIN
            SET NEW.DataCreazione = SYSDATE();
        END//


DELIMITER ;

DELIMITER //

DROP TRIGGER IF EXISTS `laundry`.`controlLottoStatus` //
CREATE TRIGGER controlLottoStatus AFTER UPDATE ON Lotto
    FOR EACH ROW
        BEGIN
            declare retVal bool;
            declare totLotti int default 0;
            declare totLottiCompleti int default 0;
            declare totLottiRitirati int default 0;
            /*
            Reperisce il numero totale di Lotti nella commessa:
            */
            set totLotti = sp_getTotalFromLotto(NEW.Anagrafica_IDUtente, NEW.Commessa_IDCommessa, -1);
            /*
            Reperisce il numero totale di Lotti che sono pronti (valore due)
            */
            set totLottiCompleti = sp_getTotalFromLotto(NEW.Anagrafica_IDUtente, NEW.Commessa_IDCommessa, 2);
            /*
            Reperisce il numero totale di Lotti che sono stati chiusi (valore 3) perchè ritirati:
            */
            set totLottiRitirati = sp_getTotalFromLotto(NEW.Anagrafica_IDUtente, NEW.Commessa_IDCommessa, 3);
            /*
            Controlla se i ritirati e quelli pronti sommati danno il totale dei lotti disponibili: se così imposta 
            lo stato della Commessa a due (pronto).
            Altrimenti controlla se TUTTI gli STATO dei Lotti della commessa sono pronti: se così imposta lo stato di Commessa
            della Commessa al valore due (pronto).
            Altrimenti se TUTTI gli STATO dei Lotti della commessa sono ritirati, pone la Commessa come chiusa.
            */
            IF totLotti = totLottiRitirati THEN
                SET retVal = sp_setCommessaStato(NEW.Anagrafica_IDUtente, NEW.Commessa_IDCommessa, 3);                                                       
            ELSEIF (totLotti = totLottiCompleti) || (totLottiRitirati + totLottiCompleti = totLotti) THEN
                SET retVal = sp_setCommessaStato(NEW.Anagrafica_IDUtente, NEW.Commessa_IDCommessa, 2);                                                       
            ELSEIF NEW.Stato = 1 THEN /* Se l'aggiornamento del Lotto è su lavorazione, viene aggiornato lo Stato di Commessa sul corrispondente valore */
                SET retVal = sp_setCommessaStato(NEW.Anagrafica_IDUtente, NEW.Commessa_IDCommessa, NEW.Stato);                                                       
            END IF;
        END//


DELIMITER ;

DELIMITER //

DROP TRIGGER IF EXISTS `laundry`.`controlPezzoStatus` //
CREATE TRIGGER controlPezzoStatus AFTER UPDATE ON Pezzo
    FOR EACH ROW
        BEGIN
            declare retVal bool;
            declare totPezzi int default 0;
            declare totPezziCompleti int default 0;
            /*
            Reperisce il numero totale di Pezzi nel lotto:
            */
            set totPezzi = sp_getTotalFromPezzo(NEW.Anagrafica_IDUtente, NEW.Commessa_IDCommessa, NEW.Lotto_IDLotto, -1);
            /*
            Reperisce il numero totale di Pezzi che sono pronti (valore uno)
            */
            set totPezziCompleti = sp_getTotalFromPezzo(NEW.Anagrafica_IDUtente, NEW.Commessa_IDCommessa, NEW.Lotto_IDLotto, 1);
            /*
            Controlla se TUTTI gli STATO dei Pezzi del lotto sono pronti: se così imposta lo stato di Lotto 
            al valore due (pronto):
            */
            IF totPezzi = totPezziCompleti THEN
                SET retVal = sp_setLottoStato(NEW.Anagrafica_IDUtente, NEW.Commessa_IDCommessa, NEW.Lotto_IDLotto, 2);
            ELSEIF NEW.Stato = 1 THEN /*Se l'aggiornamento del Pezzo è su pronto, viene aggiornato lo Stato di Lotto su uno*/
                SET retVal = sp_setLottoStato(NEW.Anagrafica_IDUtente, NEW.Commessa_IDCommessa, NEW.Lotto_IDLotto, NEW.Stato);
            END IF;
        END//


DELIMITER ;

DELIMITER //

DROP TRIGGER IF EXISTS `laundry`.`controlTextDesc` //
CREATE TRIGGER controlTextDesc BEFORE INSERT ON DescrizionePezzo
    FOR EACH ROW 
        BEGIN
            SET NEW.Descrizione = REPLACE(NEW.Descrizione, "'", "''");
        END//


DROP TRIGGER IF EXISTS `laundry`.`controlTextDescOnUpd` //
CREATE TRIGGER controlTextDescOnUpd BEFORE UPDATE ON DescrizionePezzo
    FOR EACH ROW 
        BEGIN
            SET NEW.Descrizione = REPLACE(NEW.Descrizione, "'", "''");
        END//


DELIMITER ;

DELIMITER //

DROP TRIGGER IF EXISTS `laundry`.`controlTastierinoOnInsert` //
CREATE TRIGGER controlTastierinoOnInsert BEFORE INSERT ON TastierinoPezzo
FOR EACH ROW 
    BEGIN
        SET NEW.Icona = REPLACE(NEW.ICONA, "'", "''");
    END//


DROP TRIGGER IF EXISTS `laundry`.`controlTastierinoOnUpdate` //
CREATE TRIGGER controlTastierinoOnUpdate BEFORE UPDATE ON TastierinoPezzo
FOR EACH ROW 
    BEGIN
        SET NEW.Icona = REPLACE(NEW.ICONA, "'", "''");
    END//


DELIMITER ;

DELIMITER //

DROP TRIGGER IF EXISTS `laundry`.`controlInsertStatoCommessa` //
CREATE TRIGGER controlInsertStatoCommessa BEFORE INSERT ON StatoCommessa
FOR EACH ROW 
    BEGIN
        SET NEW.Descrizione = REPLACE(NEW.Descrizione, "'", "''");
    END//


DELIMITER ;

DELIMITER //

DROP TRIGGER IF EXISTS `laundry`.`controlInsertStatoLotto` //
CREATE TRIGGER controlInsertStatoLotto BEFORE INSERT ON StatoLotto
FOR EACH ROW 
    BEGIN
        SET NEW.Descrizione = REPLACE(NEW.Descrizione, "'", "''");
    END//


DELIMITER ;

DELIMITER //

DROP TRIGGER IF EXISTS `laundry`.`controlCategoriaPezzoOnIns` //
CREATE TRIGGER controlCategoriaPezzoOnIns BEFORE INSERT ON CategoriaPezzo
FOR EACH ROW
    BEGIN
        SET NEW.Descrizione = REPLACE(NEW.Descrizione, "'", "''");
    END//


DROP TRIGGER IF EXISTS `laundry`.`controlCategoriaPezzoOnUpd` //
CREATE TRIGGER controlCategoriaPezzoOnUpd BEFORE UPDATE ON CategoriaPezzo
FOR EACH ROW
    BEGIN
        SET NEW.Descrizione = REPLACE(NEW.Descrizione, "'", "''");
    END//


DELIMITER ;

DELIMITER //

DROP TRIGGER IF EXISTS `laundry`.`controlTipoAzioneOnInsert` //
CREATE TRIGGER controlTipoAzioneOnInsert BEFORE INSERT ON TipoAzionePezzo
FOR EACH ROW
    BEGIN
        SET NEW.Descrizione = REPLACE(NEW.Descrizione, "'", "''");
    END//


DROP TRIGGER IF EXISTS `laundry`.`controlTipoAzioneOnUpdate` //
CREATE TRIGGER controlTipoAzioneOnUpdate BEFORE UPDATE ON TipoAzionePezzo
FOR EACH ROW
    BEGIN
        SET NEW.Descrizione = REPLACE(NEW.Descrizione, "'", "''");
    END//


DELIMITER ;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
