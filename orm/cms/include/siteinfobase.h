#ifndef ORM_CMS_SITEINFOBASEMATA_H
#define ORM_CMS_SITEINFOBASEMATA_H
/*
*This file is auto create from cli
*本文件为自动生成 Wed, 07 Jun 2023 01:10:17 GMT
***/
#include <iostream>
#include <cstdio>
#include <sstream>
#include <array>
#include <map> 
#include <string_view> 
#include <string> 
#include <vector>
#include <ctime>
#include <array>
#include <sys/time.h>
#include <sys/stat.h>
#include <unistd.h>
#include "mysql.h"
namespace orm { 
   
     namespace cms { 

struct siteinfobase
{
    struct meta{
     int sid= 0; //
 int userid= 0; //
 std::string sitename=""; //
 std::string sitedomain=""; //
 std::string metakeys=""; //
 std::string metadesc=""; //
 std::string copyright=""; //
 } data;
 std::vector<siteinfobase::meta> record;
std::string _rmstag="cms";//this value must be default or tag value, tag in mysqlconnect config file .
std::vector<unsigned char> _keypos{0x00};
MYSQL_ROW _row;
std::vector<siteinfobase::meta>::iterator begin(){     return record.begin(); }
std::vector<siteinfobase::meta>::iterator end(){     return record.end(); }
std::vector<siteinfobase::meta>::const_iterator begin() const{     return record.begin(); }
std::vector<siteinfobase::meta>::const_iterator end() const{     return record.end(); }
const std::array<std::string,7> colnames={"sid","userid","sitename","sitedomain","metakeys","metadesc","copyright"};
const std::array<unsigned char,7> colnamestype= {3,3,253,253,252,252,252};
std::string tablename="siteinfo";
std::string modelname="Siteinfo";

	  unsigned char findcolpos(std::string coln){
		    unsigned char  bi=coln[0];
         char colpospppc;

	         if(bi<91&&bi>64){
				bi+=32;
			}
            switch(coln[0]){


         case 'c':
   	 return 6;
break;
case 'm':
 switch(coln.size()){  
case 8:
  colpospppc=coln.back();
    if(colpospppc<91&&bi>64){ colpospppc+=32; }
 if(colpospppc=='c'){ return 5; }
 if(colpospppc=='s'){ return 4; }
   	 break;
 }
 break;
case 's':
 switch(coln.size()){  
case 3:
   	 return 0;
break;
case 8:
   	 return 2;
break;
case 10:
   	 return 3;
break;
 }
 break;
case 'u':
   	 return 1;
break;

             }
             return 255;
           }
         
    int size(){ return record.size(); }   

    std::string getPKname(){ 
       return "sid";
}

      void metadata_reset(){
     siteinfobase::meta metatemp;    
            data = metatemp; 
            record.clear();     
      }  
      void _setColnamevalue(){
          siteinfobase::meta metatemp;   
         for(unsigned char i=0;i<_keypos.size();i++){
                 switch(_keypos[i]){
        	case 0:
		 try{
			metatemp.sid=std::stoi(_row[i]);
		}catch (...) { 
			metatemp.sid=0;
			 }
			break;
	case 1:
		 try{
			metatemp.userid=std::stoi(_row[i]);
		}catch (...) { 
			metatemp.userid=0;
			 }
			break;
	case 2:
		 try{
			metatemp.sitename.append((_row[i]==NULL?"":_row[i]));
		}catch (...) { 
			metatemp.sitename.clear();
			 }
			break;
	case 3:
		 try{
			metatemp.sitedomain.append((_row[i]==NULL?"":_row[i]));
		}catch (...) { 
			metatemp.sitedomain.clear();
			 }
			break;
	case 4:
		 try{
			metatemp.metakeys.append((_row[i]==NULL?"":_row[i]));
		}catch (...) { 
			metatemp.metakeys.clear();
			 }
			break;
	case 5:
		 try{
			metatemp.metadesc.append((_row[i]==NULL?"":_row[i]));
		}catch (...) { 
			metatemp.metadesc.clear();
			 }
			break;
	case 6:
		 try{
			metatemp.copyright.append((_row[i]==NULL?"":_row[i]));
		}catch (...) { 
			metatemp.copyright.clear();
			 }
			break;
	default:
		 { }
			

                 }

                 if(i>210){
                     break;
                 }
          }
          data=metatemp;
          record.emplace_back(metatemp);   
   } 
         void _addnewrowvalue(){
           siteinfobase::meta metatemp;   

          for(unsigned char i=0;i<_keypos.size();i++){
 
                 switch(_keypos[i]){

        	case 0:
		 try{
			metatemp.sid=std::stoi(_row[i]);
		}catch (...) { 
			metatemp.sid=0;
			 }
			break;
	case 1:
		 try{
			metatemp.userid=std::stoi(_row[i]);
		}catch (...) { 
			metatemp.userid=0;
			 }
			break;
	case 2:
		 try{
			metatemp.sitename.append((_row[i]==NULL?"":_row[i]));
		}catch (...) { 
			metatemp.sitename.clear();
			 }
			break;
	case 3:
		 try{
			metatemp.sitedomain.append((_row[i]==NULL?"":_row[i]));
		}catch (...) { 
			metatemp.sitedomain.clear();
			 }
			break;
	case 4:
		 try{
			metatemp.metakeys.append((_row[i]==NULL?"":_row[i]));
		}catch (...) { 
			metatemp.metakeys.clear();
			 }
			break;
	case 5:
		 try{
			metatemp.metadesc.append((_row[i]==NULL?"":_row[i]));
		}catch (...) { 
			metatemp.metadesc.clear();
			 }
			break;
	case 6:
		 try{
			metatemp.copyright.append((_row[i]==NULL?"":_row[i]));
		}catch (...) { 
			metatemp.copyright.clear();
			 }
			break;
	default:
		 { }
			

                  }
                 if(i>210){
                     break;
                 }
          }
           record.emplace_back(std::move(metatemp)); 
   } 

  inline  std::string stringaddslash(std::string &content){
        std::string temp;
        for(unsigned int i=0;i<content.size();i++){
            if(content[i]=='\''){
                temp.append("\\'");
                continue;
            }else if(content[i]=='"'){
                temp.append("\\\"");
                continue;
            }
            temp.push_back(content[i]);
        }
        return temp;
   }  
  inline  std::string jsonaddslash(std::string &content){
        std::string temp;
        for(unsigned int i=0;i<content.size();i++){
            if(content[i]=='"'){
                temp.append("\\\"");
                continue;
            }
            temp.push_back(content[i]);
        }
        return temp;
   }  

   std::string _makeinsertsql(){
      unsigned int j=0;
                std::ostringstream tempsql;
                tempsql<<"INSERT INTO ";
                    tempsql<<tablename;
                   tempsql<<" (";
                    for(;j<colnames.size();j++){
                            if(j>0){
                                tempsql<<"`,`";
                            }else{
                                tempsql<<"`";
                            }
                            tempsql<<colnames[j];
                    }
                    if(j>0){
                        tempsql<<"`";
                    }
            tempsql<<") VALUES (";

        if(data.sid==0){
tempsql<<"null";
 }else{ 
	tempsql<<std::to_string(data.sid);
}
if(data.userid==0){
	tempsql<<",0";
 }else{ 
	tempsql<<","<<std::to_string(data.userid);
}
tempsql<<",'"<<stringaddslash(data.sitename)<<"'";
tempsql<<",'"<<stringaddslash(data.sitedomain)<<"'";
tempsql<<",'"<<stringaddslash(data.metakeys)<<"'";
tempsql<<",'"<<stringaddslash(data.metadesc)<<"'";
tempsql<<",'"<<stringaddslash(data.copyright)<<"'";
tempsql<<")";

     
       return tempsql.str();
   } 
      
      std::string _makerecordinsertsql( meta &insert_data){
      unsigned int j=0;
                std::ostringstream tempsql;
                tempsql<<"INSERT INTO ";
                    tempsql<<tablename;
                   tempsql<<" (";
                    for(;j<colnames.size();j++){
                            if(j>0){
                                tempsql<<"`,`";
                            }else{
                                tempsql<<"`";
                            }
                            tempsql<<colnames[j];
                    }
                    if(j>0){
                        tempsql<<"`";
                    }
            tempsql<<") VALUES (";

        if(insert_data.sid==0){
tempsql<<"null";
 }else{ 
	tempsql<<std::to_string(insert_data.sid);
}
if(insert_data.userid==0){
	tempsql<<",0";
 }else{ 
	tempsql<<","<<std::to_string(insert_data.userid);
}
tempsql<<",'"<<stringaddslash(insert_data.sitename)<<"'";
tempsql<<",'"<<stringaddslash(insert_data.sitedomain)<<"'";
tempsql<<",'"<<stringaddslash(insert_data.metakeys)<<"'";
tempsql<<",'"<<stringaddslash(insert_data.metadesc)<<"'";
tempsql<<",'"<<stringaddslash(insert_data.copyright)<<"'";
tempsql<<")";

     
       return tempsql.str();
   } 
       
      std::string _makerecordinsertsql( std::vector<meta> &insert_data){
      unsigned int j=0;
                std::ostringstream tempsql;
                tempsql<<"INSERT INTO ";
                    tempsql<<tablename;
                   tempsql<<" (";
                    for(;j<colnames.size();j++){
                            if(j>0){
                                tempsql<<"`,`";
                            }else{
                                tempsql<<"`";
                            }
                            tempsql<<colnames[j];
                    }
                    if(j>0){
                        tempsql<<"`";
                    }
            tempsql<<") VALUES ";

    for(unsigned int i=0;i<insert_data.size();i++)
    {
		if(i>0)
		{
			tempsql<<",";	
		}
		tempsql<<"(";


        	if(insert_data[i].sid==0){
	tempsql<<"null";
	 }else{ 
	tempsql<<std::to_string(insert_data[i].sid);
	}
	if(insert_data[i].userid==0){
	tempsql<<",0";
	 }else{ 
	tempsql<<","<<std::to_string(insert_data[i].userid);
	}
		tempsql<<",'"<<stringaddslash(insert_data[i].sitename)<<"'";
		tempsql<<",'"<<stringaddslash(insert_data[i].sitedomain)<<"'";
		tempsql<<",'"<<stringaddslash(insert_data[i].metakeys)<<"'";
		tempsql<<",'"<<stringaddslash(insert_data[i].metadesc)<<"'";
		tempsql<<",'"<<stringaddslash(insert_data[i].copyright)<<"'";
		tempsql<<")";
	 } 

     
       return tempsql.str();
   } 
       
