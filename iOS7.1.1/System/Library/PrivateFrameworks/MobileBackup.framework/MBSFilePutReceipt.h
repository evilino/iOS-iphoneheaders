/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:21:07 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface MBSFilePutReceipt : PBCodable {

	NSData* _fileID;
	NSString* _putReceipt;

}

@property (nonatomic,readonly) BOOL hasFileID; 
@property (nonatomic,retain) NSData * fileID;                    //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,readonly) BOOL hasPutReceipt; 
@property (nonatomic,retain) NSString * putReceipt;              //@synthesize putReceipt=_putReceipt - In the implementation block
-(void)setFileID:(id)arg1 ;
-(BOOL)hasFileID;
-(id)fileID;
-(void)setPutReceipt:(id)arg1 ;
-(BOOL)hasPutReceipt;
-(id)putReceipt;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
