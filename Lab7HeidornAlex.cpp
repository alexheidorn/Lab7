/*
* Alex Heidorn
* Created: 10-19-23
* CS2 Lab7
*  
*/

// Examples
// Ex 1-3 are done comparing both card number and suit, so there are no wars (what the assignment asks for)
// Ex 4-5 are done comparing ONLY card number, so there ARE wars (this is what my submitted code
// will produce when run)

/* #1: 418 rounds
Player 1 has 18 cards.
Player 2 has 34 cards.
Player 1 plays KDiamonds
Player 2 plays AHearts
Player 1 wins round 251!

Player 1 has 19 cards.
Player 2 has 33 cards.
Player 1 plays 3Hearts
Player 2 plays 3Diamonds
Player 1 wins round 252!

Player 1 has 20 cards.
Player 2 has 32 cards.
Player 1 plays QHearts
Player 2 plays ASpades
Player 1 wins round 253!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays KSpades
Player 2 plays 7Clubs
Player 1 wins round 254!

Player 1 has 22 cards.
Player 2 has 30 cards.
Player 1 plays ADiamonds
Player 2 plays 9Diamonds
Player 1 wins round 255!

Player 1 has 23 cards.
Player 2 has 29 cards.
Player 1 plays 8Spades
Player 2 plays 2Clubs
Player 1 wins round 256!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays JHearts
Player 2 plays JClubs
Player 1 wins round 257!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 8Clubs
Player 2 plays 2Spades
Player 1 wins round 258!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays AClubs
Player 2 plays 7Spades
Player 1 wins round 259!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 6Hearts
Player 2 plays 2Diamonds
Player 1 wins round 260!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 8Hearts
Player 2 plays 9Spades
Player 2 wins round 261!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 5Diamonds
Player 2 plays 2Hearts
Player 1 wins round 262!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 6Spades
Player 2 plays 9Clubs
Player 2 wins round 263!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 4Clubs
Player 2 plays 10Spades
Player 1 wins round 264!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 5Hearts
Player 2 plays QDiamonds
Player 2 wins round 265!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 4Diamonds
Player 2 plays KClubs
Player 2 wins round 266!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays QSpades
Player 2 plays 8Diamonds
Player 1 wins round 267!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays KHearts
Player 2 plays 3Clubs
Player 1 wins round 268!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays KDiamonds
Player 2 plays 7Diamonds
Player 1 wins round 269!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays AHearts
Player 2 plays 5Spades
Player 1 wins round 270!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 3Hearts
Player 2 plays 10Diamonds
Player 1 wins round 271!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 3Diamonds
Player 2 plays 10Clubs
Player 1 wins round 272!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays QHearts
Player 2 plays QClubs
Player 1 wins round 273!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays ASpades
Player 2 plays 3Spades
Player 1 wins round 274!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays KSpades
Player 2 plays 6Diamonds
Player 1 wins round 275!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 7Clubs
Player 2 plays 10Hearts
Player 1 wins round 276!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays ADiamonds
Player 2 plays JDiamonds
Player 2 wins round 277!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 9Diamonds
Player 2 plays 7Hearts
Player 1 wins round 278!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays 8Spades
Player 2 plays JSpades
Player 2 wins round 279!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 2Clubs
Player 2 plays 6Clubs
Player 2 wins round 280!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays JHearts
Player 2 plays 5Clubs
Player 1 wins round 281!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays JClubs
Player 2 plays 4Spades
Player 1 wins round 282!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays 8Clubs
Player 2 plays 9Hearts
Player 2 wins round 283!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 2Spades
Player 2 plays 4Hearts
Player 2 wins round 284!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays AClubs
Player 2 plays 9Spades
Player 1 wins round 285!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 7Spades
Player 2 plays 8Hearts
Player 2 wins round 286!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays 6Hearts
Player 2 plays 9Clubs
Player 2 wins round 287!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays 2Diamonds
Player 2 plays 6Spades
Player 2 wins round 288!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays 5Diamonds
Player 2 plays QDiamonds
Player 2 wins round 289!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 2Hearts
Player 2 plays 5Hearts
Player 2 wins round 290!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 4Clubs
Player 2 plays KClubs
Player 2 wins round 291!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 10Spades
Player 2 plays 4Diamonds
Player 2 wins round 292!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays QSpades
Player 2 plays JDiamonds
Player 1 wins round 293!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 8Diamonds
Player 2 plays ADiamonds
Player 2 wins round 294!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays KHearts
Player 2 plays JSpades
Player 1 wins round 295!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 3Clubs
Player 2 plays 8Spades
Player 2 wins round 296!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays KDiamonds
Player 2 plays 6Clubs
Player 1 wins round 297!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 7Diamonds
Player 2 plays 2Clubs
Player 1 wins round 298!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays AHearts
Player 2 plays 9Hearts
Player 1 wins round 299!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 5Spades
Player 2 plays 8Clubs
Player 2 wins round 300!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 3Hearts
Player 2 plays 4Hearts
Player 2 wins round 301!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 10Diamonds
Player 2 plays 2Spades
Player 2 wins round 302!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 3Diamonds
Player 2 plays 8Hearts
Player 2 wins round 303!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 10Clubs
Player 2 plays 7Spades
Player 2 wins round 304!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays QHearts
Player 2 plays 9Clubs
Player 1 wins round 305!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays QClubs
Player 2 plays 6Hearts
Player 1 wins round 306!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays ASpades
Player 2 plays 6Spades
Player 1 wins round 307!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 3Spades
Player 2 plays 2Diamonds
Player 1 wins round 308!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays KSpades
Player 2 plays QDiamonds
Player 2 wins round 309!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 6Diamonds
Player 2 plays 5Diamonds
Player 1 wins round 310!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 7Clubs
Player 2 plays 5Hearts
Player 1 wins round 311!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 10Hearts
Player 2 plays 2Hearts
Player 2 wins round 312!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 9Diamonds
Player 2 plays KClubs
Player 2 wins round 313!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 7Hearts
Player 2 plays 4Clubs
Player 1 wins round 314!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays JHearts
Player 2 plays 4Diamonds
Player 1 wins round 315!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 5Clubs
Player 2 plays 10Spades
Player 1 wins round 316!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays JClubs
Player 2 plays ADiamonds
Player 1 wins round 317!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays 4Spades
Player 2 plays 8Diamonds
Player 2 wins round 318!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays AClubs
Player 2 plays 8Spades
Player 1 wins round 319!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays 9Spades
Player 2 plays 3Clubs
Player 1 wins round 320!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays QSpades
Player 2 plays 8Clubs
Player 1 wins round 321!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays JDiamonds
Player 2 plays 5Spades
Player 1 wins round 322!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays KHearts
Player 2 plays 4Hearts
Player 1 wins round 323!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays JSpades
Player 2 plays 3Hearts
Player 1 wins round 324!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays KDiamonds
Player 2 plays 2Spades
Player 1 wins round 325!

Player 1 has 39 cards.
Player 2 has 13 cards.
Player 1 plays 6Clubs
Player 2 plays 10Diamonds
Player 1 wins round 326!

Player 1 has 40 cards.
Player 2 has 12 cards.
Player 1 plays 7Diamonds
Player 2 plays 8Hearts
Player 2 wins round 327!

Player 1 has 39 cards.
Player 2 has 13 cards.
Player 1 plays 2Clubs
Player 2 plays 3Diamonds
Player 2 wins round 328!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays AHearts
Player 2 plays 7Spades
Player 1 wins round 329!

Player 1 has 39 cards.
Player 2 has 13 cards.
Player 1 plays 9Hearts
Player 2 plays 10Clubs
Player 1 wins round 330!

Player 1 has 40 cards.
Player 2 has 12 cards.
Player 1 plays QHearts
Player 2 plays QDiamonds
Player 1 wins round 331!

Player 1 has 41 cards.
Player 2 has 11 cards.
Player 1 plays 9Clubs
Player 2 plays KSpades
Player 2 wins round 332!

Player 1 has 40 cards.
Player 2 has 12 cards.
Player 1 plays QClubs
Player 2 plays 2Hearts
Player 1 wins round 333!

Player 1 has 41 cards.
Player 2 has 11 cards.
Player 1 plays 6Hearts
Player 2 plays 10Hearts
Player 1 wins round 334!

Player 1 has 42 cards.
Player 2 has 10 cards.
Player 1 plays ASpades
Player 2 plays KClubs
Player 2 wins round 335!

Player 1 has 41 cards.
Player 2 has 11 cards.
Player 1 plays 6Spades
Player 2 plays 9Diamonds
Player 2 wins round 336!

Player 1 has 40 cards.
Player 2 has 12 cards.
Player 1 plays 3Spades
Player 2 plays 8Diamonds
Player 2 wins round 337!

Player 1 has 39 cards.
Player 2 has 13 cards.
Player 1 plays 2Diamonds
Player 2 plays 4Spades
Player 2 wins round 338!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays 6Diamonds
Player 2 plays 8Hearts
Player 2 wins round 339!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 5Diamonds
Player 2 plays 7Diamonds
Player 2 wins round 340!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays 7Clubs
Player 2 plays 3Diamonds
Player 1 wins round 341!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 5Hearts
Player 2 plays 2Clubs
Player 1 wins round 342!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays 7Hearts
Player 2 plays KSpades
Player 2 wins round 343!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 4Clubs
Player 2 plays 9Clubs
Player 2 wins round 344!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays JHearts
Player 2 plays KClubs
Player 2 wins round 345!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 4Diamonds
Player 2 plays ASpades
Player 2 wins round 346!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays 5Clubs
Player 2 plays 9Diamonds
Player 2 wins round 347!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays 10Spades
Player 2 plays 6Spades
Player 2 wins round 348!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays JClubs
Player 2 plays 8Diamonds
Player 1 wins round 349!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays ADiamonds
Player 2 plays 3Spades
Player 1 wins round 350!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays AClubs
Player 2 plays 4Spades
Player 1 wins round 351!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 8Spades
Player 2 plays 2Diamonds
Player 1 wins round 352!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays 9Spades
Player 2 plays 8Hearts
Player 1 wins round 353!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 3Clubs
Player 2 plays 6Diamonds
Player 2 wins round 354!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays QSpades
Player 2 plays 7Diamonds
Player 1 wins round 355!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 8Clubs
Player 2 plays 5Diamonds
Player 1 wins round 356!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays JDiamonds
Player 2 plays KSpades
Player 2 wins round 357!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 5Spades
Player 2 plays 7Hearts
Player 2 wins round 358!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays KHearts
Player 2 plays 9Clubs
Player 1 wins round 359!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 4Hearts
Player 2 plays 4Clubs
Player 1 wins round 360!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays JSpades
Player 2 plays KClubs
Player 2 wins round 361!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 3Hearts
Player 2 plays JHearts
Player 2 wins round 362!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays KDiamonds
Player 2 plays ASpades
Player 1 wins round 363!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 2Spades
Player 2 plays 4Diamonds
Player 2 wins round 364!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays 6Clubs
Player 2 plays 9Diamonds
Player 2 wins round 365!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 10Diamonds
Player 2 plays 5Clubs
Player 2 wins round 366!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays AHearts
Player 2 plays 6Spades
Player 1 wins round 367!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 7Spades
Player 2 plays 10Spades
Player 1 wins round 368!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays 9Hearts
Player 2 plays 6Diamonds
Player 1 wins round 369!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 10Clubs
Player 2 plays 3Clubs
Player 2 wins round 370!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays QHearts
Player 2 plays KSpades
Player 1 wins round 371!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays QDiamonds
Player 2 plays JDiamonds
Player 1 wins round 372!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays QClubs
Player 2 plays 7Hearts
Player 1 wins round 373!

Player 1 has 39 cards.
Player 2 has 13 cards.
Player 1 plays 2Hearts
Player 2 plays 5Spades
Player 2 wins round 374!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays 6Hearts
Player 2 plays KClubs
Player 2 wins round 375!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 10Hearts
Player 2 plays JSpades
Player 2 wins round 376!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays 7Clubs
Player 2 plays JHearts
Player 2 wins round 377!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 3Diamonds
Player 2 plays 3Hearts
Player 2 wins round 378!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays 5Hearts
Player 2 plays 4Diamonds
Player 1 wins round 379!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 2Clubs
Player 2 plays 2Spades
Player 2 wins round 380!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays JClubs
Player 2 plays 9Diamonds
Player 1 wins round 381!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 8Diamonds
Player 2 plays 6Clubs
Player 1 wins round 382!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays ADiamonds
Player 2 plays 5Clubs
Player 1 wins round 383!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 3Spades
Player 2 plays 10Diamonds
Player 1 wins round 384!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays AClubs
Player 2 plays 3Clubs
Player 1 wins round 385!

Player 1 has 39 cards.
Player 2 has 13 cards.
Player 1 plays 4Spades
Player 2 plays 10Clubs
Player 1 wins round 386!

Player 1 has 40 cards.
Player 2 has 12 cards.
Player 1 plays 8Spades
Player 2 plays 5Spades
Player 1 wins round 387!

Player 1 has 41 cards.
Player 2 has 11 cards.
Player 1 plays 2Diamonds
Player 2 plays 2Hearts
Player 2 wins round 388!

Player 1 has 40 cards.
Player 2 has 12 cards.
Player 1 plays 9Spades
Player 2 plays KClubs
Player 2 wins round 389!

Player 1 has 39 cards.
Player 2 has 13 cards.
Player 1 plays 8Hearts
Player 2 plays 6Hearts
Player 1 wins round 390!

Player 1 has 40 cards.
Player 2 has 12 cards.
Player 1 plays QSpades
Player 2 plays JSpades
Player 1 wins round 391!

Player 1 has 41 cards.
Player 2 has 11 cards.
Player 1 plays 7Diamonds
Player 2 plays 10Hearts
Player 1 wins round 392!

Player 1 has 42 cards.
Player 2 has 10 cards.
Player 1 plays 8Clubs
Player 2 plays JHearts
Player 2 wins round 393!

Player 1 has 41 cards.
Player 2 has 11 cards.
Player 1 plays 5Diamonds
Player 2 plays 7Clubs
Player 2 wins round 394!

Player 1 has 40 cards.
Player 2 has 12 cards.
Player 1 plays KHearts
Player 2 plays 3Hearts
Player 1 wins round 395!

Player 1 has 41 cards.
Player 2 has 11 cards.
Player 1 plays 9Clubs
Player 2 plays 3Diamonds
Player 1 wins round 396!

Player 1 has 42 cards.
Player 2 has 10 cards.
Player 1 plays 4Hearts
Player 2 plays 2Spades
Player 1 wins round 397!

Player 1 has 43 cards.
Player 2 has 9 cards.
Player 1 plays 4Clubs
Player 2 plays 2Clubs
Player 1 wins round 398!

Player 1 has 44 cards.
Player 2 has 8 cards.
Player 1 plays KDiamonds
Player 2 plays 2Hearts
Player 1 wins round 399!

Player 1 has 45 cards.
Player 2 has 7 cards.
Player 1 plays ASpades
Player 2 plays 2Diamonds
Player 1 wins round 400!

Player 1 has 46 cards.
Player 2 has 6 cards.
Player 1 plays AHearts
Player 2 plays KClubs
Player 2 wins round 401!

Player 1 has 45 cards.
Player 2 has 7 cards.
Player 1 plays 6Spades
Player 2 plays 9Spades
Player 2 wins round 402!

Player 1 has 44 cards.
Player 2 has 8 cards.
Player 1 plays 7Spades
Player 2 plays JHearts
Player 2 wins round 403!

Player 1 has 43 cards.
Player 2 has 9 cards.
Player 1 plays 10Spades
Player 2 plays 8Clubs
Player 2 wins round 404!

Player 1 has 42 cards.
Player 2 has 10 cards.
Player 1 plays 9Hearts
Player 2 plays 7Clubs
Player 1 wins round 405!

Player 1 has 43 cards.
Player 2 has 9 cards.
Player 1 plays 6Diamonds
Player 2 plays 5Diamonds
Player 1 wins round 406!

Player 1 has 44 cards.
Player 2 has 8 cards.
Player 1 plays QHearts
Player 2 plays KClubs
Player 1 wins round 407!

Player 1 has 45 cards.
Player 2 has 7 cards.
Player 1 plays KSpades
Player 2 plays AHearts
Player 1 wins round 408!

Player 1 has 46 cards.
Player 2 has 6 cards.
Player 1 plays QDiamonds
Player 2 plays 9Spades
Player 1 wins round 409!

Player 1 has 47 cards.
Player 2 has 5 cards.
Player 1 plays JDiamonds
Player 2 plays 6Spades
Player 1 wins round 410!

Player 1 has 48 cards.
Player 2 has 4 cards.
Player 1 plays QClubs
Player 2 plays JHearts
Player 1 wins round 411!

Player 1 has 49 cards.
Player 2 has 3 cards.
Player 1 plays 7Hearts
Player 2 plays 7Spades
Player 2 wins round 412!

Player 1 has 48 cards.
Player 2 has 4 cards.
Player 1 plays 5Hearts
Player 2 plays 8Clubs
Player 2 wins round 413!

Player 1 has 47 cards.
Player 2 has 5 cards.
Player 1 plays 4Diamonds
Player 2 plays 10Spades
Player 1 wins round 414!

Player 1 has 48 cards.
Player 2 has 4 cards.
Player 1 plays JClubs
Player 2 plays 7Spades
Player 1 wins round 415!

Player 1 has 49 cards.
Player 2 has 3 cards.
Player 1 plays 9Diamonds
Player 2 plays 7Hearts
Player 1 wins round 416!

Player 1 has 50 cards.
Player 2 has 2 cards.
Player 1 plays 8Diamonds
Player 2 plays 8Clubs
Player 1 wins round 417!

Player 1 has 51 cards.
Player 2 has 1 cards.
Player 1 plays 6Clubs
Player 2 plays 5Hearts
Player 1 wins round 418!

Player 1 has 52 cards.
Player 2 has 0 cards.
Player 1 won in 418 rounds!
PS C:\Users\alexh\CS2> 
*/
/* #2 230 rounds
Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays 6Spades
Player 2 plays QHearts
Player 2 wins round 63!

Player 1 has 23 cards.
Player 2 has 29 cards.
Player 1 plays 6Clubs
Player 2 plays KSpades
Player 2 wins round 64!

Player 1 has 22 cards.
Player 2 has 30 cards.
Player 1 plays 3Spades
Player 2 plays JClubs
Player 2 wins round 65!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays 2Diamonds
Player 2 plays 10Hearts
Player 1 wins round 66!

Player 1 has 22 cards.
Player 2 has 30 cards.
Player 1 plays 9Spades
Player 2 plays QClubs
Player 2 wins round 67!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays 6Hearts
Player 2 plays JHearts
Player 2 wins round 68!

Player 1 has 20 cards.
Player 2 has 32 cards.
Player 1 plays 5Spades
Player 2 plays QSpades
Player 2 wins round 69!

Player 1 has 19 cards.
Player 2 has 33 cards.
Player 1 plays 4Diamonds
Player 2 plays 7Clubs
Player 2 wins round 70!

Player 1 has 18 cards.
Player 2 has 34 cards.
Player 1 plays KHearts
Player 2 plays ADiamonds
Player 1 wins round 71!

Player 1 has 19 cards.
Player 2 has 33 cards.
Player 1 plays 7Spades
Player 2 plays 10Diamonds
Player 1 wins round 72!

Player 1 has 20 cards.
Player 2 has 32 cards.
Player 1 plays KDiamonds
Player 2 plays 9Diamonds
Player 1 wins round 73!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays JSpades
Player 2 plays 7Diamonds
Player 1 wins round 74!

Player 1 has 22 cards.
Player 2 has 30 cards.
Player 1 plays 3Clubs
Player 2 plays 7Hearts
Player 2 wins round 75!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays 10Clubs
Player 2 plays 2Spades
Player 2 wins round 76!

Player 1 has 20 cards.
Player 2 has 32 cards.
Player 1 plays AHearts
Player 2 plays JDiamonds
Player 2 wins round 77!

Player 1 has 19 cards.
Player 2 has 33 cards.
Player 1 plays 8Hearts
Player 2 plays 8Spades
Player 2 wins round 78!

Player 1 has 18 cards.
Player 2 has 34 cards.
Player 1 plays 9Clubs
Player 2 plays 8Diamonds
Player 1 wins round 79!

Player 1 has 19 cards.
Player 2 has 33 cards.
Player 1 plays 2Clubs
Player 2 plays 4Spades
Player 2 wins round 80!

Player 1 has 18 cards.
Player 2 has 34 cards.
Player 1 plays 8Clubs
Player 2 plays AClubs
Player 2 wins round 81!

Player 1 has 17 cards.
Player 2 has 35 cards.
Player 1 plays 3Diamonds
Player 2 plays 5Diamonds
Player 2 wins round 82!

Player 1 has 16 cards.
Player 2 has 36 cards.
Player 1 plays 5Clubs
Player 2 plays 6Diamonds
Player 2 wins round 83!

Player 1 has 15 cards.
Player 2 has 37 cards.
Player 1 plays 10Spades
Player 2 plays 4Hearts
Player 2 wins round 84!

Player 1 has 14 cards.
Player 2 has 38 cards.
Player 1 plays 3Hearts
Player 2 plays 5Hearts
Player 2 wins round 85!

Player 1 has 13 cards.
Player 2 has 39 cards.
Player 1 plays 2Hearts
Player 2 plays 4Clubs
Player 2 wins round 86!

Player 1 has 12 cards.
Player 2 has 40 cards.
Player 1 plays 2Diamonds
Player 2 plays QDiamonds
Player 2 wins round 87!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays 10Hearts
Player 2 plays ASpades
Player 2 wins round 88!

Player 1 has 10 cards.
Player 2 has 42 cards.
Player 1 plays KHearts
Player 2 plays KClubs
Player 1 wins round 89!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays ADiamonds
Player 2 plays 9Hearts
Player 1 wins round 90!

Player 1 has 12 cards.
Player 2 has 40 cards.
Player 1 plays 7Spades
Player 2 plays QHearts
Player 2 wins round 91!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays 10Diamonds
Player 2 plays 6Spades
Player 2 wins round 92!

Player 1 has 10 cards.
Player 2 has 42 cards.
Player 1 plays KDiamonds
Player 2 plays KSpades
Player 2 wins round 93!

Player 1 has 9 cards.
Player 2 has 43 cards.
Player 1 plays 9Diamonds
Player 2 plays 6Clubs
Player 1 wins round 94!

Player 1 has 10 cards.
Player 2 has 42 cards.
Player 1 plays JSpades
Player 2 plays JClubs
Player 1 wins round 95!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays 7Diamonds
Player 2 plays 3Spades
Player 1 wins round 96!

Player 1 has 12 cards.
Player 2 has 40 cards.
Player 1 plays 9Clubs
Player 2 plays QClubs
Player 2 wins round 97!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays 8Diamonds
Player 2 plays 9Spades
Player 2 wins round 98!

Player 1 has 10 cards.
Player 2 has 42 cards.
Player 1 plays KHearts
Player 2 plays JHearts
Player 1 wins round 99!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays KClubs
Player 2 plays 6Hearts
Player 1 wins round 100!

Player 1 has 12 cards.
Player 2 has 40 cards.
Player 1 plays ADiamonds
Player 2 plays QSpades
Player 2 wins round 101!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays 9Hearts
Player 2 plays 5Spades
Player 1 wins round 102!

Player 1 has 12 cards.
Player 2 has 40 cards.
Player 1 plays 9Diamonds
Player 2 plays 7Clubs
Player 1 wins round 103!

Player 1 has 13 cards.
Player 2 has 39 cards.
Player 1 plays 6Clubs
Player 2 plays 4Diamonds
Player 1 wins round 104!

Player 1 has 14 cards.
Player 2 has 38 cards.
Player 1 plays JSpades
Player 2 plays 7Hearts
Player 1 wins round 105!

Player 1 has 15 cards.
Player 2 has 37 cards.
Player 1 plays JClubs
Player 2 plays 3Clubs
Player 1 wins round 106!

Player 1 has 16 cards.
Player 2 has 36 cards.
Player 1 plays 7Diamonds
Player 2 plays 2Spades
Player 1 wins round 107!

Player 1 has 17 cards.
Player 2 has 35 cards.
Player 1 plays 3Spades
Player 2 plays 10Clubs
Player 1 wins round 108!

Player 1 has 18 cards.
Player 2 has 34 cards.
Player 1 plays KHearts
Player 2 plays JDiamonds
Player 1 wins round 109!

Player 1 has 19 cards.
Player 2 has 33 cards.
Player 1 plays JHearts
Player 2 plays AHearts
Player 1 wins round 110!

Player 1 has 20 cards.
Player 2 has 32 cards.
Player 1 plays KClubs
Player 2 plays 8Spades
Player 1 wins round 111!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays 6Hearts
Player 2 plays 8Hearts
Player 2 wins round 112!

Player 1 has 20 cards.
Player 2 has 32 cards.
Player 1 plays 9Hearts
Player 2 plays 4Spades
Player 1 wins round 113!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays 5Spades
Player 2 plays 2Clubs
Player 1 wins round 114!

Player 1 has 22 cards.
Player 2 has 30 cards.
Player 1 plays 9Diamonds
Player 2 plays AClubs
Player 2 wins round 115!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays 7Clubs
Player 2 plays 8Clubs
Player 2 wins round 116!

Player 1 has 20 cards.
Player 2 has 32 cards.
Player 1 plays 6Clubs
Player 2 plays 5Diamonds
Player 1 wins round 117!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays 4Diamonds
Player 2 plays 3Diamonds
Player 1 wins round 118!

Player 1 has 22 cards.
Player 2 has 30 cards.
Player 1 plays JSpades
Player 2 plays 6Diamonds
Player 1 wins round 119!

Player 1 has 23 cards.
Player 2 has 29 cards.
Player 1 plays 7Hearts
Player 2 plays 5Clubs
Player 1 wins round 120!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays JClubs
Player 2 plays 4Hearts
Player 1 wins round 121!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 3Clubs
Player 2 plays 10Spades
Player 1 wins round 122!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 7Diamonds
Player 2 plays 5Hearts
Player 1 wins round 123!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 2Spades
Player 2 plays 3Hearts
Player 2 wins round 124!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 3Spades
Player 2 plays 4Clubs
Player 2 wins round 125!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 10Clubs
Player 2 plays 2Hearts
Player 2 wins round 126!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays KHearts
Player 2 plays QDiamonds
Player 2 wins round 127!

Player 1 has 23 cards.
Player 2 has 29 cards.
Player 1 plays JDiamonds
Player 2 plays 2Diamonds
Player 1 wins round 128!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays JHearts
Player 2 plays ASpades
Player 1 wins round 129!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays AHearts
Player 2 plays 10Hearts
Player 1 wins round 130!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays KClubs
Player 2 plays QHearts
Player 2 wins round 131!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 8Spades
Player 2 plays 7Spades
Player 1 wins round 132!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 9Hearts
Player 2 plays 6Spades
Player 1 wins round 133!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 4Spades
Player 2 plays 10Diamonds
Player 1 wins round 134!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 5Spades
Player 2 plays KSpades
Player 2 wins round 135!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 2Clubs
Player 2 plays KDiamonds
Player 2 wins round 136!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 6Clubs
Player 2 plays QClubs
Player 2 wins round 137!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 5Diamonds
Player 2 plays 9Clubs
Player 2 wins round 138!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays 4Diamonds
Player 2 plays 9Spades
Player 2 wins round 139!

Player 1 has 23 cards.
Player 2 has 29 cards.
Player 1 plays 3Diamonds
Player 2 plays 8Diamonds
Player 2 wins round 140!

Player 1 has 22 cards.
Player 2 has 30 cards.
Player 1 plays JSpades
Player 2 plays QSpades
Player 2 wins round 141!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays 6Diamonds
Player 2 plays ADiamonds
Player 2 wins round 142!

Player 1 has 20 cards.
Player 2 has 32 cards.
Player 1 plays 7Hearts
Player 2 plays 8Hearts
Player 2 wins round 143!

Player 1 has 19 cards.
Player 2 has 33 cards.
Player 1 plays 5Clubs
Player 2 plays 6Hearts
Player 2 wins round 144!

Player 1 has 18 cards.
Player 2 has 34 cards.
Player 1 plays JClubs
Player 2 plays AClubs
Player 1 wins round 145!

Player 1 has 19 cards.
Player 2 has 33 cards.
Player 1 plays 4Hearts
Player 2 plays 9Diamonds
Player 2 wins round 146!

Player 1 has 18 cards.
Player 2 has 34 cards.
Player 1 plays 3Clubs
Player 2 plays 8Clubs
Player 2 wins round 147!

Player 1 has 17 cards.
Player 2 has 35 cards.
Player 1 plays 10Spades
Player 2 plays 7Clubs
Player 2 wins round 148!

Player 1 has 16 cards.
Player 2 has 36 cards.
Player 1 plays 7Diamonds
Player 2 plays 3Hearts
Player 1 wins round 149!

Player 1 has 17 cards.
Player 2 has 35 cards.
Player 1 plays 5Hearts
Player 2 plays 2Spades
Player 1 wins round 150!

Player 1 has 18 cards.
Player 2 has 34 cards.
Player 1 plays JDiamonds
Player 2 plays 4Clubs
Player 1 wins round 151!

Player 1 has 19 cards.
Player 2 has 33 cards.
Player 1 plays 2Diamonds
Player 2 plays 3Spades
Player 2 wins round 152!

Player 1 has 18 cards.
Player 2 has 34 cards.
Player 1 plays JHearts
Player 2 plays 2Hearts
Player 1 wins round 153!

Player 1 has 19 cards.
Player 2 has 33 cards.
Player 1 plays ASpades
Player 2 plays 10Clubs
Player 1 wins round 154!

Player 1 has 20 cards.
Player 2 has 32 cards.
Player 1 plays AHearts
Player 2 plays QDiamonds
Player 2 wins round 155!

Player 1 has 19 cards.
Player 2 has 33 cards.
Player 1 plays 10Hearts
Player 2 plays KHearts
Player 2 wins round 156!

Player 1 has 18 cards.
Player 2 has 34 cards.
Player 1 plays 8Spades
Player 2 plays QHearts
Player 2 wins round 157!

Player 1 has 17 cards.
Player 2 has 35 cards.
Player 1 plays 7Spades
Player 2 plays KClubs
Player 2 wins round 158!

Player 1 has 16 cards.
Player 2 has 36 cards.
Player 1 plays 9Hearts
Player 2 plays KSpades
Player 2 wins round 159!

Player 1 has 15 cards.
Player 2 has 37 cards.
Player 1 plays 6Spades
Player 2 plays 5Spades
Player 1 wins round 160!

Player 1 has 16 cards.
Player 2 has 36 cards.
Player 1 plays 4Spades
Player 2 plays KDiamonds
Player 2 wins round 161!

Player 1 has 15 cards.
Player 2 has 37 cards.
Player 1 plays 10Diamonds
Player 2 plays 2Clubs
Player 2 wins round 162!

Player 1 has 14 cards.
Player 2 has 38 cards.
Player 1 plays JClubs
Player 2 plays QClubs
Player 2 wins round 163!

Player 1 has 13 cards.
Player 2 has 39 cards.
Player 1 plays AClubs
Player 2 plays 6Clubs
Player 1 wins round 164!

Player 1 has 14 cards.
Player 2 has 38 cards.
Player 1 plays 7Diamonds
Player 2 plays 9Clubs
Player 2 wins round 165!

Player 1 has 13 cards.
Player 2 has 39 cards.
Player 1 plays 3Hearts
Player 2 plays 5Diamonds
Player 2 wins round 166!

Player 1 has 12 cards.
Player 2 has 40 cards.
Player 1 plays 5Hearts
Player 2 plays 9Spades
Player 2 wins round 167!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays 2Spades
Player 2 plays 4Diamonds
Player 2 wins round 168!

Player 1 has 10 cards.
Player 2 has 42 cards.
Player 1 plays JDiamonds
Player 2 plays 8Diamonds
Player 1 wins round 169!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays 4Clubs
Player 2 plays 3Diamonds
Player 1 wins round 170!

Player 1 has 12 cards.
Player 2 has 40 cards.
Player 1 plays JHearts
Player 2 plays QSpades
Player 2 wins round 171!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays 2Hearts
Player 2 plays JSpades
Player 2 wins round 172!

Player 1 has 10 cards.
Player 2 has 42 cards.
Player 1 plays ASpades
Player 2 plays ADiamonds
Player 1 wins round 173!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays 10Clubs
Player 2 plays 6Diamonds
Player 2 wins round 174!

Player 1 has 10 cards.
Player 2 has 42 cards.
Player 1 plays 6Spades
Player 2 plays 8Hearts
Player 2 wins round 175!

Player 1 has 9 cards.
Player 2 has 43 cards.
Player 1 plays 5Spades
Player 2 plays 7Hearts
Player 2 wins round 176!

Player 1 has 8 cards.
Player 2 has 44 cards.
Player 1 plays AClubs
Player 2 plays 6Hearts
Player 1 wins round 177!

Player 1 has 9 cards.
Player 2 has 43 cards.
Player 1 plays 6Clubs
Player 2 plays 5Clubs
Player 1 wins round 178!

Player 1 has 10 cards.
Player 2 has 42 cards.
Player 1 plays JDiamonds
Player 2 plays 9Diamonds
Player 1 wins round 179!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays 8Diamonds
Player 2 plays 4Hearts
Player 1 wins round 180!

Player 1 has 12 cards.
Player 2 has 40 cards.
Player 1 plays 4Clubs
Player 2 plays 8Clubs
Player 2 wins round 181!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays 3Diamonds
Player 2 plays 3Clubs
Player 1 wins round 182!

Player 1 has 12 cards.
Player 2 has 40 cards.
Player 1 plays ASpades
Player 2 plays 7Clubs
Player 1 wins round 183!

Player 1 has 13 cards.
Player 2 has 39 cards.
Player 1 plays ADiamonds
Player 2 plays 10Spades
Player 1 wins round 184!

Player 1 has 14 cards.
Player 2 has 38 cards.
Player 1 plays AClubs
Player 2 plays 3Spades
Player 1 wins round 185!

Player 1 has 15 cards.
Player 2 has 37 cards.
Player 1 plays 6Hearts
Player 2 plays 2Diamonds
Player 1 wins round 186!

Player 1 has 16 cards.
Player 2 has 36 cards.
Player 1 plays 6Clubs
Player 2 plays QDiamonds
Player 2 wins round 187!

Player 1 has 15 cards.
Player 2 has 37 cards.
Player 1 plays 5Clubs
Player 2 plays AHearts
Player 2 wins round 188!

Player 1 has 14 cards.
Player 2 has 38 cards.
Player 1 plays JDiamonds
Player 2 plays KHearts
Player 2 wins round 189!

Player 1 has 13 cards.
Player 2 has 39 cards.
Player 1 plays 9Diamonds
Player 2 plays 10Hearts
Player 1 wins round 190!

Player 1 has 14 cards.
Player 2 has 38 cards.
Player 1 plays 8Diamonds
Player 2 plays QHearts
Player 2 wins round 191!

Player 1 has 13 cards.
Player 2 has 39 cards.
Player 1 plays 4Hearts
Player 2 plays 8Spades
Player 2 wins round 192!

Player 1 has 12 cards.
Player 2 has 40 cards.
Player 1 plays 3Diamonds
Player 2 plays KClubs
Player 2 wins round 193!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays 3Clubs
Player 2 plays 7Spades
Player 2 wins round 194!

Player 1 has 10 cards.
Player 2 has 42 cards.
Player 1 plays ASpades
Player 2 plays KSpades
Player 2 wins round 195!

Player 1 has 9 cards.
Player 2 has 43 cards.
Player 1 plays 7Clubs
Player 2 plays 9Hearts
Player 2 wins round 196!

Player 1 has 8 cards.
Player 2 has 44 cards.
Player 1 plays ADiamonds
Player 2 plays KDiamonds
Player 2 wins round 197!

Player 1 has 7 cards.
Player 2 has 45 cards.
Player 1 plays 10Spades
Player 2 plays 4Spades
Player 2 wins round 198!

Player 1 has 6 cards.
Player 2 has 46 cards.
Player 1 plays AClubs
Player 2 plays 2Clubs
Player 1 wins round 199!

Player 1 has 7 cards.
Player 2 has 45 cards.
Player 1 plays 3Spades
Player 2 plays 10Diamonds
Player 1 wins round 200!

Player 1 has 8 cards.
Player 2 has 44 cards.
Player 1 plays 6Hearts
Player 2 plays QClubs
Player 2 wins round 201!

Player 1 has 7 cards.
Player 2 has 45 cards.
Player 1 plays 2Diamonds
Player 2 plays JClubs
Player 2 wins round 202!

Player 1 has 6 cards.
Player 2 has 46 cards.
Player 1 plays 9Diamonds
Player 2 plays 9Clubs
Player 1 wins round 203!

Player 1 has 7 cards.
Player 2 has 45 cards.
Player 1 plays 10Hearts
Player 2 plays 7Diamonds
Player 2 wins round 204!

Player 1 has 6 cards.
Player 2 has 46 cards.
Player 1 plays AClubs
Player 2 plays 5Diamonds
Player 1 wins round 205!

Player 1 has 7 cards.
Player 2 has 45 cards.
Player 1 plays 2Clubs
Player 2 plays 3Hearts
Player 2 wins round 206!

Player 1 has 6 cards.
Player 2 has 46 cards.
Player 1 plays 3Spades
Player 2 plays 9Spades
Player 2 wins round 207!

Player 1 has 5 cards.
Player 2 has 47 cards.
Player 1 plays 10Diamonds
Player 2 plays 5Hearts
Player 2 wins round 208!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 9Diamonds
Player 2 plays 4Diamonds
Player 1 wins round 209!

Player 1 has 5 cards.
Player 2 has 47 cards.
Player 1 plays 9Clubs
Player 2 plays 2Spades
Player 1 wins round 210!

Player 1 has 6 cards.
Player 2 has 46 cards.
Player 1 plays AClubs
Player 2 plays QSpades
Player 2 wins round 211!

Player 1 has 5 cards.
Player 2 has 47 cards.
Player 1 plays 5Diamonds
Player 2 plays JHearts
Player 2 wins round 212!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 9Diamonds
Player 2 plays JSpades
Player 2 wins round 213!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 4Diamonds
Player 2 plays 2Hearts
Player 1 wins round 214!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 9Clubs
Player 2 plays 6Diamonds
Player 1 wins round 215!

Player 1 has 5 cards.
Player 2 has 47 cards.
Player 1 plays 2Spades
Player 2 plays 10Clubs
Player 1 wins round 216!

Player 1 has 6 cards.
Player 2 has 46 cards.
Player 1 plays 4Diamonds
Player 2 plays 8Hearts
Player 2 wins round 217!

Player 1 has 5 cards.
Player 2 has 47 cards.
Player 1 plays 2Hearts
Player 2 plays 6Spades
Player 2 wins round 218!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 9Clubs
Player 2 plays 7Hearts
Player 1 wins round 219!

Player 1 has 5 cards.
Player 2 has 47 cards.
Player 1 plays 6Diamonds
Player 2 plays 5Spades
Player 1 wins round 220!

Player 1 has 6 cards.
Player 2 has 46 cards.
Player 1 plays 2Spades
Player 2 plays 8Clubs
Player 2 wins round 221!

Player 1 has 5 cards.
Player 2 has 47 cards.
Player 1 plays 10Clubs
Player 2 plays 4Clubs
Player 2 wins round 222!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 9Clubs
Player 2 plays QDiamonds
Player 2 wins round 223!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 7Hearts
Player 2 plays 6Clubs
Player 1 wins round 224!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 6Diamonds
Player 2 plays AHearts
Player 2 wins round 225!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 5Spades
Player 2 plays 5Clubs
Player 1 wins round 226!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 7Hearts
Player 2 plays KHearts
Player 2 wins round 227!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 6Clubs
Player 2 plays JDiamonds
Player 2 wins round 228!

Player 1 has 2 cards.
Player 2 has 50 cards.
Player 1 plays 5Spades
Player 2 plays QHearts
Player 2 wins round 229!

Player 1 has 1 cards.
Player 2 has 51 cards.
Player 1 plays 5Clubs
Player 2 plays 8Diamonds
Player 2 wins round 230!

Player 1 has 0 cards.
Player 2 has 52 cards.
Player 2 won in 230 rounds!
PS C:\Users\alexh\CS2>
*/
/* #3 90 rounds
Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays JDiamonds
Player 2 plays KSpades
Player 2 wins round 1!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 8Clubs
Player 2 plays 5Diamonds
Player 1 wins round 2!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 3Spades
Player 2 plays 5Clubs
Player 2 wins round 3!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 6Diamonds
Player 2 plays 9Clubs
Player 2 wins round 4!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays 9Diamonds
Player 2 plays 2Clubs
Player 1 wins round 5!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays JHearts
Player 2 plays 7Diamonds
Player 1 wins round 6!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 10Spades
Player 2 plays 10Diamonds
Player 1 wins round 7!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 9Hearts
Player 2 plays QHearts
Player 2 wins round 8!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 6Spades
Player 2 plays QClubs
Player 2 wins round 9!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 6Hearts
Player 2 plays 4Diamonds
Player 1 wins round 10!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 8Hearts
Player 2 plays 7Hearts
Player 1 wins round 11!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays AHearts
Player 2 plays 4Clubs
Player 1 wins round 12!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays KDiamonds
Player 2 plays 3Hearts
Player 1 wins round 13!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 2Spades
Player 2 plays JClubs
Player 2 wins round 14!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 5Spades
Player 2 plays 4Hearts
Player 1 wins round 15!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 8Diamonds
Player 2 plays 3Clubs
Player 1 wins round 16!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 7Clubs
Player 2 plays ADiamonds
Player 2 wins round 17!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 9Spades
Player 2 plays QSpades
Player 2 wins round 18!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 10Clubs
Player 2 plays JSpades
Player 2 wins round 19!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 10Hearts
Player 2 plays QDiamonds
Player 2 wins round 20!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 4Spades
Player 2 plays KHearts
Player 2 wins round 21!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 5Hearts
Player 2 plays ASpades
Player 2 wins round 22!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays 8Spades
Player 2 plays AClubs
Player 2 wins round 23!

Player 1 has 23 cards.
Player 2 has 29 cards.
Player 1 plays 3Diamonds
Player 2 plays 7Spades
Player 2 wins round 24!

Player 1 has 22 cards.
Player 2 has 30 cards.
Player 1 plays 6Clubs
Player 2 plays KClubs
Player 2 wins round 25!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays 2Hearts
Player 2 plays 2Diamonds
Player 1 wins round 26!

Player 1 has 22 cards.
Player 2 has 30 cards.
Player 1 plays 8Clubs
Player 2 plays KSpades
Player 2 wins round 27!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays 5Diamonds
Player 2 plays JDiamonds
Player 2 wins round 28!

Player 1 has 20 cards.
Player 2 has 32 cards.
Player 1 plays 9Diamonds
Player 2 plays 5Clubs
Player 1 wins round 29!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays 2Clubs
Player 2 plays 3Spades
Player 2 wins round 30!

Player 1 has 20 cards.
Player 2 has 32 cards.
Player 1 plays JHearts
Player 2 plays 9Clubs
Player 1 wins round 31!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays 7Diamonds
Player 2 plays 6Diamonds
Player 1 wins round 32!

Player 1 has 22 cards.
Player 2 has 30 cards.
Player 1 plays 10Spades
Player 2 plays QHearts
Player 2 wins round 33!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays 10Diamonds
Player 2 plays 9Hearts
Player 2 wins round 34!

Player 1 has 20 cards.
Player 2 has 32 cards.
Player 1 plays 6Hearts
Player 2 plays QClubs
Player 2 wins round 35!

Player 1 has 19 cards.
Player 2 has 33 cards.
Player 1 plays 4Diamonds
Player 2 plays 6Spades
Player 2 wins round 36!

Player 1 has 18 cards.
Player 2 has 34 cards.
Player 1 plays 8Hearts
Player 2 plays JClubs
Player 2 wins round 37!

Player 1 has 17 cards.
Player 2 has 35 cards.
Player 1 plays 7Hearts
Player 2 plays 2Spades
Player 1 wins round 38!

Player 1 has 18 cards.
Player 2 has 34 cards.
Player 1 plays AHearts
Player 2 plays ADiamonds
Player 1 wins round 39!

Player 1 has 19 cards.
Player 2 has 33 cards.
Player 1 plays 4Clubs
Player 2 plays 7Clubs
Player 2 wins round 40!

Player 1 has 18 cards.
Player 2 has 34 cards.
Player 1 plays KDiamonds
Player 2 plays QSpades
Player 2 wins round 41!

Player 1 has 17 cards.
Player 2 has 35 cards.
Player 1 plays 3Hearts
Player 2 plays 9Spades
Player 2 wins round 42!

Player 1 has 16 cards.
Player 2 has 36 cards.
Player 1 plays 5Spades
Player 2 plays JSpades
Player 2 wins round 43!

Player 1 has 15 cards.
Player 2 has 37 cards.
Player 1 plays 4Hearts
Player 2 plays 10Clubs
Player 1 wins round 44!

Player 1 has 16 cards.
Player 2 has 36 cards.
Player 1 plays 8Diamonds
Player 2 plays QDiamonds
Player 2 wins round 45!

Player 1 has 15 cards.
Player 2 has 37 cards.
Player 1 plays 3Clubs
Player 2 plays 10Hearts
Player 1 wins round 46!

Player 1 has 16 cards.
Player 2 has 36 cards.
Player 1 plays 2Hearts
Player 2 plays KHearts
Player 2 wins round 47!

Player 1 has 15 cards.
Player 2 has 37 cards.
Player 1 plays 2Diamonds
Player 2 plays 4Spades
Player 2 wins round 48!

Player 1 has 14 cards.
Player 2 has 38 cards.
Player 1 plays 9Diamonds
Player 2 plays ASpades
Player 2 wins round 49!

Player 1 has 13 cards.
Player 2 has 39 cards.
Player 1 plays 5Clubs
Player 2 plays 5Hearts
Player 2 wins round 50!

Player 1 has 12 cards.
Player 2 has 40 cards.
Player 1 plays JHearts
Player 2 plays AClubs
Player 1 wins round 51!

Player 1 has 13 cards.
Player 2 has 39 cards.
Player 1 plays 9Clubs
Player 2 plays 8Spades
Player 1 wins round 52!

Player 1 has 14 cards.
Player 2 has 38 cards.
Player 1 plays 7Diamonds
Player 2 plays 7Spades
Player 2 wins round 53!

Player 1 has 13 cards.
Player 2 has 39 cards.
Player 1 plays 6Diamonds
Player 2 plays 3Diamonds
Player 1 wins round 54!

Player 1 has 14 cards.
Player 2 has 38 cards.
Player 1 plays 7Hearts
Player 2 plays KClubs
Player 2 wins round 55!

Player 1 has 13 cards.
Player 2 has 39 cards.
Player 1 plays 2Spades
Player 2 plays 6Clubs
Player 2 wins round 56!

Player 1 has 12 cards.
Player 2 has 40 cards.
Player 1 plays AHearts
Player 2 plays KSpades
Player 2 wins round 57!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays ADiamonds
Player 2 plays 8Clubs
Player 1 wins round 58!

Player 1 has 12 cards.
Player 2 has 40 cards.
Player 1 plays 4Hearts
Player 2 plays JDiamonds
Player 2 wins round 59!

Player 1 has 11 cards.
Player 2 has 41 cards.
Player 1 plays 10Clubs
Player 2 plays 5Diamonds
Player 2 wins round 60!

Player 1 has 10 cards.
Player 2 has 42 cards.
Player 1 plays 3Clubs
Player 2 plays 3Spades
Player 2 wins round 61!

Player 1 has 9 cards.
Player 2 has 43 cards.
Player 1 plays 10Hearts
Player 2 plays 2Clubs
Player 2 wins round 62!

Player 1 has 8 cards.
Player 2 has 44 cards.
Player 1 plays JHearts
Player 2 plays QHearts
Player 2 wins round 63!

Player 1 has 7 cards.
Player 2 has 45 cards.
Player 1 plays AClubs
Player 2 plays 10Spades
Player 1 wins round 64!

Player 1 has 8 cards.
Player 2 has 44 cards.
Player 1 plays 9Clubs
Player 2 plays 9Hearts
Player 2 wins round 65!

Player 1 has 7 cards.
Player 2 has 45 cards.
Player 1 plays 8Spades
Player 2 plays 10Diamonds
Player 1 wins round 66!

Player 1 has 8 cards.
Player 2 has 44 cards.
Player 1 plays 6Diamonds
Player 2 plays QClubs
Player 2 wins round 67!

Player 1 has 7 cards.
Player 2 has 45 cards.
Player 1 plays 3Diamonds
Player 2 plays 6Hearts
Player 2 wins round 68!

Player 1 has 6 cards.
Player 2 has 46 cards.
Player 1 plays ADiamonds
Player 2 plays 6Spades
Player 1 wins round 69!

Player 1 has 7 cards.
Player 2 has 45 cards.
Player 1 plays 8Clubs
Player 2 plays 4Diamonds
Player 1 wins round 70!

Player 1 has 8 cards.
Player 2 has 44 cards.
Player 1 plays AClubs
Player 2 plays JClubs
Player 2 wins round 71!

Player 1 has 7 cards.
Player 2 has 45 cards.
Player 1 plays 10Spades
Player 2 plays 8Hearts
Player 2 wins round 72!

Player 1 has 6 cards.
Player 2 has 46 cards.
Player 1 plays 8Spades
Player 2 plays 7Clubs
Player 1 wins round 73!

Player 1 has 7 cards.
Player 2 has 45 cards.
Player 1 plays 10Diamonds
Player 2 plays 4Clubs
Player 2 wins round 74!

Player 1 has 6 cards.
Player 2 has 46 cards.
Player 1 plays ADiamonds
Player 2 plays QSpades
Player 2 wins round 75!

Player 1 has 5 cards.
Player 2 has 47 cards.
Player 1 plays 6Spades
Player 2 plays KDiamonds
Player 2 wins round 76!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 8Clubs
Player 2 plays 9Spades
Player 2 wins round 77!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 4Diamonds
Player 2 plays 3Hearts
Player 1 wins round 78!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 8Spades
Player 2 plays JSpades
Player 2 wins round 79!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 7Clubs
Player 2 plays 5Spades
Player 1 wins round 80!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 4Diamonds
Player 2 plays QDiamonds
Player 2 wins round 81!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 3Hearts
Player 2 plays 8Diamonds
Player 2 wins round 82!

Player 1 has 2 cards.
Player 2 has 50 cards.
Player 1 plays 7Clubs
Player 2 plays KHearts
Player 2 wins round 83!

Player 1 has 1 cards.
Player 2 has 51 cards.
Player 1 plays 5Spades
Player 2 plays 2Hearts
Player 1 wins round 84!

Player 1 has 2 cards.
Player 2 has 50 cards.
Player 1 plays 5Spades
Player 2 plays 4Spades
Player 1 wins round 85!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 2Hearts
Player 2 plays 2Diamonds
Player 1 wins round 86!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 5Spades
Player 2 plays ASpades
Player 2 wins round 87!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 4Spades
Player 2 plays 9Diamonds
Player 2 wins round 88!

Player 1 has 2 cards.
Player 2 has 50 cards.
Player 1 plays 2Hearts
Player 2 plays 5Hearts
Player 2 wins round 89!

Player 1 has 1 cards.
Player 2 has 51 cards.
Player 1 plays 2Diamonds
Player 2 plays 5Clubs
Player 2 wins round 90!

Player 1 has 0 cards.
Player 2 has 52 cards.
Player 2 won in 90 rounds!
PS C:\Users\alexh\CS2>*/