    std::string _makeupdatesql(std::string fileld){
       //int j=0;
            std::ostringstream tempsql;
                 tempsql<<"UPDATE ";
                 tempsql<<tablename;
                 tempsql<<" SET ";

            bool isall=false;
            if(fileld.empty()){
                isall=true;
            }
            if(isall){

        if(data.sid==0){
	tempsql<<"`sid`=0";
 }else{ 
	tempsql<<"`sid`="<<std::to_string(data.sid);
}
if(data.userid==0){
	tempsql<<",`userid`=0";
 }else{ 
	tempsql<<",`userid`="<<std::to_string(data.userid);
}
tempsql<<",`sitename`='"<<stringaddslash(data.sitename)<<"'";
tempsql<<",`sitedomain`='"<<stringaddslash(data.sitedomain)<<"'";
tempsql<<",`metakeys`='"<<stringaddslash(data.metakeys)<<"'";
tempsql<<",`metadesc`='"<<stringaddslash(data.metadesc)<<"'";
tempsql<<",`copyright`='"<<stringaddslash(data.copyright)<<"'";
 }else{ 

     
  unsigned int jj=0;
                  std::string keyname;
                  std::vector<unsigned char> keypos;
                  for(;jj<fileld.size();jj++){
                        if(fileld[jj]==','){
                                unsigned char bpos_i=findcolpos(keyname);
                               keypos.emplace_back(bpos_i); 
#ifdef DEBUG
                    if (bpos_i == 254)
                    {
                        std::cout << "\033[1m\033[31m-----------\n"
                                  << keyname << " not in " << tablename << " table Field.\n-----------\033[0m"
                                  << std::endl;
                    }
#endif                               
                               keyname.clear();
                             continue;   
                        }
                        if(fileld[jj]==0x20){

                             continue;   
                        }
                        keyname.push_back(fileld[jj]);

                  }  
                 if(keyname.size()>0){
                                unsigned char bpos_i=findcolpos(keyname);
 #ifdef DEBUG
                    if (bpos_i == 254)
                    {
                        std::cout << "\033[1m\033[31m-----------\n"
                                  << keyname << " not in " << tablename << " table Field.\n-----------\033[0m"
                                  << std::endl;
                    }
#endif                                       
                                keypos.emplace_back(bpos_i); 
                                keyname.clear();
                 }
                 for(jj=0;jj<keypos.size();jj++){
                       switch(keypos[jj]){

         case 0:
 if(jj>0){ tempsql<<","; } 
if(data.sid==0){
	tempsql<<"`sid`=0";
 }else{ 
	tempsql<<"`sid`="<<std::to_string(data.sid);
}
 break;
 case 1:
 if(jj>0){ tempsql<<","; } 
if(data.userid==0){
	tempsql<<"`userid`=0";
 }else{ 
	tempsql<<"`userid`="<<std::to_string(data.userid);
}
 break;
 case 2:
 if(jj>0){ tempsql<<","; } 
tempsql<<"`sitename`='"<<stringaddslash(data.sitename)<<"'";
 break;
 case 3:
 if(jj>0){ tempsql<<","; } 
tempsql<<"`sitedomain`='"<<stringaddslash(data.sitedomain)<<"'";
 break;
 case 4:
 if(jj>0){ tempsql<<","; } 
tempsql<<"`metakeys`='"<<stringaddslash(data.metakeys)<<"'";
 break;
 case 5:
 if(jj>0){ tempsql<<","; } 
tempsql<<"`metadesc`='"<<stringaddslash(data.metadesc)<<"'";
 break;
 case 6:
 if(jj>0){ tempsql<<","; } 
tempsql<<"`copyright`='"<<stringaddslash(data.copyright)<<"'";
 break;

     
                  default:
                                ;
                     }
                 }   

            }        

        return tempsql.str();
   } 
   
   std::vector<std::string> data_toarray(std::string fileld=""){
        std::vector<std::string> temparray;
        std::string keyname;
        unsigned char jj=0;
        std::vector<unsigned char> keypos;
        if(fileld.size()>1){
            for(;jj<fileld.size();jj++){
                    if(fileld[jj]==','){
                        keypos.emplace_back(findcolpos(keyname)); 
                        keyname.clear();
                        continue;   
                    }
                    if(fileld[jj]==0x20){

                        continue;   
                    }
                    keyname.push_back(fileld[jj]);

            }  
            if(keyname.size()>0){
                            keypos.emplace_back(findcolpos(keyname)); 
                            keyname.clear();
            }
        }else{
            for(jj=0;jj<colnames.size();jj++){
                keypos.emplace_back(jj); 
            }
        }
               
                 for(jj=0;jj<keypos.size();jj++){
                       switch(keypos[jj]){
         case 0:
if(data.sid==0){
	temparray.push_back("0");
 }else{ 
	temparray.push_back(std::to_string(data.sid));
}
 break;
 case 1:
if(data.userid==0){
	temparray.push_back("0");
 }else{ 
	temparray.push_back(std::to_string(data.userid));
}
 break;
 case 2:
	temparray.push_back(data.sitename);
 break;
 case 3:
	temparray.push_back(data.sitedomain);
 break;
 case 4:
	temparray.push_back(data.metakeys);
 break;
 case 5:
	temparray.push_back(data.metadesc);
 break;
 case 6:
	temparray.push_back(data.copyright);
 break;

                             default:
                                ;
                     }
                 }   
   
     return temparray;             
   }   
   
   std::map<std::string,std::string> data_tomap(std::string fileld=""){
       std::map<std::string,std::string> tempsql;
            std::string keyname;
            unsigned char jj=0;
                  std::vector<unsigned char> keypos;
                  if(fileld.size()>1){
                    for(;jj<fileld.size();jj++){
                            if(fileld[jj]==','){
                                keypos.emplace_back(findcolpos(keyname)); 
                                keyname.clear();
                                continue;   
                            }
                            if(fileld[jj]==0x20){

                                continue;   
                            }
                            keyname.push_back(fileld[jj]);

                    }  
                    if(keyname.size()>0){
                                    keypos.emplace_back(findcolpos(keyname)); 
                                    keyname.clear();
                    }
                 }else{
                     for(jj=0;jj<colnames.size();jj++){
                         keypos.emplace_back(jj); 
                     }
                 }
                
                 for(jj=0;jj<keypos.size();jj++){
                       switch(keypos[jj]){
         case 0:
if(data.sid==0){
	tempsql.insert({"sid","0"});
 }else{ 
	tempsql.insert({"sid",std::to_string(data.sid)});
}
 break;
 case 1:
if(data.userid==0){
	tempsql.insert({"userid","0"});
 }else{ 
	tempsql.insert({"userid",std::to_string(data.userid)});
}
 break;
 case 2:
	tempsql.insert({"sitename",data.sitename});
 break;
 case 3:
	tempsql.insert({"sitedomain",data.sitedomain});
 break;
 case 4:
	tempsql.insert({"metakeys",data.metakeys});
 break;
 case 5:
	tempsql.insert({"metadesc",data.metadesc});
 break;
 case 6:
	tempsql.insert({"copyright",data.copyright});
 break;

                             default:
                                ;
                     }
                 }   
    
     return tempsql;             
   }   
   
   std::string data_tojson(){
       std::ostringstream tempsql;

        tempsql<<"{";
if(data.sid==0){
	tempsql<<"\"sid\":0";
 }else{ 
	tempsql<<"\"sid\":"<<std::to_string(data.sid);
}
if(data.userid==0){
	tempsql<<",\"userid\":0";
 }else{ 
	tempsql<<",\"userid\":"<<std::to_string(data.userid);
}
tempsql<<",\"sitename\":\""<<http::utf8_to_jsonstring(data.sitename);
tempsql<<"\"";
tempsql<<",\"sitedomain\":\""<<http::utf8_to_jsonstring(data.sitedomain);
tempsql<<"\"";
tempsql<<",\"metakeys\":\""<<http::utf8_to_jsonstring(data.metakeys);
tempsql<<"\"";
tempsql<<",\"metadesc\":\""<<http::utf8_to_jsonstring(data.metadesc);
tempsql<<"\"";
tempsql<<",\"copyright\":\""<<http::utf8_to_jsonstring(data.copyright);
tempsql<<"\"";
tempsql<<"}";

     
     return tempsql.str();             
   }   
   
   std::string data_tojson(std::string fileld){
       std::ostringstream tempsql;
            std::string keyname;
            unsigned char jj=0;
                  std::vector<unsigned char> keypos;
                  if(fileld.size()>0){
                    for(;jj<fileld.size();jj++){
                            if(fileld[jj]==','){
                                keypos.emplace_back(findcolpos(keyname)); 
                                keyname.clear();
                                continue;   
                            }
                            if(fileld[jj]==0x20){

                                continue;   
                            }
                            keyname.push_back(fileld[jj]);

                    }  
                    if(keyname.size()>0){
                                    keypos.emplace_back(findcolpos(keyname)); 
                                    keyname.clear();
                    }
                 }else{
                     for(jj=0;jj<colnames.size();jj++){
                         keypos.emplace_back(jj); 
                     }
                 }
                 tempsql<<"{";
                 for(jj=0;jj<keypos.size();jj++){
                       switch(keypos[jj]){
         case 0:
 if(jj>0){ tempsql<<","; } 
if(data.sid==0){
	tempsql<<"\"sid\":0";
 }else{ 
	tempsql<<"\"sid\":"<<std::to_string(data.sid);
}
 break;
 case 1:
 if(jj>0){ tempsql<<","; } 
if(data.userid==0){
	tempsql<<"\"userid\":0";
 }else{ 
	tempsql<<"\"userid\":"<<std::to_string(data.userid);
}
 break;
 case 2:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"sitename\":\""<<http::utf8_to_jsonstring(data.sitename)<<"\"";
 break;
 case 3:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"sitedomain\":\""<<http::utf8_to_jsonstring(data.sitedomain)<<"\"";
 break;
 case 4:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"metakeys\":\""<<http::utf8_to_jsonstring(data.metakeys)<<"\"";
 break;
 case 5:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"metadesc\":\""<<http::utf8_to_jsonstring(data.metadesc)<<"\"";
 break;
 case 6:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"copyright\":\""<<http::utf8_to_jsonstring(data.copyright)<<"\"";
 break;

                             default:
                                ;
                     }
                 }   
      tempsql<<"}";  
     return tempsql.str();             
   }   
   
