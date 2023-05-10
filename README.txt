# urzadzenie_do_nauki_Brillea

Wykonany projekt został zrealizowany dla koła naukowego Integral Senso na PŚ. 

Jest to urządzenie do nauki języka Brillea dla dzieci niedowidzących. Urządzenie odbierało dane z czujnika HC-05 (wyrazy/zdania) przesłane z telefonu (przez sieć Bluetooth) i wyświetlał je w alfabecie Brillea. Należało pobrać aplikację na telefon która funkcjonyje jako terminal Bluetooth. Wyświetlanie liter alfabetu Brillea odbywało się przez sześć diod, iteracja po kolejnych literach przez wciśnięcie przycisku. Regulacja jasności świecenia diodami potencjometrem. Sygnał z potencjometru trafiał na wejście analogowe Arduino. Regulacja świecenia diod przez PWM pinów wyjściowych Arduino. Zasilanie wewnętrzne bateryjne oraz zewnętrzne przewodem USB do źródła zasilania. Projekt obejmował: 

- Wykonanie programu na Arduino. Program odpowiedzialny za: obsługę odbioru danych przez Bluetooth, wysterowanie odpowiednich diod, sterowanie jasnością świecenia, odbiór danych z potencjometru.

- Projekt płytki PCB w Kicadzie. Płytka odpowiada m.in. za wzmocnienie sygnałów GPIO Arduino przez zastosowanie tranzystorów BC-547. Wzmocnione sygnały docierają na diody. Płytka pośredniczy między Arduino a resztą urządzenia. 

- Projekt obudowy urządzenia wykonanej w DesignSparks. Urządzenie miało być przeznaczone dla dzieci więc obudowa nie zawierała ostrych krawędzi, ścianki obudowy są odpowiednio grube. Wyznaczono sekcję dla zasilania bateryjnego i dla reszty elektroniki. Obudowę wykonano na drukarce 3D.
