# stm32-reaction-time-test
Projekt je narejen za STM32 mikrokontroler in meri reakcijski čas uporabnika s pomočjo gumba, LED lučke in grafičnega vmesnika, ustvarjenega s TouchGFX.

## Opis
Program prižge rdečo LED na plošči. Ko uporabnik pritisne gumb, LED ugasne, izmeri se reakcijski čas in rezultat se prikaže na zaslonu preko TouchGFX. Meritve in upravljanje dogodkov potekajo preko FreeRTOS taskov in queue-ov, kar omogoča modularno in reaktivno arhitekturo projekta.

## Strojna oprema
- STM32 plošča (stm32h750b-dk)  
- Uporabniški gumb, GPIO Pin PC13 
- Rdeča LED, GPIO Pin PI13
- Vgrajen zaslon (uporabljen s TouchGFX)  

## Programska oprema
- STM32CubeIDE  
- STM32 HAL knjižnice  
- TouchGFX za grafični vmesnik  

## Kako deluje
1. Prižge se rdeča LED, ki signalizira začetek merjenja.  
2. Program čaka na pritisk gumba.  
3. Ko je gumb pritisnjen:  
   - LED ugasne.  
   - Izmeri se reakcijski čas z uporabo časovnika.  
   - Rezultat se prikaže (v ms) na zaslonu preko TouchGFX.  

## Funkcionalnosti
- Vizualni signal za začetek merjenja (LED)  
- Interakcija preko gumba  
- Meritve reakcijskega časa v realnem času  
- Grafični prikaz rezultata preko TouchGFX  
- Modularna struktura projekta v STM32CubeIDE 
