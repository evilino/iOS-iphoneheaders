/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:02:37 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class JaliscoImporter, NSString, NSDictionary;

@interface JaliscoUpdateOperation : CloudLibraryOperation {

	long long _reason;
	JaliscoImporter* _importer;
	char _initialImport;
	NSString* _powerEventBeginName;
	NSString* _powerEventEndName;
	NSDictionary* _powerEventPayload;

}

@property (getter=isInitialImport,nonatomic,readonly) char initialImport;              //@synthesize initialImport=_initialImport - In the implementation block
@property (nonatomic,readonly) float updateProgress; 
@property (copy) NSString * powerEventBeginName;                                       //@synthesize powerEventBeginName=_powerEventBeginName - In the implementation block
@property (copy) NSString * powerEventEndName;                                         //@synthesize powerEventEndName=_powerEventEndName - In the implementation block
@property (copy) NSDictionary * powerEventPayload;                                     //@synthesize powerEventPayload=_powerEventPayload - In the implementation block
-(int)localDatabaseRevision;
-(void)setInitialImport:(char)arg1 ;
-(id)queryFilterPercentEscaped;
-(id)newImporter;
-(char)preflightImport;
-(void)beginPerformUpdate;
-(void)endPerformUpdate;
-(void)handleSuccess:(int)arg1 ;
-(unsigned)_serverDatabaseRevision:(unsigned)arg1 sessionID:(unsigned)arg2 ;
-(NSString *)powerEventBeginName;
-(void)setPowerEventBeginName:(NSString *)arg1 ;
-(NSString *)powerEventEndName;
-(void)setPowerEventEndName:(NSString *)arg1 ;
-(NSDictionary *)powerEventPayload;
-(void)setPowerEventPayload:(NSDictionary *)arg1 ;
-(char)isInitialImport;
-(void)cancel;
-(id)initWithReason:(long long)arg1 ;
-(void)main;
-(id)connection;
-(float)updateProgress;
-(char)includeHiddenItems;
-(void)setReason:(long long)arg1 ;
-(void)performUpdate;
@end