/* #4 (including wars) 30 rounds
This one is a super cool example becuase 5 wars happen in round 6, and it 
even collects the cards properly!! Nothing broke!!!
Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 8Spades
Player 2 plays QSpades
Player 2 wins round 1!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 2Hearts
Player 2 plays 8Hearts
Player 2 wins round 2!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays 7Diamonds
Player 2 plays 2Diamonds
Player 1 wins round 3!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 2Spades
Player 2 plays ASpades
Player 2 wins round 4!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays JHearts
Player 2 plays 5Diamonds
Player 1 wins round 5!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays KSpades
Player 2 plays KHearts
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 21 cards.
Player 2 has 23 cards.
Player 1 plays QClubs
Player 2 plays QHearts
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 17 cards.
Player 2 has 19 cards.
Player 1 plays 4Diamonds
Player 2 plays 4Clubs
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 13 cards.
Player 2 has 15 cards.
Player 1 plays ADiamonds
Player 2 plays AClubs
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 9 cards.
Player 2 has 11 cards.
Player 1 plays 6Clubs
Player 2 plays 6Spades
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 5 cards.
Player 2 has 7 cards.
Player 1 plays 3Clubs
Player 2 plays 7Spades
Player 2 wins round 6!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 7Diamonds
Player 2 plays QSpades
Player 2 wins round 7!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 2Diamonds
Player 2 plays 8Spades
Player 2 wins round 8!

Player 1 has 2 cards.
Player 2 has 50 cards.
Player 1 plays JHearts
Player 2 plays 8Hearts
Player 1 wins round 9!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 5Diamonds
Player 2 plays 2Hearts
Player 1 wins round 10!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays JHearts
Player 2 plays ASpades
Player 1 wins round 11!

Player 1 has 5 cards.
Player 2 has 47 cards.
Player 1 plays 8Hearts
Player 2 plays 2Spades
Player 1 wins round 12!

Player 1 has 6 cards.
Player 2 has 46 cards.
Player 1 plays 5Diamonds
Player 2 plays 7Spades
Player 2 wins round 13!

Player 1 has 5 cards.
Player 2 has 47 cards.
Player 1 plays 2Hearts
Player 2 plays 3Clubs
Player 2 wins round 14!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays JHearts
Player 2 plays KDiamonds
Player 2 wins round 15!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays ASpades
Player 2 plays 9Clubs
Player 1 wins round 16!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 8Hearts
Player 2 plays 6Spades
Player 1 wins round 17!

Player 1 has 5 cards.
Player 2 has 47 cards.
Player 1 plays 2Spades
Player 2 plays 6Clubs
Player 2 wins round 18!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays ASpades
Player 2 plays JSpades
Player 2 wins round 19!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 9Clubs
Player 2 plays 10Clubs
Player 1 wins round 20!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 8Hearts
Player 2 plays AClubs
Player 2 wins round 21!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 6Spades
Player 2 plays ADiamonds
Player 2 wins round 22!

Player 1 has 2 cards.
Player 2 has 50 cards.
Player 1 plays 9Clubs
Player 2 plays 6Hearts
Player 1 wins round 23!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 10Clubs
Player 2 plays JDiamonds
Player 2 wins round 24!

Player 1 has 2 cards.
Player 2 has 50 cards.
Player 1 plays 9Clubs
Player 2 plays 4Clubs
Player 1 wins round 25!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 6Hearts
Player 2 plays 4Diamonds
Player 1 wins round 26!

Player 1 has 4 cards.
Player 2 has 48 cards.
Player 1 plays 9Clubs
Player 2 plays KClubs
Player 2 wins round 27!

Player 1 has 3 cards.
Player 2 has 49 cards.
Player 1 plays 4Clubs
Player 2 plays JClubs
Player 2 wins round 28!

Player 1 has 2 cards.
Player 2 has 50 cards.
Player 1 plays 6Hearts
Player 2 plays QHearts
Player 2 wins round 29!

Player 1 has 1 cards.
Player 2 has 51 cards.
Player 1 plays 4Diamonds
Player 2 plays QClubs
Player 2 wins round 30!

Player 2 won in 30 rounds!
PS C:\Users\alexh\CS2>
*/
/* #5 (indcluding wars) 100 rounds
Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 3Clubs
Player 2 plays JHearts
Player 2 wins round 1!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 3Hearts
Player 2 plays QDiamonds
Player 2 wins round 2!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays 4Spades
Player 2 plays 8Hearts
Player 2 wins round 3!

Player 1 has 23 cards.
Player 2 has 29 cards.
Player 1 plays KSpades
Player 2 plays QClubs
Player 2 wins round 4!

Player 1 has 22 cards.
Player 2 has 30 cards.
Player 1 plays 5Clubs
Player 2 plays 7Clubs
Player 2 wins round 5!

Player 1 has 21 cards.
Player 2 has 31 cards.
Player 1 plays QHearts
Player 2 plays 10Hearts
Player 1 wins round 6!

Player 1 has 22 cards.
Player 2 has 30 cards.
Player 1 plays KClubs
Player 2 plays 6Hearts
Player 1 wins round 7!

Player 1 has 23 cards.
Player 2 has 29 cards.
Player 1 plays 8Spades
Player 2 plays 4Hearts
Player 1 wins round 8!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays 9Hearts
Player 2 plays 2Spades
Player 1 wins round 9!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 5Hearts
Player 2 plays 10Diamonds
Player 1 wins round 10!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 8Clubs
Player 2 plays KDiamonds
Player 2 wins round 11!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 10Clubs
Player 2 plays JDiamonds
Player 2 wins round 12!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays 6Diamonds
Player 2 plays 2Clubs
Player 1 wins round 13!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays AHearts
Player 2 plays 4Clubs
Player 1 wins round 14!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 9Clubs
Player 2 plays 3Spades
Player 1 wins round 15!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays JSpades
Player 2 plays 9Diamonds
Player 1 wins round 16!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 3Diamonds
Player 2 plays 2Diamonds
Player 1 wins round 17!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays ADiamonds
Player 2 plays 8Diamonds
Player 1 wins round 18!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 7Diamonds
Player 2 plays 5Diamonds
Player 1 wins round 19!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 10Spades
Player 2 plays 5Spades
Player 2 wins round 20!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 4Diamonds
Player 2 plays 6Spades
Player 2 wins round 21!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays KHearts
Player 2 plays 6Clubs
Player 1 wins round 22!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays ASpades
Player 2 plays 7Hearts
Player 1 wins round 23!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays JClubs
Player 2 plays AClubs
Player 1 wins round 24!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays 2Hearts
Player 2 plays QSpades
Player 2 wins round 25!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 9Spades
Player 2 plays 7Spades
Player 1 wins round 26!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays QHearts
Player 2 plays JHearts
Player 1 wins round 27!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays 10Hearts
Player 2 plays 3Clubs
Player 2 wins round 28!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays KClubs
Player 2 plays QDiamonds
Player 2 wins round 29!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 6Hearts
Player 2 plays 3Hearts
Player 1 wins round 30!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays 8Spades
Player 2 plays 8Hearts
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 28 cards.
Player 2 has 16 cards.
Player 1 plays 5Hearts
Player 2 plays 7Clubs
Player 2 wins round 31!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 10Diamonds
Player 2 plays 5Clubs
Player 2 wins round 32!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 6Diamonds
Player 2 plays KDiamonds
Player 2 wins round 33!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 2Clubs
Player 2 plays 8Clubs
Player 2 wins round 34!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays AHearts
Player 2 plays JDiamonds
Player 2 wins round 35!

Player 1 has 23 cards.
Player 2 has 29 cards.
Player 1 plays 4Clubs
Player 2 plays 10Clubs
Player 1 wins round 36!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays 9Clubs
Player 2 plays 5Spades
Player 1 wins round 37!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 3Spades
Player 2 plays 10Spades
Player 1 wins round 38!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays JSpades
Player 2 plays 6Spades
Player 1 wins round 39!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 9Diamonds
Player 2 plays 4Diamonds
Player 1 wins round 40!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 3Diamonds
Player 2 plays QSpades
Player 2 wins round 41!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 2Diamonds
Player 2 plays 2Hearts
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 23 cards.
Player 2 has 21 cards.
Player 1 plays 5Diamonds
Player 2 plays KClubs
Player 2 wins round 42!

Player 1 has 22 cards.
Player 2 has 30 cards.
Player 1 plays KHearts
Player 2 plays 7Clubs
Player 1 wins round 43!

Player 1 has 23 cards.
Player 2 has 29 cards.
Player 1 plays 6Clubs
Player 2 plays 5Hearts
Player 1 wins round 44!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays ASpades
Player 2 plays 2Spades
Player 1 wins round 45!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays 7Hearts
Player 2 plays 9Hearts
Player 2 wins round 46!

Player 1 has 24 cards.
Player 2 has 28 cards.
Player 1 plays JClubs
Player 2 plays 8Hearts
Player 1 wins round 47!

Player 1 has 25 cards.
Player 2 has 27 cards.
Player 1 plays AClubs
Player 2 plays 5Hearts
Player 1 wins round 48!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 9Spades
Player 2 plays 2Spades
Player 1 wins round 49!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 7Spades
Player 2 plays 9Hearts
Player 2 wins round 50!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays QHearts
Player 2 plays 4Hearts
Player 1 wins round 51!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays JHearts
Player 2 plays 8Spades
Player 1 wins round 52!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 6Hearts
Player 2 plays 5Clubs
Player 1 wins round 53!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 3Hearts
Player 2 plays 10Diamonds
Player 1 wins round 54!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 4Clubs
Player 2 plays KDiamonds
Player 2 wins round 55!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 10Clubs
Player 2 plays 6Diamonds
Player 2 wins round 56!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 9Clubs
Player 2 plays 8Clubs
Player 1 wins round 57!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 5Spades
Player 2 plays 2Clubs
Player 1 wins round 58!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 3Spades
Player 2 plays JDiamonds
Player 2 wins round 59!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 10Spades
Player 2 plays AHearts
Player 2 wins round 60!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays JSpades
Player 2 plays QSpades
Player 2 wins round 61!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 6Spades
Player 2 plays 3Diamonds
Player 1 wins round 62!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 9Diamonds
Player 2 plays KClubs
Player 2 wins round 63!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 4Diamonds
Player 2 plays 5Diamonds
Player 2 wins round 64!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays KHearts
Player 2 plays 7Diamonds
Player 1 wins round 65!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 7Clubs
Player 2 plays 8Diamonds
Player 2 wins round 66!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 6Clubs
Player 2 plays 2Hearts
Player 1 wins round 67!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 5Hearts
Player 2 plays 5Diamonds
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 23 cards.
Player 2 has 21 cards.
Player 1 plays 8Hearts
Player 2 plays 2Diamonds
Player 1 wins round 68!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays AClubs
Player 2 plays 9Hearts
Player 1 wins round 69!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays 5Hearts
Player 2 plays 7Hearts
Player 2 wins round 70!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays 9Spades
Player 2 plays 9Hearts
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 28 cards.
Player 2 has 16 cards.
Player 1 plays JHearts
Player 2 plays 6Diamonds
Player 1 wins round 71!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 8Spades
Player 2 plays 10Clubs
Player 1 wins round 72!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays 6Hearts
Player 2 plays JDiamonds
Player 2 wins round 73!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 5Clubs
Player 2 plays 3Spades
Player 1 wins round 74!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays 3Hearts
Player 2 plays AHearts
Player 2 wins round 75!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 10Diamonds
Player 2 plays 10Spades
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 33 cards.
Player 2 has 11 cards.
Player 1 plays 2Clubs
Player 2 plays 9Diamonds
Player 2 wins round 76!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays 6Spades
Player 2 plays 5Diamonds
Player 1 wins round 77!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays 3Diamonds
Player 2 plays 4Diamonds
Player 2 wins round 78!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays KHearts
Player 2 plays 8Diamonds
Player 1 wins round 79!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays 7Diamonds
Player 2 plays 7Clubs
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 29 cards.
Player 2 has 15 cards.
Player 1 plays JClubs
Player 2 plays 6Hearts
Player 1 wins round 80!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays 2Spades
Player 2 plays AHearts
Player 2 wins round 81!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays ASpades
Player 2 plays 3Hearts
Player 1 wins round 82!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays 5Hearts
Player 2 plays 9Diamonds
Player 2 wins round 83!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 2Diamonds
Player 2 plays 2Clubs
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 33 cards.
Player 2 has 11 cards.
Player 1 plays 5Diamonds
Player 2 plays 2Clubs
Player 1 wins round 84!

Player 1 has 42 cards.
Player 2 has 10 cards.
Player 1 plays AClubs
Player 2 plays 5Spades
Player 1 wins round 85!

Player 1 has 43 cards.
Player 2 has 9 cards.
Player 1 plays 9Hearts
Player 2 plays 8Clubs
Player 1 wins round 86!

Player 1 has 44 cards.
Player 2 has 8 cards.
Player 1 plays JHearts
Player 2 plays 9Clubs
Player 1 wins round 87!

Player 1 has 45 cards.
Player 2 has 7 cards.
Player 1 plays 4Hearts
Player 2 plays 10Diamonds
Player 1 wins round 88!

Player 1 has 46 cards.
Player 2 has 6 cards.
Player 1 plays QHearts
Player 2 plays 4Diamonds
Player 1 wins round 89!

Player 1 has 47 cards.
Player 2 has 5 cards.
Player 1 plays 2Spades
Player 2 plays 3Diamonds
Player 2 wins round 90!

Player 1 has 46 cards.
Player 2 has 6 cards.
Player 1 plays 9Spades
Player 2 plays AHearts
Player 2 wins round 91!

Player 1 has 45 cards.
Player 2 has 7 cards.
Player 1 plays 6Diamonds
Player 2 plays 2Spades
Player 1 wins round 92!

Player 1 has 46 cards.
Player 2 has 6 cards.
Player 1 plays JHearts
Player 2 plays 9Diamonds
Player 1 wins round 93!

Player 1 has 47 cards.
Player 2 has 5 cards.
Player 1 plays 4Hearts
Player 2 plays 5Hearts
Player 2 wins round 94!

Player 1 has 46 cards.
Player 2 has 6 cards.
Player 1 plays QHearts
Player 2 plays 3Diamonds
Player 1 wins round 95!

Player 1 has 47 cards.
Player 2 has 5 cards.
Player 1 plays 9Hearts
Player 2 plays 2Spades
Player 1 wins round 96!

Player 1 has 48 cards.
Player 2 has 4 cards.
Player 1 plays 8Spades
Player 2 plays AHearts
Player 2 wins round 97!

Player 1 has 47 cards.
Player 2 has 5 cards.
Player 1 plays 10Clubs
Player 2 plays 9Spades
Player 2 wins round 98!

Player 1 has 46 cards.
Player 2 has 6 cards.
Player 1 plays 5Clubs
Player 2 plays 5Hearts
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 42 cards.
Player 2 has 2 cards.
Player 1 plays KHearts
Player 2 plays 9Spades
Player 1 wins round 99!

Player 1 has 51 cards.
Player 2 has 1 cards.
Player 1 plays 8Diamonds
Player 2 plays 10Clubs
Player 1 wins round 100!

Player 1 has 52 cards.
Player 2 has 0 cards.
Player 1 won in 100 rounds!
PS C:\Users\alexh\CS2>*/