    void from_json(const std::string &json_content)
   {
        record.clear();
        siteinfobase::meta metatemp; 
        data=metatemp;
        unsigned int json_offset=0;
        bool isarray=false;
        std::vector<std::string> list_content;
        for(;json_offset<json_content.size();json_offset++)
        {
            if(json_content[json_offset]=='{')
            {
                break;
            }
            if(json_content[json_offset]=='[')
            {
                isarray=true;
                break;
            }
        }
        if(isarray)
        {
            json_offset+=1; 
            std::string json_key_name,json_value_name; 
            for(;json_offset<json_content.size();json_offset++)
            {
                for(;json_offset<json_content.size();json_offset++)
                {
                    if(json_content[json_offset]=='{')
                    {
                        json_offset+=1;
                        break;
                    }
                }
                if(record.size()>0)
                {
                    data=metatemp;
                }
                if(json_offset>=json_content.size())
                {
                    break;
                }
                for(;json_offset<json_content.size();json_offset++)
                {
    
                            if(json_content[json_offset]==0x20||json_content[json_offset]==0x0A||json_content[json_offset]==0x0D||json_content[json_offset]=='\t')
                            {
                                continue;
                            }
                            else
                            {
                                if(json_content[json_offset]==0x22)
                                {
                                    unsigned int temp_offset=json_offset;
                                    json_key_name=http::jsonstring_to_utf8(&json_content[json_offset],json_content.size()-json_offset,temp_offset);
                                    json_offset=temp_offset;
                                    if(json_content[json_offset]==0x22)
                                    {
                                        json_offset+=1;
                                    }
                                    for(;json_offset<json_content.size();json_offset++)
                                    {
                                    
                                        if(json_content[json_offset]==0x20||json_content[json_offset]==0x0A||json_content[json_offset]==0x0D||json_content[json_offset]=='\t')
                                        {
                                            continue;
                                        }
                                        break;
                                    }       
                                    if(json_content[json_offset]!=':')
                                    {
                                        break;
                                    }
                                    for(;json_offset<json_content.size();json_offset++)
                                    {
                                        if(json_content[json_offset]==0x20||json_content[json_offset]==0x0A||json_content[json_offset]==0x0D||json_content[json_offset]=='\t')
                                        {
                                            continue;
                                        }
                                        break;
                                    } 
                                    json_offset+=1;
                                    if(json_offset>=json_content.size())
                                    {
                                        break;
                                    }
                                    json_value_name.clear();
                                    if(json_content[json_offset]==0x22)
                                    {
                                        
                                        temp_offset=json_offset;
                                        json_value_name=http::jsonstring_to_utf8(&json_content[json_offset],json_content.size()-json_offset,temp_offset);
                                        json_offset=temp_offset;
                                        if(json_content[json_offset]==0x22)
                                        {
                                            json_offset+=1;
                                        }
                                    }
                                    else
                                    {
                                        if(json_content[json_offset]!='{'&&json_content[json_offset]!=']')
                                        {
                                            for(;json_offset<json_content.size();json_offset++)
                                            {
                                                if(json_content[json_offset]==0x5D||json_content[json_offset]==0x7D||json_content[json_offset]==0x22||json_content[json_offset]==0x2C||json_content[json_offset]==0x20||json_content[json_offset]==0x0A||json_content[json_offset]==0x0D||json_content[json_offset]=='\t')
                                                {
                                                    if(json_content[json_offset]==0x7D)
                                                    {
                                                        json_offset-=1;
                                                    } 
                                                    break;
                                                }
                                                json_value_name.push_back(json_content[json_offset]);
                                            }   
                                        }
                                    }
                                    //////////////////////////
                                    set_val(json_key_name,json_value_name);
                                    continue;
                                }
                                else
                                {
                                    break;
                                }
                            }
    
                }
                record.emplace_back(data);
                
                json_offset+=1;
            }
            if(record.size()>1)
            {
                data=record[0];
            }
        }
        else
        {
           if(json_content[json_offset]=='{')
            {
                json_offset+=1; 
                std::string json_key_name,json_value_name; 
                 
                
                for(;json_offset<json_content.size();json_offset++)
                {
 
                        if(json_content[json_offset]==0x20||json_content[json_offset]==0x0A||json_content[json_offset]==0x0D||json_content[json_offset]=='\t')
                        {
                            continue;
                        }
                        else
                        {
                            if(json_content[json_offset]==0x22)
                            {
                                 unsigned int temp_offset=json_offset;
                                 json_key_name=http::jsonstring_to_utf8(&json_content[json_offset],json_content.size()-json_offset,temp_offset);
                                 json_offset=temp_offset;
                                 if(json_content[json_offset]==0x22)
                                 {
                                    json_offset+=1;
                                 }
                                for(;json_offset<json_content.size();json_offset++)
                                {
                                
                                    if(json_content[json_offset]==0x20||json_content[json_offset]==0x0A||json_content[json_offset]==0x0D||json_content[json_offset]=='\t')
                                    {
                                        continue;
                                    }
                                    break;
                                }       
                                if(json_content[json_offset]!=':')
                                {
                                    break;
                                }
                                for(;json_offset<json_content.size();json_offset++)
                                {
                                    if(json_content[json_offset]==0x20||json_content[json_offset]==0x0A||json_content[json_offset]==0x0D||json_content[json_offset]=='\t')
                                    {
                                        continue;
                                    }
                                    break;
                                } 
                                json_offset+=1;
                                if(json_offset>=json_content.size())
                                {
                                    break;
                                }
                                json_value_name.clear();
                                if(json_content[json_offset]==0x22)
                                {
                                    
                                    temp_offset=json_offset;
                                    json_value_name=http::jsonstring_to_utf8(&json_content[json_offset],json_content.size()-json_offset,temp_offset);
                                    json_offset=temp_offset;
                                    if(json_content[json_offset]==0x22)
                                    {
                                        json_offset+=1;
                                    }
                                }
                                else
                                {
                                    if(json_content[json_offset]!='{'&&json_content[json_offset]!=']')
                                    {
                                        for(;json_offset<json_content.size();json_offset++)
                                        {
                                            if(json_content[json_offset]==0x5D||json_content[json_offset]==0x7D||json_content[json_offset]==0x22||json_content[json_offset]==0x2C||json_content[json_offset]==0x20||json_content[json_offset]==0x0A||json_content[json_offset]==0x0D||json_content[json_offset]=='\t')
                                            {
                                               if(json_content[json_offset]==0x7D)
                                               {
                                                   json_offset-=1;
                                               } 
                                               break;
                                            }
                                            json_value_name.push_back(json_content[json_offset]);
                                        }   
                                    }
                                }
                                //////////////////////////
                                set_val(json_key_name,json_value_name);
                                continue;
                            }
                            else
                            {
                                break;
                            }
                        }
 
                }
                record.emplace_back(data);
            } 
        }
   }   
    
    void set_val(const std::string& set_key_name,const std::string& set_value_name)
    {
        switch(findcolpos(set_key_name))
        {
    		case 0:
		 try{
			data.sid=std::stoi(set_value_name);
		}catch (...) { 
			data.sid=0;
			 }
			break;
		case 1:
		 try{
			data.userid=std::stoi(set_value_name);
		}catch (...) { 
			data.userid=0;
			 }
			break;
		case 2:
		 try{
			data.sitename.append(set_value_name);
		}catch (...) { 
			data.sitename.clear();
			 }
			break;
		case 3:
		 try{
			data.sitedomain.append(set_value_name);
		}catch (...) { 
			data.sitedomain.clear();
			 }
			break;
		case 4:
		 try{
			data.metakeys.append(set_value_name);
		}catch (...) { 
			data.metakeys.clear();
			 }
			break;
		case 5:
		 try{
			data.metadesc.append(set_value_name);
		}catch (...) { 
			data.metadesc.clear();
			 }
			break;
		case 6:
		 try{
			data.copyright.append(set_value_name);
		}catch (...) { 
			data.copyright.clear();
			 }
			break;
	default:
		 { }
			


        }
   } 
    
    void set_val(const std::string& set_key_name,const long long set_value_name)
    {
        switch(findcolpos(set_key_name))
        {
    		case 0:
		 try{
			data.sid=set_value_name;
		}catch (...) { 
			data.sid=0;
			 }
			break;
		case 1:
		 try{
			data.userid=set_value_name;
		}catch (...) { 
			data.userid=0;
			 }
			break;
		case 2:
		 try{
			data.sitename=std::to_string(set_value_name);
		}catch (...) { 
			data.sitename.clear();
			 }
			break;
		case 3:
		 try{
			data.sitedomain=std::to_string(set_value_name);
		}catch (...) { 
			data.sitedomain.clear();
			 }
			break;
		case 4:
		 try{
			data.metakeys=std::to_string(set_value_name);
		}catch (...) { 
			data.metakeys.clear();
			 }
			break;
		case 5:
		 try{
			data.metadesc=std::to_string(set_value_name);
		}catch (...) { 
			data.metadesc.clear();
			 }
			break;
		case 6:
		 try{
			data.copyright=std::to_string(set_value_name);
		}catch (...) { 
			data.copyright.clear();
			 }
			break;
	default:
		 { }
			


        }
   } 
    
