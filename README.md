# otomatik-kapi
# Gerekli Kütüphaneler
- ESP8266 Kütüphanesi
- Blynk Kütüphanesi
- SimpleTimer Kütüphanesi
# Blynk App Kurulumu
- Telefonunuza Blynk kurunuz.
- Daha sonra proje oluşturun.
- Mail adresinize token kodu gelecek. (Daha sonra lazım olacak)
- Device kısmında NodeMCU seçin.
- Proje kısmına gelip buton ekleyin.
- Buton ayarlarından V1 virtual pini seçin.
# IFTTT Kurulumu
- iftt servisi blynki tetiklemek için kullanacağız.
- fttt.com adresine giderek yeni bir hesap açınız.
- Create bölümüne geliniz.
- If kısmına basınız
- Arama yerine google assistant yazınız ve çıkan sonuca basınız.
- Say a simple phrase bölümüne basınız.
- What do you want to say? kısmına Kapıyı aç yazınız.
- What do you want the Assistant to say in response? kısmına Tamam Açıyorum yazınız.
- Language english,diğer kısımlar boş kalsın ve create trigger butonuna basarak devam edin.
- Daha sonra + that yazan yere tıklayalım.
- Arama kısmına web hooks yazalım ve girelim.
- Make a web request ile devam edelim.
- Url kısmını http://139.59.206.133/uygulama token kodu buraya gelecek/update/V1?value=1 ile dolduralım. (Token kodunu yazmayı unutmayınız)
- Method kısmı GET, Content-Type kısmı text/plain olacak şekilde giriyoruz.
- Create action butonuna tıklayarak tetiğimizi oluşturuyoruz.
- Daha sonra şemada yer alan bağlantıları yaparak projemizi test ediyoruz.
# Devre Şeması
![sema](https://raw.githubusercontent.com/gazi-dis/otomatik-kapi/master/fritzing_sema.jpg)