/* Bonus underflow issue from the wars
Funny example where there's an underflow caused by not having enough 
cards for a war (round 121). It fixes itself and the game ends normally when player 2 
wins enough rounds to return to 0 cards. I'm too lazy to fix this issue, and i
already went above and beyond what is expected for the purposes of the assignment,
so I hope you'll let this bug slide :)

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 9Spades
Player 2 plays 5Spades
Player 1 wins round 1!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 3Spades
Player 2 plays ADiamonds
Player 2 wins round 2!

Player 1 has 26 cards.
Player 2 has 26 cards.
Player 1 plays 4Hearts
Player 2 plays 4Diamonds
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 22 cards.
Player 2 has 22 cards.
Player 1 plays 8Spades
Player 2 plays 6Clubs
Player 1 wins round 3!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays AClubs
Player 2 plays 7Hearts
Player 1 wins round 4!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays 10Diamonds
Player 2 plays JDiamonds
Player 2 wins round 5!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 2Hearts
Player 2 plays 9Diamonds
Player 2 wins round 6!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays QClubs
Player 2 plays 9Clubs
Player 1 wins round 7!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays KHearts
Player 2 plays 2Clubs
Player 1 wins round 8!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays QSpades
Player 2 plays 5Hearts
Player 1 wins round 9!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays 8Diamonds
Player 2 plays QDiamonds
Player 2 wins round 10!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays AHearts
Player 2 plays KSpades
Player 2 wins round 11!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 3Clubs
Player 2 plays 6Hearts
Player 2 wins round 12!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays KDiamonds
Player 2 plays 10Clubs
Player 1 wins round 13!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 2Diamonds
Player 2 plays 4Spades
Player 2 wins round 14!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 8Clubs
Player 2 plays 7Spades
Player 1 wins round 15!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 3Diamonds
Player 2 plays 8Hearts
Player 2 wins round 16!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 4Clubs
Player 2 plays 3Hearts
Player 1 wins round 17!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays JSpades
Player 2 plays ASpades
Player 1 wins round 18!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays 6Spades
Player 2 plays 10Hearts
Player 1 wins round 19!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays QHearts
Player 2 plays 10Spades
Player 1 wins round 20!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays 7Diamonds
Player 2 plays 5Diamonds
Player 1 wins round 21!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays JHearts
Player 2 plays JClubs
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 31 cards.
Player 2 has 13 cards.
Player 1 plays 7Clubs
Player 2 plays 10Diamonds
Player 1 wins round 22!

Player 1 has 40 cards.
Player 2 has 12 cards.
Player 1 plays 5Clubs
Player 2 plays 9Diamonds
Player 2 wins round 23!

Player 1 has 39 cards.
Player 2 has 13 cards.
Player 1 plays KClubs
Player 2 plays 2Hearts
Player 1 wins round 24!

Player 1 has 40 cards.
Player 2 has 12 cards.
Player 1 plays 4Hearts
Player 2 plays QDiamonds
Player 2 wins round 25!

Player 1 has 39 cards.
Player 2 has 13 cards.
Player 1 plays 6Clubs
Player 2 plays 8Diamonds
Player 2 wins round 26!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays 8Spades
Player 2 plays KSpades
Player 2 wins round 27!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 7Clubs
Player 2 plays AHearts
Player 2 wins round 28!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays 5Clubs
Player 2 plays 6Hearts
Player 2 wins round 29!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 4Diamonds
Player 2 plays 3Clubs
Player 1 wins round 30!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays AClubs
Player 2 plays 4Spades
Player 1 wins round 31!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 7Hearts
Player 2 plays 2Diamonds
Player 1 wins round 32!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays QClubs
Player 2 plays 8Hearts
Player 1 wins round 33!

Player 1 has 39 cards.
Player 2 has 13 cards.
Player 1 plays 9Clubs
Player 2 plays 3Diamonds
Player 1 wins round 34!

Player 1 has 40 cards.
Player 2 has 12 cards.
Player 1 plays KHearts
Player 2 plays 9Diamonds
Player 1 wins round 35!

Player 1 has 41 cards.
Player 2 has 11 cards.
Player 1 plays 2Clubs
Player 2 plays 5Clubs
Player 2 wins round 36!

Player 1 has 40 cards.
Player 2 has 12 cards.
Player 1 plays QSpades
Player 2 plays QDiamonds
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 36 cards.
Player 2 has 8 cards.
Player 1 plays 8Clubs
Player 2 plays KSpades
Player 2 wins round 37!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 7Spades
Player 2 plays 8Spades
Player 2 wins round 38!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays 4Clubs
Player 2 plays AHearts
Player 2 wins round 39!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays 3Hearts
Player 2 plays 7Clubs
Player 2 wins round 40!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays JSpades
Player 2 plays 6Hearts
Player 1 wins round 41!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays ASpades
Player 2 plays 5Clubs
Player 1 wins round 42!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays 6Spades
Player 2 plays 5Clubs
Player 1 wins round 43!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 10Hearts
Player 2 plays 2Clubs
Player 2 wins round 44!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays QHearts
Player 2 plays KSpades
Player 1 wins round 45!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 10Spades
Player 2 plays 8Clubs
Player 2 wins round 46!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays 7Diamonds
Player 2 plays 10Clubs
Player 1 wins round 47!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 5Diamonds
Player 2 plays KDiamonds
Player 2 wins round 48!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays 7Clubs
Player 2 plays QDiamonds
Player 2 wins round 49!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays 8Spades
Player 2 plays 8Clubs
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 29 cards.
Player 2 has 15 cards.
Player 1 plays 10Diamonds
Player 2 plays QSpades
Player 2 wins round 50!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 7Clubs
Player 2 plays 8Spades
Player 2 wins round 51!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays 8Spades
Player 2 plays 7Spades
Player 1 wins round 52!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 5Spades
Player 2 plays AHearts
Player 2 wins round 53!

Player 1 has 27 cards.
Player 2 has 25 cards.
Player 1 plays JClubs
Player 2 plays 4Clubs
Player 1 wins round 54!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays KClubs
Player 2 plays 7Clubs
Player 1 wins round 55!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 2Hearts
Player 2 plays 3Hearts
Player 2 wins round 56!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 4Diamonds
Player 2 plays 2Clubs
Player 1 wins round 57!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 3Clubs
Player 2 plays 10Hearts
Player 1 wins round 58!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays AClubs
Player 2 plays 8Clubs
Player 1 wins round 59!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 4Spades
Player 2 plays 10Spades
Player 1 wins round 60!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays 7Hearts
Player 2 plays KDiamonds
Player 2 wins round 61!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 2Diamonds
Player 2 plays 5Diamonds
Player 2 wins round 62!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays QClubs
Player 2 plays QDiamonds
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 26 cards.
Player 2 has 18 cards.
Player 1 plays KHearts
Player 2 plays JHearts
Player 1 wins round 63!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 9Diamonds
Player 2 plays 9Spades
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 31 cards.
Player 2 has 13 cards.
Player 1 plays 5Clubs
Player 2 plays 9Spades
Player 2 wins round 64!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 6Spades
Player 2 plays 5Spades
Player 1 wins round 65!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 5Clubs
Player 2 plays 8Spades
Player 2 wins round 66!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays QHearts
Player 2 plays 8Spades
Player 1 wins round 67!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays KSpades
Player 2 plays 7Clubs
Player 1 wins round 68!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays 7Diamonds
Player 2 plays AHearts
Player 2 wins round 69!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 10Clubs
Player 2 plays 5Spades
Player 2 wins round 70!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 8Spades
Player 2 plays 3Hearts
Player 1 wins round 71!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 7Spades
Player 2 plays 2Hearts
Player 1 wins round 72!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays JClubs
Player 2 plays KDiamonds
Player 2 wins round 73!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 4Clubs
Player 2 plays 7Hearts
Player 2 wins round 74!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays KClubs
Player 2 plays 5Diamonds
Player 1 wins round 75!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 7Clubs
Player 2 plays 2Diamonds
Player 1 wins round 76!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays 4Diamonds
Player 2 plays 9Spades
Player 2 wins round 77!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays 2Clubs
Player 2 plays 5Clubs
Player 2 wins round 78!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 3Clubs
Player 2 plays ASpades
Player 2 wins round 79!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 10Hearts
Player 2 plays 6Hearts
Player 2 wins round 80!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays AClubs
Player 2 plays 9Spades
Player 1 wins round 81!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 8Clubs
Player 2 plays 5Clubs
Player 1 wins round 82!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays 4Spades
Player 2 plays ASpades
Player 2 wins round 83!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 10Spades
Player 2 plays 6Hearts
Player 2 wins round 84!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays KHearts
Player 2 plays JSpades
Player 1 wins round 85!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 3Diamonds
Player 2 plays 9Diamonds
Player 2 wins round 86!

Player 1 has 28 cards.
Player 2 has 24 cards.
Player 1 plays 9Clubs
Player 2 plays 8Spades
Player 1 wins round 87!

Player 1 has 29 cards.
Player 2 has 23 cards.
Player 1 plays 8Hearts
Player 2 plays 5Clubs
Player 1 wins round 88!

Player 1 has 30 cards.
Player 2 has 22 cards.
Player 1 plays QClubs
Player 2 plays AHearts
Player 1 wins round 89!

Player 1 has 31 cards.
Player 2 has 21 cards.
Player 1 plays JHearts
Player 2 plays 7Diamonds
Player 1 wins round 90!

Player 1 has 32 cards.
Player 2 has 20 cards.
Player 1 plays KHearts
Player 2 plays 5Spades
Player 1 wins round 91!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays 3Diamonds
Player 2 plays 10Clubs
Player 1 wins round 92!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays 9Clubs
Player 2 plays KDiamonds
Player 2 wins round 93!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays QDiamonds
Player 2 plays JClubs
Player 1 wins round 94!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays 6Spades
Player 2 plays 7Hearts
Player 2 wins round 95!

Player 1 has 33 cards.
Player 2 has 19 cards.
Player 1 plays 5Spades
Player 2 plays 4Clubs
Player 1 wins round 96!

Player 1 has 34 cards.
Player 2 has 18 cards.
Player 1 plays QHearts
Player 2 plays 9Spades
Player 1 wins round 97!

Player 1 has 35 cards.
Player 2 has 17 cards.
Player 1 plays 8Spades
Player 2 plays 4Diamonds
Player 1 wins round 98!

Player 1 has 36 cards.
Player 2 has 16 cards.
Player 1 plays KSpades
Player 2 plays 5Clubs
Player 1 wins round 99!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 7Clubs
Player 2 plays 2Clubs
Player 1 wins round 100!

Player 1 has 38 cards.
Player 2 has 14 cards.
Player 1 plays 8Spades
Player 2 plays ASpades
Player 2 wins round 101!

Player 1 has 37 cards.
Player 2 has 15 cards.
Player 1 plays 3Hearts
Player 2 plays 3Clubs
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 33 cards.
Player 2 has 11 cards.
Player 1 plays 5Diamonds
Player 2 plays 4Spades
Player 1 wins round 102!

Player 1 has 42 cards.
Player 2 has 10 cards.
Player 1 plays 7Clubs
Player 2 plays 6Hearts
Player 1 wins round 103!

Player 1 has 43 cards.
Player 2 has 9 cards.
Player 1 plays 2Diamonds
Player 2 plays 10Spades
Player 1 wins round 104!

Player 1 has 44 cards.
Player 2 has 8 cards.
Player 1 plays AClubs
Player 2 plays 9Diamonds
Player 1 wins round 105!

Player 1 has 45 cards.
Player 2 has 7 cards.
Player 1 plays 9Spades
Player 2 plays 3Diamonds
Player 1 wins round 106!

Player 1 has 46 cards.
Player 2 has 6 cards.
Player 1 plays 8Clubs
Player 2 plays KDiamonds
Player 2 wins round 107!

Player 1 has 45 cards.
Player 2 has 7 cards.
Player 1 plays 5Clubs
Player 2 plays 9Clubs
Player 2 wins round 108!

Player 1 has 44 cards.
Player 2 has 8 cards.
Player 1 plays KHearts
Player 2 plays 7Hearts
Player 1 wins round 109!

Player 1 has 45 cards.
Player 2 has 7 cards.
Player 1 plays JSpades
Player 2 plays 6Spades
Player 1 wins round 110!

Player 1 has 46 cards.
Player 2 has 6 cards.
Player 1 plays 9Clubs
Player 2 plays ASpades
Player 2 wins round 111!

Player 1 has 45 cards.
Player 2 has 7 cards.
Player 1 plays 8Spades
Player 2 plays 8Spades
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 41 cards.
Player 2 has 3 cards.
Player 1 plays AHearts
Player 2 plays 5Clubs
Player 1 wins round 112!

Player 1 has 50 cards.
Player 2 has 2 cards.
Player 1 plays JHearts
Player 2 plays ASpades
Player 1 wins round 113!

Player 1 has 51 cards.
Player 2 has 1 cards.
Player 1 plays 7Diamonds
Player 2 plays 9Clubs
Player 2 wins round 114!

Player 1 has 50 cards.
Player 2 has 2 cards.
Player 1 plays KHearts
Player 2 plays 9Clubs
Player 1 wins round 115!

Player 1 has 51 cards.
Player 2 has 1 cards.
Player 1 plays 5Spades
Player 2 plays 7Diamonds
Player 2 wins round 116!

Player 1 has 50 cards.
Player 2 has 2 cards.
Player 1 plays 3Diamonds
Player 2 plays 7Diamonds
Player 2 wins round 117!

Player 1 has 49 cards.
Player 2 has 3 cards.
Player 1 plays 10Clubs
Player 2 plays 5Spades
Player 2 wins round 118!

Player 1 has 48 cards.
Player 2 has 4 cards.
Player 1 plays QDiamonds
Player 2 plays 7Diamonds
Player 1 wins round 119!

Player 1 has 49 cards.
Player 2 has 3 cards.
Player 1 plays JClubs
Player 2 plays 3Diamonds
Player 1 wins round 120!

Player 1 has 50 cards.
Player 2 has 2 cards.
Player 1 plays 5Spades
Player 2 plays 5Spades
Cards are equal. Commence the war!
Both players have laid 3 cards face down.
Player 1 has 46 cards.
Player 2 has 18446744073709551614 cards.
Player 1 plays 8Spades
Player 2 plays 7Diamonds
Player 1 wins round 121!

Player 1 has 55 cards.
Player 2 has 18446744073709551613 cards.
Player 1 plays 4Diamonds
Player 2 plays 3Diamonds
Player 1 wins round 122!

Player 1 has 56 cards.
Player 2 has 18446744073709551612 cards.
Player 1 plays KSpades
Player 2 plays 5Spades
Player 1 wins round 123!

Player 1 has 57 cards.
Player 2 has 18446744073709551611 cards.
Player 1 plays 5Clubs
Player 2 plays 10Clubs
Player 1 wins round 124!

Player 1 has 58 cards.
Player 2 has 18446744073709551610 cards.
Player 1 plays 7Clubs
Player 2 plays KDiamonds
Player 2 wins round 125!

Player 1 has 57 cards.
Player 2 has 18446744073709551611 cards.
Player 1 plays 2Clubs
Player 2 plays 9Clubs
Player 2 wins round 126!

Player 1 has 56 cards.
Player 2 has 18446744073709551612 cards.
Player 1 plays 5Diamonds
Player 2 plays 7Hearts
Player 2 wins round 127!

Player 1 has 55 cards.
Player 2 has 18446744073709551613 cards.
Player 1 plays KClubs
Player 2 plays 6Spades
Player 1 wins round 128!

Player 1 has 56 cards.
Player 2 has 18446744073709551612 cards.
Player 1 plays 2Hearts
Player 2 plays ASpades
Player 2 wins round 129!

Player 1 has 55 cards.
Player 2 has 18446744073709551613 cards.
Player 1 plays 7Spades
Player 2 plays 8Spades
Player 2 wins round 130!

Player 1 has 54 cards.
Player 2 has 18446744073709551614 cards.
Player 1 plays 3Hearts
Player 2 plays KDiamonds
Player 2 wins round 131!

Player 1 has 53 cards.
Player 2 has 18446744073709551615 cards.
Player 1 plays 4Spades
Player 2 plays 8Clubs
Player 2 wins round 132!

Player 1 has 52 cards.
Player 2 has 0 cards.
Player 1 won in 132 rounds!
PS C:\Users\alexh\CS2>*/