    void set_val(const std::string& set_key_name,const double set_value_name)
    {
        switch(findcolpos(set_key_name))
        {
    		case 0:
		 try{
			data.sid=(int)set_value_name;
		}catch (...) { 
			data.sid=0;
			 }
			break;
		case 1:
		 try{
			data.userid=(int)set_value_name;
		}catch (...) { 
			data.userid=0;
			 }
			break;
		case 2:
		 try{
			data.sitename=std::to_string(set_value_name);
		}catch (...) { 
			data.sitename.clear();
			 }
			break;
		case 3:
		 try{
			data.sitedomain=std::to_string(set_value_name);
		}catch (...) { 
			data.sitedomain.clear();
			 }
			break;
		case 4:
		 try{
			data.metakeys=std::to_string(set_value_name);
		}catch (...) { 
			data.metakeys.clear();
			 }
			break;
		case 5:
		 try{
			data.metadesc=std::to_string(set_value_name);
		}catch (...) { 
			data.metadesc.clear();
			 }
			break;
		case 6:
		 try{
			data.copyright=std::to_string(set_value_name);
		}catch (...) { 
			data.copyright.clear();
			 }
			break;
	default:
		 { }
			


        }
   } 
    
   std::string to_json(std::string fileld=""){
       std::ostringstream tempsql;
            std::string keyname;
            unsigned char jj=0;
                  std::vector<unsigned char> keypos;
                  if(fileld.size()>0){
                    for(;jj<fileld.size();jj++){
                            if(fileld[jj]==','){
                                keypos.emplace_back(findcolpos(keyname)); 
                                keyname.clear();
                                continue;   
                            }
                            if(fileld[jj]==0x20){

                                continue;   
                            }
                            keyname.push_back(fileld[jj]);

                    }  
                    if(keyname.size()>0){
                                    keypos.emplace_back(findcolpos(keyname)); 
                                    keyname.clear();
                    }
                 }else{
                     for(jj=0;jj<colnames.size();jj++){
                         keypos.emplace_back(jj); 
                     }
                 }
                tempsql<<"[";
              for(size_t n=0;n<record.size();n++){
                  if(n>0){
                      tempsql<<",{";
                  }else{
                      tempsql<<"{";
                  }  
                 
                 for(jj=0;jj<keypos.size();jj++){
                       switch(keypos[jj]){
         case 0:
 if(jj>0){ tempsql<<","; } 
if(record[n].sid==0){
	tempsql<<"\"sid\":0";
 }else{ 
	tempsql<<"\"sid\":"<<std::to_string(record[n].sid);
}
 break;
 case 1:
 if(jj>0){ tempsql<<","; } 
if(record[n].userid==0){
	tempsql<<"\"userid\":0";
 }else{ 
	tempsql<<"\"userid\":"<<std::to_string(record[n].userid);
}
 break;
 case 2:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"sitename\":\""<<http::utf8_to_jsonstring(record[n].sitename)<<"\"";
 break;
 case 3:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"sitedomain\":\""<<http::utf8_to_jsonstring(record[n].sitedomain)<<"\"";
 break;
 case 4:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"metakeys\":\""<<http::utf8_to_jsonstring(record[n].metakeys)<<"\"";
 break;
 case 5:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"metadesc\":\""<<http::utf8_to_jsonstring(record[n].metadesc)<<"\"";
 break;
 case 6:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"copyright\":\""<<http::utf8_to_jsonstring(record[n].copyright)<<"\"";
 break;

                             default:
                                ;
                     }
                 }   
      tempsql<<"}";  
            }
      tempsql<<"]";
     return tempsql.str();             
   }   
   
   std::string to_json(std::function<bool(std::string&,meta&)> func,std::string fileld=""){
       std::ostringstream tempsql;
            std::string keyname;
            unsigned char jj=0;
                  std::vector<unsigned char> keypos;
                  if(fileld.size()>0){
                    for(;jj<fileld.size();jj++){
                            if(fileld[jj]==','){
                                keypos.emplace_back(findcolpos(keyname)); 
                                keyname.clear();
                                continue;   
                            }
                            if(fileld[jj]==0x20){

                                continue;   
                            }
                            keyname.push_back(fileld[jj]);

                    }  
                    if(keyname.size()>0){
                                    keypos.emplace_back(findcolpos(keyname)); 
                                    keyname.clear();
                    }
                 }else{
                     for(jj=0;jj<colnames.size();jj++){
                         keypos.emplace_back(jj); 
                     }
                 }
                tempsql<<"[";
              for(size_t n=0;n<record.size();n++){
                 keyname.clear();
                 if(func(keyname,record[n])){ 
                            if(n>0){
                                tempsql<<",{";
                            }else{
                                tempsql<<"{";
                            } 
                            tempsql<<keyname;
                 }else{
                    continue;
                 } 
                  
                 for(jj=0;jj<keypos.size();jj++){
                        
                       switch(keypos[jj]){
         case 0:
 if(jj>0){ tempsql<<","; } 
if(record[n].sid==0){
	tempsql<<"\"sid\":0";
 }else{ 
	tempsql<<"\"sid\":"<<std::to_string(record[n].sid);
}
 break;
 case 1:
 if(jj>0){ tempsql<<","; } 
if(record[n].userid==0){
	tempsql<<"\"userid\":0";
 }else{ 
	tempsql<<"\"userid\":"<<std::to_string(record[n].userid);
}
 break;
 case 2:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"sitename\":\""<<http::utf8_to_jsonstring(record[n].sitename)<<"\"";
 break;
 case 3:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"sitedomain\":\""<<http::utf8_to_jsonstring(record[n].sitedomain)<<"\"";
 break;
 case 4:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"metakeys\":\""<<http::utf8_to_jsonstring(record[n].metakeys)<<"\"";
 break;
 case 5:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"metadesc\":\""<<http::utf8_to_jsonstring(record[n].metadesc)<<"\"";
 break;
 case 6:
 if(jj>0){ tempsql<<","; } 
tempsql<<"\"copyright\":\""<<http::utf8_to_jsonstring(record[n].copyright)<<"\"";
 break;

                             default:
                                ;
                     }
                 }   
      tempsql<<"}";  
            }
      tempsql<<"]";
     return tempsql.str();             
   }   
   long long getPK(){  return data.sid; } 
 void setPK(long long val){  data.sid=val;} 
 int  getSid(){  return data.sid; } 
 void setSid( int  val){  data.sid=val;} 

 int  getUserid(){  return data.userid; } 
 void setUserid( int  val){  data.userid=val;} 

std::string getSitename(){  return data.sitename; } 
std::string& getRefSitename(){  return std::ref(data.sitename); } 
 void setSitename(std::string &val){  data.sitename=val;} 
 void setSitename(std::string_view val){  data.sitename=val;} 

std::string getSitedomain(){  return data.sitedomain; } 
std::string& getRefSitedomain(){  return std::ref(data.sitedomain); } 
 void setSitedomain(std::string &val){  data.sitedomain=val;} 
 void setSitedomain(std::string_view val){  data.sitedomain=val;} 

std::string getMetakeys(){  return data.metakeys; } 
std::string& getRefMetakeys(){  return std::ref(data.metakeys); } 
 void setMetakeys(std::string &val){  data.metakeys=val;} 
 void setMetakeys(std::string_view val){  data.metakeys=val;} 

std::string getMetadesc(){  return data.metadesc; } 
std::string& getRefMetadesc(){  return std::ref(data.metadesc); } 
 void setMetadesc(std::string &val){  data.metadesc=val;} 
 void setMetadesc(std::string_view val){  data.metadesc=val;} 

std::string getCopyright(){  return data.copyright; } 
std::string& getRefCopyright(){  return std::ref(data.copyright); } 
 void setCopyright(std::string &val){  data.copyright=val;} 
 void setCopyright(std::string_view val){  data.copyright=val;} 

siteinfobase::meta getnewData(){
 	 struct meta newdata;
	 return newdata; 
} 
siteinfobase::meta getData(){
 	 return data; 
} 
std::vector<siteinfobase::meta> getRecord(){
 	 return record; 
} 


    template<typename T, typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true>
    T& ref_meta([[maybe_unused]] std::string key_name)
    {
   		 if(key_name=="sitename")
		{
			return data.sitename;
		}
		 if(key_name=="sitedomain")
		{
			return data.sitedomain;
		}
		 if(key_name=="metakeys")
		{
			return data.metakeys;
		}
		 if(key_name=="metadesc")
		{
			return data.metadesc;
		}
		 if(key_name=="copyright")
		{
			return data.copyright;
		}
		return nullptr; 
	}


    template<typename T, typename std::enable_if<std::is_integral_v<T>,bool>::type = true>
    T& ref_meta([[maybe_unused]] std::string key_name)
    {
   		 if(key_name=="sid")
		{
			return data.sid;
		}
		 if(key_name=="userid")
		{
			return data.userid;
		}
		return nullptr; 
	}


    template<typename T, typename std::enable_if<std::is_floating_point_v<T>,bool>::type = true >
    T& ref_meta([[maybe_unused]] std::string key_name)
    {
   		return nullptr; 
	}

            template<typename T, typename std::enable_if<std::is_integral_v<T>,bool>::type = true >  
            std::vector<T> getCol(std::string keyname)
            {
                std::vector<T> a;
                unsigned char kpos;
                kpos=findcolpos(keyname);
   
                for(auto &iter:record)
                {
                    switch(kpos)
                    {
   			case 0: 
 				 a.emplace_back(iter.sid);
				 break;
			case 1: 
 				 a.emplace_back(iter.userid);
				 break;

                    }
                }
    
                return a;
            }
    
            template<typename T, typename std::enable_if<std::is_floating_point_v<T>,bool>::type = true >    
			std::vector<T> getCol(std::string keyname)
			{
				std::vector<T> a;
				unsigned char kpos;
				kpos = findcolpos(keyname);

                return a;
            }
    
            template<typename T, typename std::enable_if<std::is_integral_v<T>,bool>::type = true >   
            T getVal(std::string keyname)
            {
                unsigned char kpos;
                kpos=findcolpos(keyname);
                      
                    switch(kpos)
                    {

   			case 0: 
 				 return data.sid;
				 break;
			case 1: 
 				 return data.userid;
				 break;
			}
                return 0;
            }  
    
        template<typename T, typename std::enable_if<std::is_integral_v<T>,bool>::type = true > 
        T getVal([[maybe_unused]] siteinfobase::meta & iter,std::string keyname)
        {
            unsigned char kpos;
            kpos=findcolpos(keyname);
             
            switch(kpos)
            {
   			case 0: 
 				 return iter.sid;
				 break;
			case 1: 
 				 return iter.userid;
				 break;

			}

            return 0;
        }  
    
