/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:31 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKMailboxItem.h>
#import <NanoMailKitServer/NSSecureCoding.h>

@class NSString, NSDate, NSArray;

@interface NNMKMessage : NSObject <NNMKMailboxItem, NSSecureCoding> {

	NSString* _subject;
	NSDate* _dateReceived;
	NSString* _preview;
	unsigned _status;
	NSString* _messageId;
	NSString* _accountId;
	NSString* _conversationId;
	NSString* _from;
	NSArray* _to;
	NSArray* _cc;
	NSDate* _dateSent;
	NSString* _messageIdHeader;

}

@property (nonatomic,retain) NSString * messageId;                    //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,retain) NSString * accountId;                    //@synthesize accountId=_accountId - In the implementation block
@property (nonatomic,retain) NSString * conversationId;               //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,retain) NSString * from;                         //@synthesize from=_from - In the implementation block
@property (nonatomic,retain) NSArray * to;                            //@synthesize to=_to - In the implementation block
@property (nonatomic,retain) NSArray * cc;                            //@synthesize cc=_cc - In the implementation block
@property (nonatomic,retain) NSDate * dateSent;                       //@synthesize dateSent=_dateSent - In the implementation block
@property (nonatomic,retain) NSDate * dateReceived;                   //@synthesize dateReceived=_dateReceived - In the implementation block
@property (nonatomic,retain) NSString * messageIdHeader;              //@synthesize messageIdHeader=_messageIdHeader - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * subject;                      //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * preview;                      //@synthesize preview=_preview - In the implementation block
@property (assign,nonatomic) unsigned status;                         //@synthesize status=_status - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(void)addState:(unsigned)arg1 ;
-(void)removeState:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setSubject:(NSString *)arg1 ;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(NSString *)subject;
-(void)setDateSent:(NSDate *)arg1 ;
-(NSString *)from;
-(void)setFrom:(NSString *)arg1 ;
-(void)setConversationId:(NSString *)arg1 ;
-(void)setDateReceived:(NSDate *)arg1 ;
-(void)setTo:(NSArray *)arg1 ;
-(NSArray *)to;
-(NSDate *)dateSent;
-(NSDate *)dateReceived;
-(NSArray *)cc;
-(void)setCc:(NSArray *)arg1 ;
-(NSString *)conversationId;
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)accountId;
-(NSString *)preview;
-(void)setMessageIdHeader:(NSString *)arg1 ;
-(NSString *)messageIdHeader;
-(char)checkState:(unsigned)arg1 ;
-(void)setPreview:(NSString *)arg1 ;
@end
