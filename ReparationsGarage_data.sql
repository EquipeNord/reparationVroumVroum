-- Jeu d'essai pour la base de données ReparationsGarage
-- Créé le 03/10/2019 par Y. Salamone

insert into Client values
(1, 'Brochier', 'Anthony', '25 cours Émile Zola', '05000', 'Gap', '0492651235', '0651962417', 'brochieranthony.pro@gmail.com', 'antho_brc', password('pippoup')),
(2, 'Salamone', 'Jodie', '28 boulevard Gassendi', '04000', 'Digne-les-Bains', '0492232845', '0640697140', 'jodie.slm@icloud.com', 'jodie.slm', password('mdpSecret1'));

insert into Facture values
(300, '2019-09-12', '100', '120', 0),
(301, '2019-09-24', '200', '240', 1),
(302, '2019-10-03', '300', '360', 0);

insert into Utilisateur values
(10, 'Salamone', 'Yohan', 'yohan.salamone', password('mdpFort1')),
(11, 'Mainard', 'Jérémy', 'jeremylebgdu91', password('lebaratineur')),
(12, 'Meozzi', 'Théo', 'thetmj', password('fortnite')),
(13, 'Iron', 'Man', 'ironman', password('pasclovis'));

insert into Role values
(20, 'Gérant'),
(21, 'Secrétaire'),
(22, 'Comptable'),
(23, 'Mécanicien'),
(24, 'Magasinier');

insert into User_Role values
(20, 10),
(23, 10),
(22, 11),
(21, 12);

insert into Piece values
('CDRN10', 'Courroie de distribution CONTITECH', 6, 25, 30),
('FAPG3X', 'Filtre à air Bosch', 4, 15, 18);

insert into Fournisseur values
(40, 'SOPARTEX Gap', '0492536215', 'gap@sopartex.com'),
(41, 'AUTODOC Gap', '0492567824', 'gap@autodoc.com');

insert into Commande values
(600, '2019-09-02', 40),
(601, '2019-10-03', 41);

insert into Contenu values
(5, 600, 'CDRN10'),
(2, 601, 'FAPG3X');

insert into Catalogue values
('SPGC48', 20, 40, 'CDRN10'),
('SPGC61', 24, 41, 'CDRN10'),
('AT9420', 14, 40, 'FAPG3X'),
('AT5201', 12, 41, 'FAPG3X');

insert into Marque values
(80, 'Renault'),
(81, 'Peugeot'),
(82, 'Volvo'),
(83, 'Volkswagen');

insert into Modele values
(800, 'Twingo 1', 80),
(801, 'Clio 4', 80),
(810, '208', 81),
(811, '3008', 81),
(820, 'V50', 82),
(821, 'XC60', 82),
(830, 'Polo', 83),
(831, 'Touran', 83);

insert into Compatible values
(800, 'CDRN10'),
(801, 'CDRN10'),
(811, 'FAPG3X'),
(821, 'FAPG3X'),
(831, 'FAPG3X');

insert into Vehicule values
(1400, '2015', 'DP600JM', 801),
(1401, '2012', 'CS133CW', 810),
(1402, '2009', 'AE546HS', 821),
(1403, '2000', 'DD294YF', 800);

insert into Reparation values
(12340, 'Réparation 1', '2019-10-02 14:00:00', '2019-10-03 10:00:00', 6, 10, 302, 1, 1403),
(12341, 'Réparation 2', '2019-09-24 08:00:00', '2019-09-24 16:00:00', 6, 10, 301, 2, 1401);

insert into Besoin values
(1, 12340, 'CDRN10'),
(1, 12341, 'FAPG3X');