            template<typename T, typename std::enable_if<std::is_floating_point_v<T>,bool>::type = true > 
            T getVal(std::string keyname)
            {
                
                unsigned char kpos;
                kpos=findcolpos(keyname);
            
                switch(kpos)
                {

    
                    }
                   
    
                    return 0.0;
            }  
    
            template<typename T, typename std::enable_if<std::is_floating_point_v<T>,bool>::type = true > 
            T getVal([[maybe_unused]] siteinfobase::meta & iter,std::string keyname)
            {
                unsigned char kpos;
                kpos=findcolpos(keyname);
                switch(kpos)
                {
   
                }
                 
    
            
                return 0.0;
            }  
    
            template<typename T, typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true > 
            std::string getVal(std::string keyname)
            {
         
                unsigned char kpos;
                kpos=findcolpos(keyname);
        
                switch(kpos)
                {

   			case 2: 
 				 return data.sitename;
				 break;
			case 3: 
 				 return data.sitedomain;
				 break;
			case 4: 
 				 return data.metakeys;
				 break;
			case 5: 
 				 return data.metadesc;
				 break;
			case 6: 
 				 return data.copyright;
				 break;

                }
                return "";
            }  
   
            template<typename T, typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true > 
            std::string getVal([[maybe_unused]] siteinfobase::meta & iter,std::string keyname)
            {
         
                unsigned char kpos;
                kpos=findcolpos(keyname);
       
                switch(kpos)
                {

   			case 2: 
 				 return iter.sitename;
				 break;
			case 3: 
 				 return iter.sitedomain;
				 break;
			case 4: 
 				 return iter.metakeys;
				 break;
			case 5: 
 				 return iter.metadesc;
				 break;
			case 6: 
 				 return iter.copyright;
				 break;

                }
                
    
                 
                return "";
            }  
     
            template<typename T, typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true >   
            std::vector<std::string> getCol(std::string keyname)
            {
                std::vector<std::string> a;
                unsigned char kpos;
                kpos=findcolpos(keyname);
                   
                for(auto &iter:record)
                {
                    switch(kpos)
                    {

    			case 2: 
 				 a.emplace_back(iter.sitename);
					 break;
			case 3: 
 				 a.emplace_back(iter.sitedomain);
					 break;
			case 4: 
 				 a.emplace_back(iter.metakeys);
					 break;
			case 5: 
 				 a.emplace_back(iter.metadesc);
					 break;
			case 6: 
 				 a.emplace_back(iter.copyright);
					 break;
					}
				}

        return a;
    }
     
        std::string getstrCol(std::string keyname,[[maybe_unused]] bool isyinhao=false)
        {
            std::ostringstream a;
            unsigned char kpos;
            kpos=findcolpos(keyname);
       
            int j=0;
            if(isyinhao&&record.size()>0)
            {
                a<<'"';
            }
            for(auto &iter:record)
            {
                    if(j>0)
                    {
                        if(isyinhao)
                        {
                            a<<"\",\"";
                        }else{
                            a<<',';    
                        }
                    }
                    switch(kpos)
                    {

   			case 0: 
 				 a<<std::to_string(iter.sid);
				 break;
			case 1: 
 				 a<<std::to_string(iter.userid);
				 break;
			case 2: 
 				 if(isyinhao){ a<<jsonaddslash(iter.sitename); 
				 }else{
				 a<<iter.sitename;
				 }
				 break;
			case 3: 
 				 if(isyinhao){ a<<jsonaddslash(iter.sitedomain); 
				 }else{
				 a<<iter.sitedomain;
				 }
				 break;
			case 4: 
 				 if(isyinhao){ a<<jsonaddslash(iter.metakeys); 
				 }else{
				 a<<iter.metakeys;
				 }
				 break;
			case 5: 
 				 if(isyinhao){ a<<jsonaddslash(iter.metadesc); 
				 }else{
				 a<<iter.metadesc;
				 }
				 break;
			case 6: 
 				 if(isyinhao){ a<<jsonaddslash(iter.copyright); 
				 }else{
				 a<<iter.copyright;
				 }
				 break;

                    }
                    j++;
            } 
            if(isyinhao&&j>0){
                a<<'"';
            }      
    
                return a.str();
        }
    
    template<typename T,typename U,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true,typename std::enable_if<std::is_same<U,std::string>::value,bool>::type = true>     
    std::map<std::string,std::string> getCols(std::string keyname,std::string valname)
    {
        std::map<std::string,std::string> a;
        unsigned char kpos,vpos;
        kpos=findcolpos(keyname);
        vpos=findcolpos(valname);
            
         std::string ktemp,vtemp;
         for(auto &iter:record)
         {
                switch(kpos)
                {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
				 } 
			 switch(vpos){ 
			case 2: 
 				 vtemp=iter.sitename;
				 break;
			case 3: 
 				 vtemp=iter.sitedomain;
				 break;
			case 4: 
 				 vtemp=iter.metakeys;
				 break;
			case 5: 
 				 vtemp=iter.metadesc;
				 break;
			case 6: 
 				 vtemp=iter.copyright;
				 break;

                }
                a.emplace(ktemp,vtemp);
            }       

        
            return a;
        } 
    

        template<typename T,typename U,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true, typename std::enable_if<std::is_floating_point<U>::value,bool>::type = true>    
        std::map<std::string,U> getCols(std::string keyname,std::string valname)
        {
                std::map<std::string,U> a;
                unsigned char kpos,vpos;
                kpos=findcolpos(keyname);
                vpos=findcolpos(valname);
                  
                std::string ktemp;
                U vtemp;
                for(auto &iter:record)
                {    
                    switch(kpos)
                    {
 
       			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
			 } 
 		    switch(vpos){ 

                    }
                    a.emplace(ktemp,vtemp);
                }       
        
            return a;
        } 
    
        template<typename T,typename U,typename std::enable_if<std::is_integral_v<T>,bool>::type = true, typename std::enable_if<std::is_floating_point<U>::value,bool>::type = true>       
        std::map<T,U> getCols(std::string keyname,std::string valname)
        {
            std::map<T,U> a;
            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
               
            T ktemp;
            U vtemp;
            for(auto &iter:record)
            {
                switch(kpos)
                {
 
       case 0: 
 	 ktemp=iter.sid;
	 break;
case 1: 
 	 ktemp=iter.userid;
	 break;
	 } 
 		   switch(vpos){ 

                }
                a.emplace(ktemp,vtemp);
            }       
     
        return a;
    }  
            template<typename T,typename U,typename std::enable_if<std::is_integral_v<T>,bool>::type = true, typename std::enable_if<std::is_same<U,std::string>::value,bool>::type = true>      
            std::map<T,std::string> getCols(std::string keyname,std::string valname)
            {
                std::map<T,std::string> a;
                unsigned char kpos,vpos;
                kpos=findcolpos(keyname);
                vpos=findcolpos(valname);
            
                T ktemp;
                std::string vtemp;
                for(auto &iter:record)
                {
                    switch(kpos)
                    {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			  }
 			 switch(vpos){
			case 2: 
 				 vtemp=iter.sitename;
				 break;
			case 3: 
 				 vtemp=iter.sitedomain;
				 break;
			case 4: 
 				 vtemp=iter.metakeys;
				 break;
			case 5: 
 				 vtemp=iter.metadesc;
				 break;
			case 6: 
 				 vtemp=iter.copyright;
				 break;

                    }
                    a.emplace(ktemp,vtemp);
                } 
         
                return a;
            }     
        
        template<typename T,typename U, typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true>       
        std::map<std::string,U> getCols(std::string keyname,std::string valname)
        {
            std::map<std::string,U> a;
            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
               
            std::string  ktemp;
            U  vtemp;
            for(auto &iter:record)
            {
                switch(kpos)
                {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
			  }
 			 switch(vpos){
			case 0: 
 				 vtemp=iter.sid;
				 break;
			case 1: 
 				 vtemp=iter.userid;
				 break;

                }
                a.emplace(ktemp,vtemp);
            }       
      
        return a;
    }  
    
        template<typename T,typename U, typename std::enable_if<std::is_integral_v<T>,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true>   
        std::map<T,U> getCols(std::string keyname,std::string valname)
        {
            std::map<T,U> a;
            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
                
            T ktemp;
            U vtemp;
            for(auto &iter:record)
            {
                switch(kpos)
                {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			  }
 			 switch(vpos){
			case 0: 
 				 vtemp=iter.sid;
				 break;
			case 1: 
 				 vtemp=iter.userid;
				 break;

                }
                a.emplace(ktemp,vtemp);
            }       
    
            return a;
        }   
    
        template<typename T, typename std::enable_if<std::is_integral_v<T>,bool>::type = true >         
        std::map<T,meta> getmapRows(std::string keyname)
        {
            std::map<T,meta> a;
            unsigned char kpos;
            kpos=findcolpos(keyname);
                
            for(auto &iter:record)
            {
                switch(kpos)
                {

   			case 0: 
 				 a.emplace(iter.sid,iter);
				 break;
			case 1: 
 				 a.emplace(iter.userid,iter);
				 break;

                }
            }       
     
            return a;
        }     
    
        template<typename T, typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true >    
        std::map<std::string,meta> getmapRows(std::string keyname)
        {
            std::map<std::string,meta> a;
            unsigned char kpos;
            kpos=findcolpos(keyname);
    
            for(auto &iter:record)
            {
                switch(kpos)
                {

   			case 2: 
 				 a.emplace(iter.sitename,iter);
			 break;
			case 3: 
 				 a.emplace(iter.sitedomain,iter);
			 break;
			case 4: 
 				 a.emplace(iter.metakeys,iter);
			 break;
			case 5: 
 				 a.emplace(iter.metadesc,iter);
			 break;
			case 6: 
 				 a.emplace(iter.copyright,iter);
			 break;

                }
                //a.emplace(ktemp,iter);
            }       
    

        return a;
    }
    