#include <iostream>
#include <list>
#include <stdlib.h>
#include <vector>
#include <queue>
using namespace std;

class PlayingCard {
private:
    int suitNo;
    int cardNo;
public:
    friend bool operator<(const PlayingCard &card1, const PlayingCard &card2) {
        return ((card1.cardNo < card2.cardNo) ||
                ((card1.cardNo == card2.cardNo) && (card1.suitNo < card2.suitNo)));
    }
    PlayingCard(int n, int s) { cardNo = n; suitNo = s; }
    static const string FULLSUITS[4];
    static const string SHORTSUITS[4];
    static const string CARDNAME[13];
    string shortCardName() { return CARDNAME[cardNo] + SHORTSUITS[suitNo]; }
    string longCardName() { return CARDNAME[cardNo] + FULLSUITS[suitNo]; }
    string getCardNo() { return CARDNAME[cardNo]; }
};

const string PlayingCard::FULLSUITS[] = {"Clubs", "Diamonds", "Hearts", "Spades"};
const string PlayingCard::SHORTSUITS[] = {"C", "D", "H", "S"};
const string PlayingCard::CARDNAME[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};


int RandInRange(int low, int high) {
    return (low + rand()%(high - low + 1));
}

list<PlayingCard> generateShuffledDeck() {
    vector<PlayingCard> allCards;
    list<PlayingCard> shuffledCards;
    srand(time(0));
    for (int n = 0; n < 13; n++) {
        for (int s = 0; s < 4; s++) {
            allCards.push_back(PlayingCard(n,s));
        }
    }
    // for (auto c : allCards) {
    //    cout << c.shortCardName() << " " << endl;
    // }
    for (int i = 51; i >= 0; i--) {
        int choice = RandInRange(0,i);
        shuffledCards.push_back(allCards[choice]);
        allCards[choice] = allCards[i];
        allCards.pop_back();
    }
    return shuffledCards;
}

