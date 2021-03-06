/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:32 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <CallHistory/CHSynchronizedLoggable.h>
#import <CallHistory/NSSecureCoding.h>
#import <CallHistory/NSCopying.h>

@protocol CHPhoneBookManagerProtocol;
@class NSString, NSDate, NSNumber, NSMutableArray;

@interface CHRecentCall : CHSynchronizedLoggable <NSSecureCoding, NSCopying> {

	char _read;
	char _callerIdIsBlocked;
	char _multiCall;
	char _callerIdIsFormatted;
	char _answered;
	char _mobileOriginated;
	unsigned _callerIdAvailability;
	NSString* _callerNetworkName;
	NSString* _uniqueId;
	NSString* _devicePhoneId;
	NSString* _callerId;
	unsigned _callType;
	unsigned _callStatus;
	NSDate* _date;
	NSNumber* _bytesOfDataUsed;
	NSString* _isoCountryCode;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSNumber* _disconnectedCause;
	NSString* _callerNetworkFirstName;
	NSString* _callerNetworkSecondName;
	NSString* _callerIdLabel;
	NSString* _callerIdLocation;
	unsigned _unreadCount;
	NSMutableArray* _callOccurrences;
	NSString* _addressBookRecordId;
	NSString* _addressBookCallerIDMultiValueId;
	NSString* _callerName;
	id<CHPhoneBookManagerProtocol> _phoneBookManager;
	double _duration;

}