        template<typename T,typename U,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true, typename std::enable_if<std::is_floating_point<U>::value,bool>::type = true>  
        std::vector<std::pair<std::string,U>> getvecCols(std::string keyname,std::string valname)
        {
            std::vector<std::pair<std::string,U>> a;

            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
          
            std::string ktemp;
            U vtemp;
            for(auto &iter:record)
            {
                switch(kpos)
                {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
	 		 }
 			switch(vpos){

                   }

                 a.emplace_back(ktemp,vtemp);
            }       

     

            return a;
        }   
    
        template<typename T,typename U,typename std::enable_if<std::is_integral_v<T>,bool>::type = true, typename std::enable_if<std::is_floating_point<U>::value,bool>::type = true>    
        std::vector<std::pair<T,U>> getvecCols(std::string keyname,std::string valname)
        {
                std::vector<std::pair<T,U>> a;
                unsigned char kpos,vpos;
                kpos=findcolpos(keyname);
                vpos=findcolpos(valname);

   
                T ktemp;
                U vtemp;
                for(auto &iter:record)
                {
                    switch(kpos)
                    {

   			case 0: 
 				 ktemp=iter.sid;
			 break;
			case 1: 
 				 ktemp=iter.userid;
			 break;
			  }
			 switch(vpos){

                   }

                   a.emplace_back(ktemp,vtemp);
                }       

    

            return a;
        }   
    
        template<typename T,typename U,typename std::enable_if<std::is_integral_v<T>,bool>::type = true, typename std::enable_if<std::is_same<U,std::string>::value,bool>::type = true>    
        std::vector<std::pair<T,U>> getvecCols(std::string keyname,std::string valname)
        {
                std::vector<std::pair<T,U>> a;
                unsigned char kpos,vpos;
                kpos=findcolpos(keyname);
                vpos=findcolpos(valname);

   
                    T ktemp;
                    U vtemp;
                for(auto &iter:record)
                {
                    switch(kpos)
                    {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			  }
 			switch(vpos){
			case 2: 
 				 vtemp=iter.sitename;
				 break;
			case 3: 
 				 vtemp=iter.sitedomain;
				 break;
			case 4: 
 				 vtemp=iter.metakeys;
				 break;
			case 5: 
 				 vtemp=iter.metadesc;
				 break;
			case 6: 
 				 vtemp=iter.copyright;
				 break;

                   }

                    a.emplace_back(ktemp,vtemp);
                }       
    
            return a;
        }  
    
        template<typename T,typename U, typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true>     
        std::vector<std::pair<T,U>> getvecCols(std::string keyname,std::string valname)
        {
                std::vector<std::pair<T,U>> a;

                unsigned char kpos,vpos;
                kpos=findcolpos(keyname);
                vpos=findcolpos(valname);
                   
                    T ktemp;
                    U vtemp;
                for(auto &iter:record)
                {
                    
                    switch(kpos)
                    {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
			  }
 			 switch(vpos){
			case 0: 
 				 vtemp=iter.sid;
				 break;
			case 1: 
 				 vtemp=iter.userid;
				 break;

                   }
                    a.emplace_back(ktemp,vtemp);
                }       
    
            return a;
        }  
    
        template<typename T,typename U, typename std::enable_if<std::is_integral_v<T>,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true>    
        std::vector<std::pair<T,U>> getvecCols(std::string keyname,std::string valname)
        {
                std::vector<std::pair<T,U>> a;

                unsigned char kpos,vpos;
                kpos=findcolpos(keyname);
                vpos=findcolpos(valname);
   
                    T ktemp;
                    U vtemp;
                for(auto &iter:record)
                {
                    switch(kpos)
                    {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			  }
			 switch(vpos){
			case 0: 
 				 vtemp=iter.sid;
				 break;
			case 1: 
 				 vtemp=iter.userid;
				 break;

                   }
                    a.emplace_back(ktemp,vtemp);
                }       
      
            return a;
        }   
    
        template<typename T,typename U, typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true>     
        std::vector<std::pair<T,U>> getvecCols(std::string keyname,std::string valname)
        {
                std::vector<std::pair<T,U>> a;

                unsigned char kpos,vpos;
                kpos=findcolpos(keyname);
                vpos=findcolpos(valname);
   
                    T ktemp;
                    U vtemp;
                for(auto &iter:record)
                {
                    switch(kpos)
                    {

   case 2: 
 	 ktemp=iter.sitename;
	 break;
case 3: 
 	 ktemp=iter.sitedomain;
	 break;
case 4: 
 	 ktemp=iter.metakeys;
	 break;
case 5: 
 	 ktemp=iter.metadesc;
	 break;
case 6: 
 	 ktemp=iter.copyright;
	 break;
	  }
 switch(vpos){
case 2: 
 	 vtemp=iter.sitename;
	 break;
case 3: 
 	 vtemp=iter.sitedomain;
	 break;
case 4: 
 	 vtemp=iter.metakeys;
	 break;
case 5: 
 	 vtemp=iter.metadesc;
	 break;
case 6: 
 	 vtemp=iter.copyright;
	 break;

                   }

                    a.emplace_back(ktemp,vtemp);
                }       
    
            return a;
        }  
    
        template<typename T, typename std::enable_if<std::is_integral_v<T>,bool>::type = true >   
        std::vector<std::pair<T,meta>> getvecRows(std::string keyname)
        {
            std::vector<std::pair<T,meta>> a;
            unsigned char kpos;
            kpos=findcolpos(keyname);
           
            for(auto &iter:record)
            { 
                switch(kpos)
                {

   case 0: 
 	 a.emplace_back(iter.sid,iter);
	 break;
case 1: 
 	 a.emplace_back(iter.userid,iter);
	 break;

                }
            }       
    
        return a;
    }
        template<typename T, typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true >  
        std::vector<std::pair<std::string,meta>> getvecRows(std::string keyname)
        {
            std::vector<std::pair<std::string,meta>> a;

            unsigned char kpos;
            kpos=findcolpos(keyname);
               
            for(auto &iter:record)
            {
                switch(kpos)
                {

   case 2: 
 	 a.emplace_back(iter.sitename,iter);
	 break;
case 3: 
 	 a.emplace_back(iter.sitedomain,iter);
	 break;
case 4: 
 	 a.emplace_back(iter.metakeys,iter);
	 break;
case 5: 
 	 a.emplace_back(iter.metadesc,iter);
	 break;
case 6: 
 	 a.emplace_back(iter.copyright,iter);
	 break;

                }
            }       
    

        return a;
    }
        template<typename T,typename U,typename D,typename std::enable_if<std::is_integral_v<T>,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true, typename std::enable_if<std::is_floating_point<D>::value,bool>::type = true>    
        std::map<T,std::map<U,std::vector<D>>> getgroupCols(std::string keyname,std::string valname,std::string dataname)
        {
            std::map<T,std::map<U,std::vector<D>>> a;

            unsigned char kpos,vpos,dpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
            dpos=findcolpos(dataname);
          
            T ktemp;
            U vtemp;
            for(auto &iter:record)
            { 
                switch(kpos)
                {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			  }

			 switch(vpos){
			case 0: 
 				 vtemp=iter.sid;
				 break;
			case 1: 
 				 vtemp=iter.userid;
				 break;
			  }

			 switch(dpos){

                }
            }       

    
            return a;
        }
    
        template<typename T,typename U,typename D,typename std::enable_if<std::is_integral_v<T>,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true, typename std::enable_if<std::is_integral_v<D>,bool>::type = true>    
        std::map<T,std::map<U,std::vector<D>>> getgroupCols(std::string keyname,std::string valname,std::string dataname)
        {
            std::map<T,std::map<U,std::vector<D>>> a;

            unsigned char kpos,vpos,dpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
            dpos=findcolpos(dataname);

              
            T ktemp;
            U vtemp;
            //D vtemp;

            for(auto &iter:record)
            {
                switch(kpos)
                {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			  }

			 switch(vpos){
			case 0: 
 				 vtemp=iter.sid;
				 break;
			case 1: 
 				 vtemp=iter.userid;
				 break;
			  }

			 switch(dpos){
			case 0: 
 				 a[ktemp][vtemp].emplace_back(iter.sid);
				 break;
			case 1: 
 				 a[ktemp][vtemp].emplace_back(iter.userid);
				 break;

                }
            }       
    
            return a;
        }
    
        template<typename T,typename U,typename D,typename std::enable_if<std::is_integral_v<T>,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true, typename std::enable_if<std::is_same<D,std::string>::value,bool>::type = true>    
        std::map<T,std::map<U,std::vector<D>>> getgroupCols(std::string keyname,std::string valname,std::string dataname)
        {
            std::map<T,std::map<U,std::vector<D>>> a;

            unsigned char kpos,vpos,dpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
            dpos=findcolpos(dataname);
          
            T ktemp;
            U vtemp;
            // D dtemp;

            for(auto &iter:record)
            {
                switch(kpos)
                {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
				  }

			 switch(vpos){
			case 0: 
 				 vtemp=iter.sid;
				 break;
			case 1: 
 				 vtemp=iter.userid;
				 break;
			 }

			 switch(dpos){
			case 2: 
 				 a[ktemp][vtemp].emplace_back(iter.sitename);
				 break;
			case 3: 
 				 a[ktemp][vtemp].emplace_back(iter.sitedomain);
				 break;
			case 4: 
 				 a[ktemp][vtemp].emplace_back(iter.metakeys);
				 break;
			case 5: 
 				 a[ktemp][vtemp].emplace_back(iter.metadesc);
				 break;
			case 6: 
 				 a[ktemp][vtemp].emplace_back(iter.copyright);
				 break;

                }
            }       
    
            return a;
        }
    
        template<typename T,typename U,typename D,typename std::enable_if<std::is_integral_v<T>,bool>::type = true, typename std::enable_if<std::is_same<U,std::string>::value,bool>::type = true, typename std::enable_if<std::is_floating_point<D>::value,bool>::type = true>    
        std::map<T,std::map<U,std::vector<D>>> getgroupCols(std::string keyname,std::string valname,std::string dataname)
        {
                std::map<T,std::map<U,std::vector<D>>> a;

                unsigned char kpos,vpos,dpos;
                kpos=findcolpos(keyname);
                vpos=findcolpos(valname);
                dpos=findcolpos(dataname);
   
                T ktemp;
                U vtemp;
            // D dtemp;

                for(auto &iter:record)
                {
                    
                    switch(kpos)
                    {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			 }

			 switch(vpos){
			case 2: 
 				 vtemp=iter.sitename;
				 break;
			case 3: 
 				 vtemp=iter.sitedomain;
				 break;
			case 4: 
 				 vtemp=iter.metakeys;
				 break;
			case 5: 
 				 vtemp=iter.metadesc;
				 break;
			case 6: 
 				 vtemp=iter.copyright;
				 break;
			  }

			 switch(dpos){

                   }
                }       
    
            return a;
        }
    
