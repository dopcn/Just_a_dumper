//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNNewsListIndexItemsApiData.h"

#import "QNNewsListIndexDataProtocol-Protocol.h"

@class NSString, QNNewsListIndexMetadata;

@interface QNNewsListIndexItemsApiData (Extended) <QNNewsListIndexDataProtocol>
+ (id)mappedIndexItemsFromArray:(id)arg1;
- (void)mergeIndexDataIntoNewsItems:(id)arg1;
- (id)allListItemIDS;
@property(readonly, copy, nonatomic) NSString *channelID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) QNNewsListIndexMetadata *metadata;
@property(readonly) Class superclass;
@end