@property (copy) NSString * uniqueId;                                               //@synthesize uniqueId=_uniqueId - In the implementation block
@property (copy) NSString * devicePhoneId;                                          //@synthesize devicePhoneId=_devicePhoneId - In the implementation block
@property (copy) NSString * callerId;                                               //@synthesize callerId=_callerId - In the implementation block
@property (nonatomic,copy) NSString * callerNetworkName;                            //@synthesize callerNetworkName=_callerNetworkName - In the implementation block
@property (assign) unsigned callType;                                               //@synthesize callType=_callType - In the implementation block
@property (assign) unsigned callStatus;                                             //@synthesize callStatus=_callStatus - In the implementation block
@property (copy) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
@property (assign) double duration;                                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSNumber * bytesOfDataUsed;                              //@synthesize bytesOfDataUsed=_bytesOfDataUsed - In the implementation block
@property (assign,nonatomic) char read;                                             //@synthesize read=_read - In the implementation block
@property (copy) NSString * isoCountryCode;                                         //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (copy) NSString * mobileCountryCode;                                      //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (copy) NSString * mobileNetworkCode;                                      //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (nonatomic,copy) NSNumber * disconnectedCause;                            //@synthesize disconnectedCause=_disconnectedCause - In the implementation block
@property (assign,nonatomic) unsigned callerIdAvailability;                         //@synthesize callerIdAvailability=_callerIdAvailability - In the implementation block
@property (assign) char callerIdIsBlocked;                                          //@synthesize callerIdIsBlocked=_callerIdIsBlocked - In the implementation block
@property (copy) NSString * callerNetworkFirstName;                                 //@synthesize callerNetworkFirstName=_callerNetworkFirstName - In the implementation block
@property (copy) NSString * callerNetworkSecondName;                                //@synthesize callerNetworkSecondName=_callerNetworkSecondName - In the implementation block
@property (nonatomic,copy) NSString * callerIdLabel;                                //@synthesize callerIdLabel=_callerIdLabel - In the implementation block
@property (nonatomic,copy) NSString * callerIdLocation;                             //@synthesize callerIdLocation=_callerIdLocation - In the implementation block
@property (assign) unsigned unreadCount;                                            //@synthesize unreadCount=_unreadCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * callOccurrences;                      //@synthesize callOccurrences=_callOccurrences - In the implementation block
@property (nonatomic,copy) NSString * addressBookRecordId;                          //@synthesize addressBookRecordId=_addressBookRecordId - In the implementation block
@property (nonatomic,copy) NSString * addressBookCallerIDMultiValueId;              //@synthesize addressBookCallerIDMultiValueId=_addressBookCallerIDMultiValueId - In the implementation block
@property (nonatomic,copy) NSString * callerName;                                   //@synthesize callerName=_callerName - In the implementation block
@property (assign) char multiCall;                                                  //@synthesize multiCall=_multiCall - In the implementation block
@property (assign) char callerIdIsFormatted;                                        //@synthesize callerIdIsFormatted=_callerIdIsFormatted - In the implementation block
@property (retain) id<CHPhoneBookManagerProtocol> phoneBookManager;                 //@synthesize phoneBookManager=_phoneBookManager - In the implementation block
@property (assign) char answered;                                                   //@synthesize answered=_answered - In the implementation block
@property (assign) char mobileOriginated;                                           //@synthesize mobileOriginated=_mobileOriginated - In the implementation block
+(char)supportsSecureCoding;
+(id)callTypeAsString:(unsigned)arg1 ;
+(id)callStatusAsString:(unsigned)arg1 ;
-(NSString *)mobileNetworkCode;
-(NSString *)mobileCountryCode;
-(NSString *)isoCountryCode;
-(void)setMobileCountryCode:(NSString *)arg1 ;
-(void)setMobileNetworkCode:(NSString *)arg1 ;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)uniqueId;
-(NSString *)addressBookRecordId;
-(char)coalesceWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(id)coalescingHash;
-(unsigned)numberOfOccurrences;
-(NSMutableArray *)callOccurrences;
-(void)setUniqueId:(NSString *)arg1 ;
-(void)setBytesOfDataUsed:(NSNumber *)arg1 ;
-(void)setCallOccurrences:(NSMutableArray *)arg1 ;
-(void)setMultiCall:(char)arg1 ;
-(char)multiCall;
-(void)setAnswered:(char)arg1 ;
-(NSNumber *)disconnectedCause;
-(NSNumber *)bytesOfDataUsed;
-(NSString *)callerNetworkName;
-(unsigned)callerIdAvailability;
-(NSString *)devicePhoneId;
-(char)answered;
-(void)setDisconnectedCause:(NSNumber *)arg1 ;
-(void)setCallerNetworkName:(NSString *)arg1 ;
-(void)setCallerIdAvailability:(unsigned)arg1 ;
-(void)setDevicePhoneId:(NSString *)arg1 ;
-(void)setPhoneBookManager:(id<CHPhoneBookManagerProtocol>)arg1 ;
-(char)callerIdIsBlocked;
-(void)setCallerIdIsBlocked:(char)arg1 ;
-(NSString *)callerNetworkFirstName;
-(void)setCallerNetworkFirstName:(NSString *)arg1 ;
-(NSString *)callerNetworkSecondName;
-(void)setCallerNetworkSecondName:(NSString *)arg1 ;
-(id)callerIdLabelSync;
-(void)setCallerIdLabel:(NSString *)arg1 ;
-(id)callerIdLocationSync;
-(void)setCallerIdLocation:(NSString *)arg1 ;
-(id)callOccurrencesSync;
-(id)addressBookRecordIdSync;
-(void)setAddressBookRecordId:(NSString *)arg1 ;
-(id)addressBookCallerIDMultiValueIdSync;
-(void)setAddressBookCallerIDMultiValueId:(NSString *)arg1 ;
-(id)callerNameSync;
-(void)setCallerName:(NSString *)arg1 ;
-(id<CHPhoneBookManagerProtocol>)phoneBookManager;
-(char)isAddressBookContactASuggestionSync;
-(char)isAddressBookContactASuggestion;
-(char)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1 ;
-(char)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1 ;
-(char)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(void)addOccurrencesFromArraySync:(id)arg1 ;
-(unsigned)numberOfOccurrencesSync;
-(void)createOccurrenceArraySync;
-(char)callerIdIsEmailAddressSync;
-(void)fetchAndSetAddressBookIdsSync;
-(id)callerIdForDisplaySync;
-(id)getLocalizedStringSync:(id)arg1 ;
-(id)callerNameForDisplaySync;
-(char)callerIdIsFormatted;
-(void)setCallerIdIsFormatted:(char)arg1 ;
-(id)callOccurrencesAsStringSync;
-(char)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(NSString *)addressBookCallerIDMultiValueId;
-(char)callerIdIsEmailAddress;
-(NSString *)callerName;
-(id)callerNameForDisplay;
-(id)callerIdForDisplay;
-(NSString *)callerIdLabel;
-(NSString *)callerIdLocation;
-(id)callerIdSubStringForDisplay;
-(char)representsCallAtDate:(id)arg1 ;
-(char)mobileOriginated;
-(void)setMobileOriginated:(char)arg1 ;
-(void)setCallerId:(NSString *)arg1 ;
-(unsigned)unreadCount;
-(void)setUnreadCount:(unsigned)arg1 ;
-(void)setRead:(char)arg1 ;
-(char)read;
-(void)addressBookChanged;
-(unsigned)callStatus;
-(void)setCallStatus:(unsigned)arg1 ;
-(NSString *)callerId;
-(void)setCallType:(unsigned)arg1 ;
-(unsigned)callType;
@end

