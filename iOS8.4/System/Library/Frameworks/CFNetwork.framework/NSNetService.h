/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:19 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSString, NSArray;

@interface NSNetService : NSObject {

	id _netService;
	id _delegate;
	id _reserved;

}

@property (assign) id<NSNetServiceDelegate> delegate; 
@property (assign) BOOL includesPeerToPeer; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * type; 
@property (copy,readonly) NSString * domain; 
@property (copy,readonly) NSString * hostName; 
@property (copy,readonly) NSArray * addresses; 
@property (readonly) long long port; 
+(id)dataFromTXTRecordDictionary:(id)arg1 ;
+(id)dictionaryFromTXTRecordData:(id)arg1 ;
-(id)_monitors;
-(CFNetServiceRef)_internalNetService;
-(void)_scheduleInDefaultRunLoopForMode:(id)arg1 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4 ;
-(id)normalizedType;
-(BOOL)includesPeerToPeer;
-(BOOL)_includesAWDL;
-(void)_internal_publishWithOptions:(unsigned long long)arg1 ;
-(void)publishWithServer:(unsigned long long)arg1 ;
-(void)publishWithOptions:(unsigned long long)arg1 ;
-(void)resolveWithTimeout:(double)arg1 ;
-(id)initWithCFNetService:(CFNetServiceRef)arg1 ;
-(id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 ;
-(void)setIncludesPeerToPeer:(BOOL)arg1 ;
-(void)_setIncludesAWDL:(BOOL)arg1 ;
-(void)_dispatchCallBackWithError:(SCD_Struct_NS19)arg1 ;
-(BOOL)getInputStream:(out id*)arg1 outputStream:(out id*)arg2 ;
-(void)resolve;
-(void)startMonitoring;
-(void)stopMonitoring;
-(BOOL)setTXTRecordData:(id)arg1 ;
-(id)TXTRecordData;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)publish;
-(NSArray *)addresses;
-(void)dealloc;
-(void)setDelegate:(id<NSNetServiceDelegate>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<NSNetServiceDelegate>)delegate;
-(NSString *)name;
-(NSString *)type;
-(NSString *)domain;
-(void)stop;
-(long long)port;
-(NSString *)hostName;
-(void)finalize;
@end