void dealCards(list<PlayingCard> cards, queue<PlayingCard> & p1queue, queue<PlayingCard> & p2queue) {
    while (!cards.empty()) {
        PlayingCard card = cards.front();
        cards.pop_front();
        p1queue.push(card);
        if (cards.empty()) {
            cerr << "WARNING! Uneven number of cards\n";
        }
        else {
            card = cards.front();
            cards.pop_front();
            p2queue.push(card);
        }
    }

}

/* @ Params
* q: the queue that receives the cards
* playPile: the pile that GIVES the cards
*/
void addToQueue(queue<PlayingCard> & q, list<PlayingCard> & playPile){
    for(auto itr : playPile){
        q.push(itr);
        playPile.pop_front();
    }
}

//war prototype to be called in playAndCompare
void war(list<PlayingCard> & p1PlayPile, list<PlayingCard> & p2PlayPile, 
            queue<PlayingCard> & p1queue, queue<PlayingCard> & p2queue, int & rounds);

//edit comparisons in this fxn to test comparing card no & suit
void playAndCompare(list<PlayingCard> & p1PlayPile, list<PlayingCard> & p2PlayPile, 
            queue<PlayingCard> & p1queue, queue<PlayingCard> & p2queue, int & rounds){
    cout << "Player 1 has " << p1queue.size() << " cards.\n";
    cout << "Player 2 has " << p2queue.size() << " cards.\n";
    //add a card to the play pile for both players
    p1PlayPile.push_front(p1queue.front());
    p1queue.pop();
    cout << "Player 1 plays " << p1PlayPile.front().longCardName() << endl;

    p2PlayPile.push_front(p2queue.front());
    p2queue.pop();
    cout << "Player 2 plays " << p2PlayPile.front().longCardName() << endl;

    //if p1 card has higher number, they collect ALL cards and add to hand
    if (p1PlayPile.front().getCardNo() > p2PlayPile.front().getCardNo()){
        cout << "Player 1 wins round " << rounds << "!\n\n";
        addToQueue(p1queue, p1PlayPile);
        addToQueue(p1queue, p2PlayPile);
    }
    //else p2 wins, collects all cards
    //p2 MUST collect cards in opposite order, otherwise game is infinite
    else if (p1PlayPile.front().getCardNo() < p2PlayPile.front().getCardNo()){
        cout << "Player 2 wins round " << rounds << "!\n\n";
        addToQueue(p2queue, p2PlayPile);
        addToQueue(p2queue, p1PlayPile);
    }
    //War
    else{
        war(p1PlayPile, p2PlayPile, p1queue, p2queue, rounds);
    }
}