    template<typename T,typename U,typename D,typename std::enable_if<std::is_integral_v<T>,bool>::type = true, typename std::enable_if<std::is_same<U,std::string>::value,bool>::type = true, typename std::enable_if<std::is_integral_v<D>,bool>::type = true>    
    std::map<T,std::map<U,std::vector<D>>> getgroupCols(std::string keyname,std::string valname,std::string dataname)
    {
        std::map<T,std::map<U,std::vector<D>>> a;

        unsigned char kpos,vpos,dpos;
        kpos=findcolpos(keyname);
        vpos=findcolpos(valname);
        dpos=findcolpos(dataname);

           
        T ktemp;
        U vtemp;
       // D dtemp;

         for(auto &iter:record)
         {
            switch(kpos)
            {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			 }

			 switch(vpos){
			case 2: 
 				 vtemp=iter.sitename;
				 break;
			case 3: 
 				 vtemp=iter.sitedomain;
				 break;
			case 4: 
 				 vtemp=iter.metakeys;
				 break;
			case 5: 
 				 vtemp=iter.metadesc;
				 break;
			case 6: 
 				 vtemp=iter.copyright;
				 break;
			 }

			 switch(dpos){
			case 0: 
 				 a[ktemp][vtemp].emplace_back(iter.sid);
				 break;
			case 1: 
 				 a[ktemp][vtemp].emplace_back(iter.userid);
				 break;

            }
         }       
    
        return a;
    }
        template<typename T,typename U,typename D,typename std::enable_if<std::is_integral_v<T>,bool>::type = true, typename std::enable_if<std::is_same<U,std::string>::value,bool>::type = true, typename std::enable_if<std::is_same<D,std::string>::value,bool>::type = true>    
        std::map<T,std::map<U,std::vector<D>>> getgroupCols(std::string keyname,std::string valname,std::string dataname)
        {
            std::map<T,std::map<U,std::vector<D>>> a;

            unsigned char kpos,vpos,dpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
            dpos=findcolpos(dataname);
   
            T ktemp;
            U vtemp;
            // D dtemp;

            for(auto &iter:record)
            { 
                switch(kpos)
                {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			  }

			 switch(vpos){
			case 2: 
 				 vtemp=iter.sitename;
				 break;
			case 3: 
 				 vtemp=iter.sitedomain;
				 break;
			case 4: 
 				 vtemp=iter.metakeys;
				 break;
			case 5: 
 				 vtemp=iter.metadesc;
				 break;
			case 6: 
 				 vtemp=iter.copyright;
				 break;
			  }

			 switch(dpos){
			case 2: 
 				 a[ktemp][vtemp].emplace_back(iter.sitename);
				 break;
			case 3: 
 				 a[ktemp][vtemp].emplace_back(iter.sitedomain);
				 break;
			case 4: 
 				 a[ktemp][vtemp].emplace_back(iter.metakeys);
				 break;
			case 5: 
 				 a[ktemp][vtemp].emplace_back(iter.metadesc);
				 break;
			case 6: 
 				 a[ktemp][vtemp].emplace_back(iter.copyright);
				 break;

                }
            }       
    
            return a;
        }
    
        template<typename T,typename U,typename D,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true, typename std::enable_if<std::is_floating_point<D>::value,bool>::type = true>    
        std::map<T,std::map<U,std::vector<D>>> getgroupCols(std::string keyname,std::string valname,std::string dataname)
        {
                std::map<T,std::map<U,std::vector<D>>> a;

                unsigned char kpos,vpos,dpos;
                kpos=findcolpos(keyname);
                vpos=findcolpos(valname);
                dpos=findcolpos(dataname);
                  
                T ktemp;
                U vtemp;
                //D vtemp;
                for(auto &iter:record)
                {
                    switch(kpos)
                    {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
			 }

			 switch(vpos){
			case 0: 
 				 vtemp=iter.sid;
				 break;
			case 1: 
 				 vtemp=iter.userid;
				 break;
			  }

			 switch(dpos){

                    }
                }       
    

            return a;
        }
    
        template<typename T,typename U,typename D,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true, typename std::enable_if<std::is_integral_v<D>,bool>::type = true>    
        std::map<T,std::map<U,std::vector<D>>> getgroupCols(std::string keyname,std::string valname,std::string dataname)
        {
            std::map<T,std::map<U,std::vector<D>>> a;

            unsigned char kpos,vpos,dpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
            dpos=findcolpos(dataname);
               
            T ktemp;
            U vtemp;
            //D vtemp;

            for(auto &iter:record)
            {
                
                switch(kpos)
                {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
			  }

			 switch(vpos){
			case 0: 
 				 vtemp=iter.sid;
				 break;
			case 1: 
 				 vtemp=iter.userid;
				 break;
			 }

			 switch(dpos){
			case 0: 
 				 a[ktemp][vtemp].emplace_back(iter.sid);
				 break;
			case 1: 
 				 a[ktemp][vtemp].emplace_back(iter.userid);
				 break;

                }
            }       
    
            return a;
        }
    
    template<typename T,typename U,typename D,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true, typename std::enable_if<std::is_same<D,std::string>::value,bool>::type = true>    
    std::map<T,std::map<U,std::vector<D>>> getgroupCols(std::string keyname,std::string valname,std::string dataname)
    {
        std::map<T,std::map<U,std::vector<D>>> a;

        unsigned char kpos,vpos,dpos;
        kpos=findcolpos(keyname);
        vpos=findcolpos(valname);
        dpos=findcolpos(dataname);
   
        T ktemp;
        U vtemp;
        // D dtemp;

         for(auto &iter:record)
         {
             
            switch(kpos)
            {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
			 }

			switch(vpos){
			case 0: 
 				 vtemp=iter.sid;
				 break;
			case 1: 
 				 vtemp=iter.userid;
				 break;
			 }

			switch(dpos){
			case 2: 
 				 a[ktemp][vtemp].emplace_back(iter.sitename);
				 break;
			case 3: 
 				 a[ktemp][vtemp].emplace_back(iter.sitedomain);
				 break;
			case 4: 
 				 a[ktemp][vtemp].emplace_back(iter.metakeys);
				 break;
			case 5: 
 				 a[ktemp][vtemp].emplace_back(iter.metadesc);
				 break;
			case 6: 
 				 a[ktemp][vtemp].emplace_back(iter.copyright);
				 break;

            }
         }       
    
            return a;
        }
    
        template<typename T,typename U,typename D,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true, typename std::enable_if<std::is_same<U,std::string>::value,bool>::type = true, typename std::enable_if<std::is_floating_point<D>::value,bool>::type = true>    
        std::map<T,std::map<U,std::vector<D>>> getgroupCols(std::string keyname,std::string valname,std::string dataname)
        {
            std::map<T,std::map<U,std::vector<D>>> a;

            unsigned char kpos,vpos,dpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
            dpos=findcolpos(dataname);
           
            T ktemp;
            U vtemp;
            // D dtemp;

            for(auto &iter:record)
            {
                switch(kpos)
                {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
			 }

			 switch(vpos){
			case 2: 
 				 vtemp=iter.sitename;
				 break;
			case 3: 
 				 vtemp=iter.sitedomain;
				 break;
			case 4: 
 				 vtemp=iter.metakeys;
				 break;
			case 5: 
 				 vtemp=iter.metadesc;
				 break;
			case 6: 
 				 vtemp=iter.copyright;
				 break;
			  }

			 switch(dpos){

                }
            }       

    
            return a;
        }
        template<typename T,typename U,typename D,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true, typename std::enable_if<std::is_same<U,std::string>::value,bool>::type = true, typename std::enable_if<std::is_integral_v<D>,bool>::type = true>    
        std::map<T,std::map<U,std::vector<D>>> getgroupCols(std::string keyname,std::string valname,std::string dataname)
        {
            std::map<T,std::map<U,std::vector<D>>> a;

            unsigned char kpos,vpos,dpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
            dpos=findcolpos(dataname);
   
            T ktemp;
            U vtemp;
            // D dtemp;

            for(auto &iter:record)
            {
                
                switch(kpos)
                {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
			  }

			 switch(vpos){
			case 2: 
 				 vtemp=iter.sitename;
				 break;
			case 3: 
 				 vtemp=iter.sitedomain;
				 break;
			case 4: 
 				 vtemp=iter.metakeys;
				 break;
			case 5: 
 				 vtemp=iter.metadesc;
				 break;
			case 6: 
 				 vtemp=iter.copyright;
				 break;
			 }

			 switch(dpos){
			case 0: 
 				 a[ktemp][vtemp].emplace_back(iter.sid);
				 break;
			case 1: 
 				 a[ktemp][vtemp].emplace_back(iter.userid);
				 break;

                }
            }       
    
            return a;
        }
    
        template<typename T,typename U,typename D,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true, typename std::enable_if<std::is_same<U,std::string>::value,bool>::type = true, typename std::enable_if<std::is_same<D,std::string>::value,bool>::type = true>    
        std::map<T,std::map<U,std::vector<D>>> getgroupCols(std::string keyname,std::string valname,std::string dataname)
        {
            std::map<T,std::map<U,std::vector<D>>> a;

            unsigned char kpos,vpos,dpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
            dpos=findcolpos(dataname);

           
            T ktemp;
            U vtemp;
            // D dtemp;

            for(auto &iter:record)
            {
                switch(kpos)
                {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
			  }

			 switch(vpos){
			case 2: 
 				 vtemp=iter.sitename;
				 break;
			case 3: 
 				 vtemp=iter.sitedomain;
				 break;
			case 4: 
 				 vtemp=iter.metakeys;
				 break;
			case 5: 
 				 vtemp=iter.metadesc;
				 break;
			case 6: 
 				 vtemp=iter.copyright;
				 break;
			  }

			 switch(dpos){
			case 2: 
 				 a[ktemp][vtemp].emplace_back(iter.sitename);
				 break;
			case 3: 
 				 a[ktemp][vtemp].emplace_back(iter.sitedomain);
				 break;
			case 4: 
 				 a[ktemp][vtemp].emplace_back(iter.metakeys);
				 break;
			case 5: 
 				 a[ktemp][vtemp].emplace_back(iter.metadesc);
				 break;
			case 6: 
 				 a[ktemp][vtemp].emplace_back(iter.copyright);
				 break;

                }
            }       
    
            return a;
        }
    
