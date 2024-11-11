
import phonenumbers 
  
from phonenumbers import geocoder 
  
phone_number = phonenumbers.parse("+919622900181")  
 
print(geocoder.description_for_number(phone_number,  
                                      'en')) 
import phonenumbers 
  
from phonenumbers import carrier 
    
service_provider = phonenumbers.parse("+919906565765") 
print(carrier.name_for_number(service_provider, 
                              'en'))