/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVContainer.h>
#import <BookmarkDAV/CoreDAVModifiedContainer.h>
#import <BookmarkDAV/CoreDAVAddedContainer.h>
#import <BookmarkDAV/CoreDAVLeafDataPayload.h>

@class NSDictionary, NSMutableArray, NSString, CoreDAVErrorItem, NSArray, NSURL, NSData;

@interface BookmarkDAVFolder : CoreDAVContainer <CoreDAVModifiedContainer, CoreDAVAddedContainer, CoreDAVLeafDataPayload> {

	NSDictionary* _appleAttributes;
	NSMutableArray* _childrenOrder;
	NSString* _bulkParsedCTag;
	NSString* _bulkParsedPTag;
	CoreDAVErrorItem* _bulkUploadErrorItem;

}

@property (assign,nonatomic) BOOL isBookmarkFolder; 
@property (assign,nonatomic) BOOL isBookmarkBarFolder; 
@property (assign,nonatomic) BOOL isBookmarkMenuFolder; 
@property (nonatomic,readonly) NSDictionary * appleAttributes;                    //@synthesize appleAttributes=_appleAttributes - In the implementation block
@property (nonatomic,retain) NSString * bulkParsedCTag;                           //@synthesize bulkParsedCTag=_bulkParsedCTag - In the implementation block
@property (nonatomic,retain) NSString * bulkParsedPTag;                           //@synthesize bulkParsedPTag=_bulkParsedPTag - In the implementation block
@property (nonatomic,readonly) NSArray * childrenOrder;                           //@synthesize childrenOrder=_childrenOrder - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * bulkUploadErrorItem;              //@synthesize bulkUploadErrorItem=_bulkUploadErrorItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSURL * serverID; 
@property (nonatomic,readonly) NSData * dataPayload; 
@property (nonatomic,readonly) NSString * syncKey; 
+(id)copyPropertyMappingsForParser;
-(void)dealloc;
-(NSDictionary *)appleAttributes;
-(CoreDAVErrorItem *)bulkUploadErrorItem;
-(void)setBulkUploadErrorItem:(CoreDAVErrorItem *)arg1 ;
-(id)initWithServerID:(id)arg1 containerName:(id)arg2 appleAttributes:(id)arg3 ;
-(void)setBulkParsedCTag:(NSString *)arg1 ;
-(void)setBulkParsedPTag:(NSString *)arg1 ;
-(void)_faultResourceType;
-(id)_appleAttributesString;
-(BOOL)isBookmarkFolder;
-(BOOL)isBookmarkBarFolder;
-(BOOL)isBookmarkMenuFolder;
-(void)setIsBookmarkFolder:(BOOL)arg1 ;
-(void)setIsBookmarkBarFolder:(BOOL)arg1 ;
-(void)setIsBookmarkMenuFolder:(BOOL)arg1 ;
-(NSString *)bulkParsedCTag;
-(NSString *)bulkParsedPTag;
-(void)applyParsedProperties:(id)arg1 ;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(NSData *)dataPayload;
-(NSArray *)childrenOrder;
-(id)copyMkcolTask;
-(id)copyPropPatchTask;
-(void)setServerID:(NSURL *)arg1 ;
-(NSURL *)serverID;
-(NSString *)syncKey;
@end