void war(list<PlayingCard> & p1PlayPile, list<PlayingCard> & p2PlayPile, 
            queue<PlayingCard> & p1queue, queue<PlayingCard> & p2queue, int & rounds){
    cout << "Cards are equal. Commence the war!\n";     

    //add 3 unknown cards to both players playPiles  
    int i = 0;     
    for(i; i < 3; i++){
        //add check to see if a player runs out cards? means other player wins the war, takes all cards?

        //player 1 playpile
        p1PlayPile.push_front(p1queue.front());
        p1queue.pop();
        //cout << "Player 1 lays card # " << i+1 << " face down.\n";

        //player 2 playpile
        p2PlayPile.push_front(p1queue.front());
        p2queue.pop();
        //cout << "Player 2 lays card # " << i+1 << " face down.\n";
    }
    cout << "Both players have laid " << i << " cards face down.\n";
    //play and compare a new card, calling war recursively if needed
    playAndCompare(p1PlayPile, p2PlayPile, p1queue, p2queue, rounds);
}

int main() {
    list<PlayingCard> cards = generateShuffledDeck();
    queue<PlayingCard> p1queue;
    queue<PlayingCard> p2queue;
    dealCards(cards,p1queue,p2queue);
    int rounds = 0;

    // Play the game until one players wins and report how many rounds that took
    list<PlayingCard> p1PlayPile;
    list<PlayingCard> p2PlayPile;

    
    do{
        rounds++;
        //both players put their cards down
        playAndCompare(p1PlayPile, p2PlayPile, p1queue, p2queue, rounds);
    }while (!p1queue.empty() && !p2queue.empty());

    cout << "Player 1 has " << p1queue.size() << " cards.\n";
    cout << "Player 2 has " << p2queue.size() << " cards.\n";

    string winner;
    if(p1queue.empty()){
        winner = "Player 2";
    }
    else{
        winner = "Player 1";
    }
    cout << winner << " won in " << rounds << " rounds!";


    /*do

        player 1 puts their top card down

        player 2 puts their top card down

        //compare fxn{
        if player 1's card has a higher number (A > K > Q > J > 10 > 9 > 8 > 7 > 6 > 5 > 4 > 3 > 2) then
            player 1 collects both cards and adds them to their pile of cards (their queue)
        else if player 2's card has a higher number
            player 2 collects both cards and adds them to their pile of cards
        else a "War" occurs
            war fxn{
            players add their top 3 cards to the played pile and 
            }

            compare{
                "play" their next card, and the process repeats
            }
        }

    until one player is out of cards

    the other player is declared the winner*/
    return 0;
}
