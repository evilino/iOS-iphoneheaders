/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData, NSError;

@interface ATMessageParser : NSObject {

	NSMutableData* _parserData;
	unsigned long long _curObjectLength;
	void* _objectDataBuffer;
	unsigned long long _objectDataLen;
	char _varIntBuf[10];
	unsigned long long _varIntDataLen;
	NSError* _parserError;
	Class _messageClass;
	/*^block*/id _objectParsedBlock;

}

@property (nonatomic,readonly) NSError * parserError;              //@synthesize parserError=_parserError - In the implementation block
@property (nonatomic,readonly) Class messageClass;                 //@synthesize messageClass=_messageClass - In the implementation block
@property (nonatomic,copy) id objectParsedBlock;                   //@synthesize objectParsedBlock=_objectParsedBlock - In the implementation block
-(void)dealloc;
-(BOOL)_parseObjectFromData:(id)arg1 ;
-(id)initWithMessageClass:(Class)arg1 ;
-(BOOL)_parseObjectLength:(const char*)arg1 length:(unsigned long long)arg2 bytesConsumed:(unsigned long long*)arg3 ;
-(BOOL)processData:(const char*)arg1 length:(long long)arg2 ;
-(void)setObjectParsedBlock:(id)arg1 ;
-(id)objectParsedBlock;
-(NSError *)parserError;
-(Class)messageClass;
@end
