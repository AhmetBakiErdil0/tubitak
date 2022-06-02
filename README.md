# TUBİTAK
 TÜBİTAK uzaklık sensörlü şapka projesi
 
 
 
 
 Bu projede ben Arduino Leonardo kollandım fakat kodlarda oynama yapılmadan Mega ve Uno gibi kartlarla da kullanılabilir.
 Eğer daha küçük Arduino veya 3. parti Arduino kartları kullanılırsa pinlerde değişiklik yapılmalıdır. Şunlar gibi
 
 Küçük Arduino kartı için(pro mini)
 
 int buzzer=2,led=3;
	
const int trig = 4;

const int echo = 5;

3. partiye örnek(esp32)

int buzzer=23,led=19; 

const int trig = 18;

const int echo = 5;

Tabiki ekranı değiştirirsek  kodda ufak bir oynama yapmak gerekir

20x4 bir lcd Ekran için değiştirilecek kod

LiquidCrystal_I2C lcd(0x27, 20, 4);

