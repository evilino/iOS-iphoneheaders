/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:21 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEReferenceEnumerator : NSObject {

	TSCEASTNodeArray* mAST;
	TSCEASTNodeArrayReferenceIteratorState* mReferenceIteratorState;

}
-(id)initWithCalculationEngine:(id)arg1 defaultFormulaOwnerID:(CFUUIDRef)arg2 nodeArray:(const TSCEASTNodeArray*)arg3 myHostCellID:(SCD_Struct_TS272)arg4 doImplicitIntersection:(BOOL)arg5 ;
-(void)dealloc;
-(const SCD_Struct_TS285*)nextReference;
@end

