-- Base de données ReparationsGarage
-- Générée avec GapMEA par Y. Salamone le 03/10/2019

CREATE TABLE `Client`(
	`cliNum` INTEGER,
	`cliNom` VARCHAR(30),
	`cliPrenom` VARCHAR(30),
	`cliRue` VARCHAR(100),
	`cliCP` VARCHAR(5),
	`cliVille` VARCHAR(30),
	`cliTel` VARCHAR(10),
	`cliMobile` VARCHAR(10),
	`cliMail` VARCHAR(50),
	`cliLogin` VARCHAR(30),
	`cliMDP` VARCHAR(255),
	primary key(`cliNum`)
)engine=innodb charset=utf8;

CREATE TABLE `Facture`(
	`factNum` INTEGER,
	`factDate` DATE,
	`factMontant_HT` FLOAT,
	`factMontant_TTC` FLOAT,
	`factPayee` BOOL,
	primary key(`factNum`)
)engine=innodb charset=utf8;

CREATE TABLE `Utilisateur`(
	`userNum` INTEGER auto_increment,
	`userNom` VARCHAR(30),
	`userPrenom` VARCHAR(30),
	`userLogin` VARCHAR(30),
	`userMDP` VARCHAR(255),
	primary key(`userNum`)
)engine=innodb charset=utf8;

CREATE TABLE `Role`(
	`roleNum` INTEGER auto_increment,
	`roleLib` VARCHAR(25),
	primary key(`roleNum`)
)engine=innodb charset=utf8;

CREATE TABLE `Piece`(
	`pieceRef` VARCHAR(10),
	`pieceLib` VARCHAR(100),
	`pieceQteDispo` INTEGER,
	`piecePU_HT` FLOAT,
	`piecePU_TTC` FLOAT,
	primary key(`pieceRef`)
)engine=innodb charset=utf8;

CREATE TABLE `Fournisseur`(
	`fournisseurNum` INTEGER auto_increment,
	`fournisseurNom` VARCHAR(30),
	`fournisseurTel` VARCHAR(10),
	`fournisseurMail` VARCHAR(50),
	primary key(`fournisseurNum`)
)engine=innodb charset=utf8;

CREATE TABLE `User_Role`(
	`roleNum` INTEGER NOT NULL,
	`userNum` INTEGER NOT NULL,
   	foreign key (`roleNum`) references Role(`roleNum`), 
	foreign key (`userNum`) references Utilisateur(`userNum`),
	primary key(`roleNum`,`userNum`)
)engine=innodb charset=utf8;

CREATE TABLE `Commande`(
	`commandeNum` INTEGER,
	`dateLivraison` DATE,
	`fournisseurNum` INTEGER NOT NULL,
   	foreign key (`fournisseurNum`) references Fournisseur(`fournisseurNum`),
	primary key(`commandeNum`)
)engine=innodb charset=utf8;

CREATE TABLE `Contenu`(
	`quantite` INTEGER,
	`commandeNum` INTEGER NOT NULL,
	`pieceRef` VARCHAR(10) NOT NULL,
   	foreign key (`commandeNum`) references Commande(`commandeNum`), 
	foreign key (`pieceRef`) references Piece(`pieceRef`),
	primary key(`commandeNum`,`pieceRef`)
)engine=innodb charset=utf8;

CREATE TABLE `Catalogue`(
	`pieceRefFournisseur` VARCHAR(10),
	`piecePUFournisseur` FLOAT,
	`fournisseurNum` INTEGER NOT NULL,
	`pieceRef` VARCHAR(10) NOT NULL,
   	foreign key (`fournisseurNum`) references Fournisseur(`fournisseurNum`), 
	foreign key (`pieceRef`) references Piece(`pieceRef`),
	primary key(`fournisseurNum`,`pieceRef`)
)engine=innodb charset=utf8;

CREATE TABLE `Marque`(
	`marqueNum` INTEGER auto_increment,
	`marqueNom` VARCHAR(30),
	primary key(`marqueNum`)
)engine=innodb charset=utf8;

CREATE TABLE `Modele`(
	`modeleNum` INTEGER auto_increment,
	`modeleNom` VARCHAR(30),
	`marqueNum` INTEGER NOT NULL,
   	foreign key (`marqueNum`) references Marque(`marqueNum`),
	primary key(`modeleNum`)
)engine=innodb charset=utf8;

CREATE TABLE `Compatible`(
	`modeleNum` INTEGER NOT NULL,
	`pieceRef` VARCHAR(10) NOT NULL,
   	foreign key (`modeleNum`) references Modele(`modeleNum`),
   	foreign key (`pieceRef`) references Piece(`pieceRef`),
	primary key(`modeleNum`,`pieceRef`)
)engine=innodb charset=utf8;

CREATE TABLE `Vehicule`(
	`vehiculeNum` INTEGER,
	`vehiculeAnnee` VARCHAR(4),
	`vehiculeImmat` VARCHAR(8),
	`modeleNum` INTEGER NOT NULL,
   	foreign key (`modeleNum`) references Modele(`modeleNum`),
	primary key(`vehiculeNum`)
)engine=innodb charset=utf8;

CREATE TABLE `Reparation`(
	`reparNum` INTEGER,
	`reparLib` VARCHAR(255),
	`reparDateDebut` DATETIME,
	`reparDateFin` DATETIME,
	`reparDuree` INTEGER,
	`userNum` INTEGER ,
	`factNum` INTEGER ,
	`cliNum` INTEGER NOT NULL,
	`vehiculeNum` INTEGER NOT NULL,
   	foreign key (`userNum`) references Utilisateur(`userNum`),
   	foreign key (`factNum`) references Facture(`factNum`),
   	foreign key (`cliNum`) references Client(`cliNum`),
   	foreign key (`vehiculeNum`) references Vehicule(`vehiculeNum`),
	primary key(`reparNum`)
)engine=innodb charset=utf8;

CREATE TABLE `Besoin`(
	`quantite` INTEGER,
	`reparNum` INTEGER NOT NULL,
	`pieceRef` VARCHAR(10) NOT NULL,
   	foreign key (`reparNum`) references Reparation(`reparNum`), 
	foreign key (`pieceRef`) references Piece(`pieceRef`),
	primary key(`reparNum`,`pieceRef`)
)engine=innodb charset=utf8;