        template<typename T,typename U,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true, typename std::enable_if<std::is_same<U,std::string>::value,bool>::type = true>    
        std::map<T,std::vector<U>> getgroupCols(std::string keyname,std::string valname)
        {
            std::map<T,std::vector<U>> a;

            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);

   
            T ktemp;
            //U vtemp;

            for(auto &iter:record)
            {
                switch(kpos)
                {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
			  }

			 switch(vpos){
			case 2: 
 				 a[ktemp].emplace_back(iter.sitename);
				 break;
			case 3: 
 				 a[ktemp].emplace_back(iter.sitedomain);
				 break;
			case 4: 
 				 a[ktemp].emplace_back(iter.metakeys);
				 break;
			case 5: 
 				 a[ktemp].emplace_back(iter.metadesc);
				 break;
			case 6: 
 				 a[ktemp].emplace_back(iter.copyright);
				 break;

                }
            }       
    
            return a;
        }
    
        template<typename T,typename U,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true,typename std::enable_if<std::is_floating_point<U>::value,bool>::type = true>    
        std::map<T,std::vector<U>> getgroupCols(std::string keyname,std::string valname)
        {
            std::map<T,std::vector<U>> a;

            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
   
            T ktemp;
            //U vtemp;

            for(auto &iter:record)
            {
                switch(kpos)
                {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
			 }

			 switch(vpos){

                }
            }       

    
            return a;
        }
    
        template<typename T,typename U,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true>    
        std::map<T,std::vector<U>> getgroupCols(std::string keyname,std::string valname)
        {
            std::map<T,std::vector<U>> a;

            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
   
            T ktemp;
            //U vtemp;

            for(auto &iter:record)
            {
                
                switch(kpos)
                {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
			  }

			 switch(vpos){
			case 0: 
 				 a[ktemp].emplace_back(iter.sid);
				 break;
			case 1: 
 				 a[ktemp].emplace_back(iter.userid);
				 break;

                }
            }       
    
            return a;
        }
    
        template<typename T,typename U,typename std::enable_if<std::is_integral_v<T>,bool>::type = true, typename std::enable_if<std::is_same<U,std::string>::value,bool>::type = true>    
        std::map<T,std::vector<U>> getgroupCols(std::string keyname,std::string valname)
        {
            std::map<T,std::vector<U>> a;

            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
   
            T ktemp;
            //U vtemp;

            for(auto &iter:record)
            {
                
                switch(kpos)
                {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			 }

			 switch(vpos){
			case 2: 
 				 a[ktemp].emplace_back(iter.sitename);
				 break;
			case 3: 
 				 a[ktemp].emplace_back(iter.sitedomain);
				 break;
			case 4: 
 				 a[ktemp].emplace_back(iter.metakeys);
				 break;
			case 5: 
 				 a[ktemp].emplace_back(iter.metadesc);
				 break;
			case 6: 
 				 a[ktemp].emplace_back(iter.copyright);
				 break;

                }
            }       

    
            return a;
        }
    
        template<typename T,typename U,typename std::enable_if<std::is_integral_v<T>,bool>::type = true,typename std::enable_if<std::is_floating_point<U>::value,bool>::type = true>    
        std::map<T,std::vector<U>> getgroupCols(std::string keyname,std::string valname)
        {
            std::map<T,std::vector<U>> a;

            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
               

            T ktemp;
            //U vtemp;

            for(auto &iter:record)
            {
                
                switch(kpos)
                {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			  }

			 switch(vpos){

                }
            }       
    
            return a;
        }
    
        template<typename T,typename U,typename std::enable_if<std::is_integral_v<T>,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true>    
        std::map<T,std::vector<U>> getgroupCols(std::string keyname,std::string valname)
        {
            std::map<T,std::vector<U>> a;

            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
   
            T ktemp;
            //U vtemp;

            for(auto &iter:record)
            {
                
                switch(kpos)
                {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			 }

			 switch(vpos){
			case 0: 
 				 a[ktemp].emplace_back(iter.sid);
				 break;
			case 1: 
 				 a[ktemp].emplace_back(iter.userid);
				 break;

                }
            }       
    
            return a;
        }
    
        template<typename T,typename std::enable_if<std::is_integral_v<T>,bool>::type = true>    
        std::map<T,std::vector<meta>> getgroupRows(std::string keyname)
        {
            std::map<T,std::vector<meta>> a;

            unsigned char kpos;
            kpos=findcolpos(keyname);
   
            //T ktemp;
            //U vtemp;

            for(auto &iter:record)
            {
                switch(kpos)
                {

   			case 0: 
 				 a[iter.sid].emplace_back(iter);
				 break;
			case 1: 
 				 a[iter.userid].emplace_back(iter);
				 break;

                }
            }       
    
            return a;
        }
    
        template<typename T,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true>    
        std::map<T,std::vector<meta>> getgroupRows(std::string keyname)
        {
            std::map<T,std::vector<meta>> a;

            unsigned char kpos;
            kpos=findcolpos(keyname);
   
            //T ktemp;
            //U vtemp;

            for(auto &iter:record)
            {
                
                switch(kpos)
                {

   			case 2: 
 				 a[iter.sitename].emplace_back(iter);
				 break;
			case 3: 
 				 a[iter.sitedomain].emplace_back(iter);
				 break;
			case 4: 
 				 a[iter.metakeys].emplace_back(iter);
				 break;
			case 5: 
 				 a[iter.metadesc].emplace_back(iter);
				 break;
			case 6: 
 				 a[iter.copyright].emplace_back(iter);
				 break;

                }
            }       
    
            return a;
        }
    
        template<typename T,typename U,typename D,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true, typename std::enable_if<std::is_same<U,std::string>::value,bool>::type = true>    
        std::map<T,std::map<U,std::vector<meta>>> getgroupRows(std::string keyname,std::string valname)
        {
            std::map<T,std::map<U,std::vector<meta>>> a;

            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
   
            T ktemp;

            for(auto &iter:record)
            {
                
                switch(kpos)
                {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
			 }

			 switch(vpos){
			case 2: 
 				 a[ktemp][iter.sitename].emplace_back(iter);
				 break;
			case 3: 
 				 a[ktemp][iter.sitedomain].emplace_back(iter);
				 break;
			case 4: 
 				 a[ktemp][iter.metakeys].emplace_back(iter);
				 break;
			case 5: 
 				 a[ktemp][iter.metadesc].emplace_back(iter);
				 break;
			case 6: 
 				 a[ktemp][iter.copyright].emplace_back(iter);
				 break;

                }
            }       
    
            return a;
        }
    
        template<typename T,typename U,typename std::enable_if<std::is_same<T,std::string>::value,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true>    
        std::map<T,std::map<U,std::vector<meta>>> getgroupRows(std::string keyname,std::string valname)
        {
            std::map<T,std::map<U,std::vector<meta>>> a;

            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);

               
            T ktemp;
            
            for(auto &iter:record)
            {
                
                switch(kpos)
                {

   			case 2: 
 				 ktemp=iter.sitename;
				 break;
			case 3: 
 				 ktemp=iter.sitedomain;
				 break;
			case 4: 
 				 ktemp=iter.metakeys;
				 break;
			case 5: 
 				 ktemp=iter.metadesc;
				 break;
			case 6: 
 				 ktemp=iter.copyright;
				 break;
	  }

 switch(vpos){
			case 0: 
 				 a[ktemp][iter.sid].emplace_back(iter);
				 break;
			case 1: 
 				 a[ktemp][iter.userid].emplace_back(iter);
				 break;

                }
            }       

    
            return a;
        }
    
        template<typename T,typename U,typename std::enable_if<std::is_integral_v<U>,bool>::type = true,typename std::enable_if<std::is_integral_v<U>,bool>::type = true>    
        std::map<T,std::map<U,std::vector<meta>>> getgroupRows(std::string keyname,std::string valname)
        {
            std::map<T,std::map<U,std::vector<meta>>> a;

            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);

           
        T ktemp;
        
            for(auto &iter:record)
            {
                
                switch(kpos)
                {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			 }

			 switch(vpos){
			case 0: 
 				 a[ktemp][iter.sid].emplace_back(iter);
				 break;
			case 1: 
 				 a[ktemp][iter.userid].emplace_back(iter);
				 break;

                }
            }       
    
            return a;
        }
    
        template<typename T,typename U,typename std::enable_if<std::is_integral_v<T>,bool>::type = true,typename std::enable_if<std::is_same<U,std::string>::value,bool>::type = true>    
        std::map<T,std::map<U,std::vector<meta>>> getgroupRows(std::string keyname,std::string valname)
        {
            std::map<T,std::map<U,std::vector<meta>>> a;

            unsigned char kpos,vpos;
            kpos=findcolpos(keyname);
            vpos=findcolpos(valname);
               
            T ktemp;
            
            for(auto &iter:record)
            {
                
                switch(kpos)
                {

   			case 0: 
 				 ktemp=iter.sid;
				 break;
			case 1: 
 				 ktemp=iter.userid;
				 break;
			  }

			 switch(vpos){
			case 2: 
 				 a[ktemp][iter.sitename].emplace_back(iter);
				 break;
			case 3: 
 				 a[ktemp][iter.sitedomain].emplace_back(iter);
				 break;
			case 4: 
 				 a[ktemp][iter.metakeys].emplace_back(iter);
				 break;
			case 5: 
 				 a[ktemp][iter.metadesc].emplace_back(iter);
				 break;
			case 6: 
 				 a[ktemp][iter.copyright].emplace_back(iter);
				 break;

                }
            }       
    
            return a;
        }
    
  };
    
} 
}
#endif
   