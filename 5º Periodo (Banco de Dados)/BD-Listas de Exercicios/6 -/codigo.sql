-- MySQL Script generated by MySQL Workbench
-- Sun Apr 17 10:15:43 2022
-- Model: New Model    Version: 1.0
-- MySQL Workbench Forward Engineering

SET @OLD_UNIQUE_CHECKS=@@UNIQUE_CHECKS, UNIQUE_CHECKS=0;
SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0;
SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='ONLY_FULL_GROUP_BY,STRICT_TRANS_TABLES,NO_ZERO_IN_DATE,NO_ZERO_DATE,ERROR_FOR_DIVISION_BY_ZERO,NO_ENGINE_SUBSTITUTION';

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema mydb
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `mydb` DEFAULT CHARACTER SET utf8 ;
-- -----------------------------------------------------
-- Schema questao6
-- -----------------------------------------------------
-- -----------------------------------------------------
-- Schema atividade6
-- -----------------------------------------------------

-- -----------------------------------------------------
-- Schema atividade6
-- -----------------------------------------------------
CREATE SCHEMA IF NOT EXISTS `atividade6` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_0900_ai_ci ;
USE `mydb` ;

-- -----------------------------------------------------
-- Table `mydb`.`tb_modalidade`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`tb_modalidade` (
  `id` INT NOT NULL,
  `tenis` DECIMAL(45) NOT NULL,
  `ginastica` VARCHAR(45) NOT NULL,
  `natacao` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`id`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`tb_socio`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`tb_socio` (
  `codigoDeSocio` INT NOT NULL,
  `nome` VARCHAR(45) NOT NULL,
  `dataDeAdmissao` DATE NOT NULL,
  `numeroDaIdentidade` INT NOT NULL,
  `dataDeNascimento` VARCHAR(45) NOT NULL,
  `endereco` VARCHAR(45) NOT NULL,
  `telefone` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`codigoDeSocio`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `mydb`.`horarios`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `mydb`.`horarios` (
  `id` INT NOT NULL,
  `manha` VARCHAR(45) NOT NULL,
  `tarde` VARCHAR(45) NOT NULL,
  `noite` VARCHAR(45) NOT NULL,
  PRIMARY KEY (`id`))
ENGINE = InnoDB;

USE `atividade6` ;

-- -----------------------------------------------------
-- Table `atividade6`.`socio`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `atividade6`.`socio` (
  `ID` INT NOT NULL,
  `nome` VARCHAR(45) NOT NULL,
  `data` DATETIME NOT NULL,
  `n_identidade` INT NOT NULL,
  `endereco` VARCHAR(45) NOT NULL,
  `telefone` INT NOT NULL,
  PRIMARY KEY (`ID`))
ENGINE = InnoDB
DEFAULT CHARACTER SET = utf8mb4
COLLATE = utf8mb4_0900_ai_ci;


-- -----------------------------------------------------
-- Table `atividade6`.`modalidades`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `atividade6`.`modalidades` (
  `idmodalidades` INT NOT NULL,
  `natacao` VARCHAR(45) NOT NULL,
  `futebol` VARCHAR(45) NOT NULL,
  `tenis` VARCHAR(45) NOT NULL,
  `ginastica` VARCHAR(45) NOT NULL,
  `socio_ID` INT NOT NULL,
  PRIMARY KEY (`idmodalidades`),
  INDEX `fk_modalidades_socio1_idx` (`socio_ID` ASC) VISIBLE,
  CONSTRAINT `fk_modalidades_socio1`
    FOREIGN KEY (`socio_ID`)
    REFERENCES `atividade6`.`socio` (`ID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `atividade6`.`horarios`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `atividade6`.`horarios` (
  `matutino` INT NOT NULL,
  `vespertino` VARCHAR(45) NOT NULL,
  `noturno` VARCHAR(45) NOT NULL,
  `modalidades_idmodalidades` INT NOT NULL,
  PRIMARY KEY (`matutino`),
  INDEX `fk_horarios_modalidades1_idx` (`modalidades_idmodalidades` ASC) VISIBLE,
  CONSTRAINT `fk_horarios_modalidades1`
    FOREIGN KEY (`modalidades_idmodalidades`)
    REFERENCES `atividade6`.`modalidades` (`idmodalidades`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `atividade6`.`mensalidade`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `atividade6`.`mensalidade` (
  `idmensalidade` INT NOT NULL,
  `socio` FLOAT NOT NULL,
  `naoSocio` FLOAT NOT NULL,
  PRIMARY KEY (`idmensalidade`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `atividade6`.`financeiro`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `atividade6`.`financeiro` (
  `idfinanceiro` INT NOT NULL,
  `mensalidade_idmensalidade` INT NOT NULL,
  `tb_socio_codigoDeSocio` INT NOT NULL,
  `marcacao_marcacao` INT NOT NULL,
  PRIMARY KEY (`idfinanceiro`),
  INDEX `fk_financeiro_mensalidade2_idx` (`mensalidade_idmensalidade` ASC) VISIBLE,
  INDEX `fk_financeiro_tb_socio1_idx` (`tb_socio_codigoDeSocio` ASC) VISIBLE,
  INDEX `fk_financeiro_marcacao1_idx` (`marcacao_marcacao` ASC) VISIBLE,
  CONSTRAINT `fk_financeiro_mensalidade2`
    FOREIGN KEY (`mensalidade_idmensalidade`)
    REFERENCES `atividade6`.`mensalidade` (`idmensalidade`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_financeiro_tb_socio1`
    FOREIGN KEY (`tb_socio_codigoDeSocio`)
    REFERENCES `mydb`.`tb_socio` (`codigoDeSocio`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_financeiro_marcacao1`
    FOREIGN KEY (`marcacao_marcacao`)
    REFERENCES `atividade6`.`marcacao` (`marcacao`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `atividade6`.`marcacao`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `atividade6`.`marcacao` (
  `marcacao` INT NOT NULL,
  `horarios_id` INT NOT NULL,
  `tb_modalidade_id` INT NOT NULL,
  PRIMARY KEY (`marcacao`),
  INDEX `fk_marcacao_horarios1_idx` (`horarios_id` ASC) VISIBLE,
  INDEX `fk_marcacao_tb_modalidade1_idx` (`tb_modalidade_id` ASC) VISIBLE,
  CONSTRAINT `fk_marcacao_horarios1`
    FOREIGN KEY (`horarios_id`)
    REFERENCES `mydb`.`horarios` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_marcacao_tb_modalidade1`
    FOREIGN KEY (`tb_modalidade_id`)
    REFERENCES `mydb`.`tb_modalidade` (`id`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `atividade6`.`mensalidade`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `atividade6`.`mensalidade` (
  `idmensalidade` INT NOT NULL,
  `socio` FLOAT NOT NULL,
  `naoSocio` FLOAT NOT NULL,
  PRIMARY KEY (`idmensalidade`))
ENGINE = InnoDB;


-- -----------------------------------------------------
-- Table `atividade6`.`financeiro`
-- -----------------------------------------------------
CREATE TABLE IF NOT EXISTS `atividade6`.`financeiro` (
  `idfinanceiro` INT NOT NULL,
  `mensalidade_idmensalidade` INT NOT NULL,
  `tb_socio_codigoDeSocio` INT NOT NULL,
  `marcacao_marcacao` INT NOT NULL,
  PRIMARY KEY (`idfinanceiro`),
  INDEX `fk_financeiro_mensalidade2_idx` (`mensalidade_idmensalidade` ASC) VISIBLE,
  INDEX `fk_financeiro_tb_socio1_idx` (`tb_socio_codigoDeSocio` ASC) VISIBLE,
  INDEX `fk_financeiro_marcacao1_idx` (`marcacao_marcacao` ASC) VISIBLE,
  CONSTRAINT `fk_financeiro_mensalidade2`
    FOREIGN KEY (`mensalidade_idmensalidade`)
    REFERENCES `atividade6`.`mensalidade` (`idmensalidade`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_financeiro_tb_socio1`
    FOREIGN KEY (`tb_socio_codigoDeSocio`)
    REFERENCES `mydb`.`tb_socio` (`codigoDeSocio`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION,
  CONSTRAINT `fk_financeiro_marcacao1`
    FOREIGN KEY (`marcacao_marcacao`)
    REFERENCES `atividade6`.`marcacao` (`marcacao`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION)
ENGINE = InnoDB;


SET SQL_MODE=@OLD_SQL_MODE;
SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS;
SET UNIQUE_CHECKS=@OLD_UNIQUE_CHECKS;
