/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:55:54 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BWFormatRequirements, BWFormat, BWNode, BWNodeConnection, BWVideoFormat;

@interface BWNodeInput : NSObject {

	char _mediaTypeIsVideo;
	BWFormatRequirements* _formatRequirements;
	BWFormat* _format;
	long long _configurationID;
	unsigned long _mediaType;
	char _enabled;
	unsigned _index;
	BWNode* _node;
	BWNodeConnection* _connection;
	int _passthroughMode;
	int _retainedBufferCount;
	int _delayedBufferCount;
	int _indefinitelyHeldBufferCount;
	BWVideoFormat* _liveFormat;
	long long _liveConfigurationID;
	unsigned _numberOfBuffersReceived;
	unsigned _numberOfBuffersDropped;

}

@property (nonatomic,readonly) unsigned long mediaType;                            //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) unsigned index;                                     //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) BWNode * node;                                      //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) BWNodeConnection * connection;                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) BWFormatRequirements * formatRequirements; 
@property (nonatomic,copy) BWFormat * format; 
@property (nonatomic,readonly) BWVideoFormat * videoFormat; 
@property (assign,nonatomic) long long configurationID;                            //@synthesize configurationID=_configurationID - In the implementation block
@property (assign,nonatomic) int passthroughMode;                                  //@synthesize passthroughMode=_passthroughMode - In the implementation block
@property (assign,nonatomic) char passesBuffersDownstream; 
@property (assign,nonatomic) int retainedBufferCount;                              //@synthesize retainedBufferCount=_retainedBufferCount - In the implementation block
@property (assign,nonatomic) int delayedBufferCount;                               //@synthesize delayedBufferCount=_delayedBufferCount - In the implementation block
@property (assign,nonatomic) int indefinitelyHeldBufferCount;                      //@synthesize indefinitelyHeldBufferCount=_indefinitelyHeldBufferCount - In the implementation block
@property (nonatomic,retain) BWFormat * liveFormat;                                //@synthesize liveFormat=_liveFormat - In the implementation block
@property (nonatomic,readonly) long long liveConfigurationID;                      //@synthesize liveConfigurationID=_liveConfigurationID - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersReceived;                   //@synthesize numberOfBuffersReceived=_numberOfBuffersReceived - In the implementation block
@property (nonatomic,readonly) unsigned numberOfBuffersDropped;                    //@synthesize numberOfBuffersDropped=_numberOfBuffersDropped - In the implementation block
+(void)initialize;
-(long long)configurationID;
-(void)setRetainedBufferCount:(int)arg1 ;
-(void)setConfigurationID:(long long)arg1 ;
-(void)handleMessage:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(unsigned)index;
-(BWNode *)node;
-(BWNodeConnection *)connection;
-(void)setConnection:(BWNodeConnection *)arg1 ;
-(id)initWithMediaType:(unsigned long)arg1 node:(id)arg2 index:(unsigned)arg3 ;
-(id)initWithMediaType:(unsigned long)arg1 node:(id)arg2 ;
-(void)setFormatRequirements:(BWFormatRequirements *)arg1 ;
-(BWVideoFormat *)videoFormat;
-(void)_handleConfigurationLiveMessage:(id)arg1 ;
-(void)setLiveFormat:(BWFormat *)arg1 ;
-(BWFormatRequirements *)formatRequirements;
-(void)setPassesBuffersDownstream:(char)arg1 ;
-(char)passesBuffersDownstream;
-(int)passthroughMode;
-(void)setPassthroughMode:(int)arg1 ;
-(int)retainedBufferCount;
-(int)delayedBufferCount;
-(void)setDelayedBufferCount:(int)arg1 ;
-(int)indefinitelyHeldBufferCount;
-(void)setIndefinitelyHeldBufferCount:(int)arg1 ;
-(BWFormat *)liveFormat;
-(long long)liveConfigurationID;
-(unsigned)numberOfBuffersReceived;
-(unsigned)numberOfBuffersDropped;
-(BWFormat *)format;
-(void)setFormat:(BWFormat *)arg1 ;
-(unsigned long)mediaType;
@end
