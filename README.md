![Windhoven header](https://lh3.googleusercontent.com/9bHn8PyTr57Y_Rq47Z7cxKPttvJCu2SHmt88d0mq-gqW_KO31PO5pxoyyCTh5HO_57ybQOmiGO0KnE6R-EiKuXA3OZJ1sRGF5T_1PKvpP-Oz2PRsYwT_h3yh1mals-qRCYMc_e6ZkBoXAZVqAWi34slYOWdZmKLYnA2MJy5NIVu0okzwE9hYDEaeivEeI8YkEKZ8FLOGoI6SkODVG9wloRgOU21k2La-OzJ2YlJIMG8b-fZ4aheIrGH7RUN9UdLmSKUuNHhFa3fOrejXSugFv0AA5pTu9ZkKnOBw8IK63dDavUKCKlW1a8VmKN8goJGENViL_4Bz56rypp59YCjaLfztUcL-I95B7qVUCH5wZaO9cJ0ebD9Llvtg4eGDja1oOgypgYRF5m3tUT7wGk4tYjBjRJshrWKwk_I1h99DCtUmGjbcPGfUuU6pYho5O5uH4mlEr4rvuhHT0yIoDd0X4O0GtWDN4dQ1XZmUHsNM4W7aiatT-aWBCJAZEPeRpNAoD4QB8kVjyHcJxlbINT4Q70csSCCrwB10fc_aEvu6nlaOgh80vpiJyJHrhmitjPFPCPVs6bY3Jog_XnMOv6fCJilmPPZrcbAKf4SIYBj8THkGF5p2tYWp7D540V3mRtwVlfTF7Bw2jJ2Hy0Fv52wjswfHJ7hbZfuap2fT_lmFOalg6Z2TxLukfDGCmQQ1sKnyAOegOZpSgrEbPTYF-xF1vTA=w800-h316-no)

# Arduino_Reclame_vrachtwagen
Arduino Nano

Code used for project 'Vrachtwagen met mobiel reclame scherm'.

Toont een slideshow van afbeeldingen geladen vanaf een SD kaart op een TFT scherm.
Klik op de [link naar Youtube video](https://www.youtube.com/watch?v=E_I-tfUq2f0) voor dit project in actie.

Schema:
![Schema](https://lh3.googleusercontent.com/cZa9EIjKI2B53VvINQJLvq03mXyWxMh7YwUNjmb4kd5GMrbooDosvWukoUg-XU6vcGcSXBnTQPTxEu51ubY6z8lvuUyoczKPpqqMXh4hutGAcN4FX29QHg47NwYm_Fby_YE_CccHxRS3jgad2rghrXR7jIKrQYBE-cGPZqHSxcG-LCImbxsPdJFzcfTpAPIGQWj1nChns0jVmRqrFPQWIQ8vKi8cX-T__dtnmxqZ8MMKK5HfxD9W3wBKAy6T4Y-qHqML4QeLdgUUCDRsBEenafqi8NUZ7wXt5cFnaxhbIuQ7WWsA9OQEco8MvH-W_054U9R-oZXX-pIddg516EVCJqw72cr_HLHTh7b2WwM1NLbsHozlBrSTKEmdDcFNGxzpHGP88kS4wt5H2ICxiIfDgTZAp7XZiMRcEcPRSFJuOcpEa4T7WV05LT6pdedsTxnLeNWMxDc2LFXiFGTcTlRKQYflkByXsCM_yLFgkvmVwQMDmIZkKLpZ3DTRJd4MHIRr7D_kHw0o8ADtFVtJ_Gawon868--2CFRYkwUIwtsZ97_Le90ZL8UvFN4oYRlB-gN1tE8qEIN5gVrDj9snfv_BMAT4j4ASSJARCfhZPAwr1Vtk5-wGql3E7DR11HkNWCwMBrqc1dhl3348tZj-e5HgCxmiV9abgqx8nSFIJx44VO3PQ9Zz3ydcWpXnd__Ye0Zxn_t6ZhxwV3tsXdVRW0pr3QE1UbR9mafxF_3iDb5S0YMurGs=w800){:style="display: block;"}
Klik hier voor de afbeelding in [groter formaat](https://lh3.googleusercontent.com/cZa9EIjKI2B53VvINQJLvq03mXyWxMh7YwUNjmb4kd5GMrbooDosvWukoUg-XU6vcGcSXBnTQPTxEu51ubY6z8lvuUyoczKPpqqMXh4hutGAcN4FX29QHg47NwYm_Fby_YE_CccHxRS3jgad2rghrXR7jIKrQYBE-cGPZqHSxcG-LCImbxsPdJFzcfTpAPIGQWj1nChns0jVmRqrFPQWIQ8vKi8cX-T__dtnmxqZ8MMKK5HfxD9W3wBKAy6T4Y-qHqML4QeLdgUUCDRsBEenafqi8NUZ7wXt5cFnaxhbIuQ7WWsA9OQEco8MvH-W_054U9R-oZXX-pIddg516EVCJqw72cr_HLHTh7b2WwM1NLbsHozlBrSTKEmdDcFNGxzpHGP88kS4wt5H2ICxiIfDgTZAp7XZiMRcEcPRSFJuOcpEa4T7WV05LT6pdedsTxnLeNWMxDc2LFXiFGTcTlRKQYflkByXsCM_yLFgkvmVwQMDmIZkKLpZ3DTRJd4MHIRr7D_kHw0o8ADtFVtJ_Gawon868--2CFRYkwUIwtsZ97_Le90ZL8UvFN4oYRlB-gN1tE8qEIN5gVrDj9snfv_BMAT4j4ASSJARCfhZPAwr1Vtk5-wGql3E7DR11HkNWCwMBrqc1dhl3348tZj-e5HgCxmiV9abgqx8nSFIJx44VO3PQ9Zz3ydcWpXnd__Ye0Zxn_t6ZhxwV3tsXdVRW0pr3QE1UbR9mafxF_3iDb5S0YMurGs=w1920-h870-no)
