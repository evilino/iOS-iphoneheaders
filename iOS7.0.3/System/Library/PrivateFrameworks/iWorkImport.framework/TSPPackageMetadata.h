/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@interface TSPPackageMetadata : TSPObject {

	PackageMetadata* _message;

}
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(long long)tsp_identifier;
-(PackageMetadata*)message;
-(id).cxx_construct;
-(void).cxx_destruct;
@end
