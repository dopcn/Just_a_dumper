//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ImDynamicTableDataModel.h"

#import "IDbVersionDataModel-Protocol.h"

@class NSString;

@interface UserMessageTableRelationDataModelV1 : ImDynamicTableDataModel <IDbVersionDataModel>
{
}

- (_Bool)performUpgradeInDb:(id)arg1 error:(id *)arg2;
- (unsigned long long)version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

