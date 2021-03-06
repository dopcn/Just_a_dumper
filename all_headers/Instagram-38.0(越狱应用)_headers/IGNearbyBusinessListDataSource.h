//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListAdapterDataSource-Protocol.h"

@class NSArray, NSString;
@protocol IGNearbyBusinessListViewCollectionViewCellDelegate;

@interface IGNearbyBusinessListDataSource : NSObject <IGListAdapterDataSource>
{
    NSArray *_businesses;
    NSString *_module;
    id <IGNearbyBusinessListViewCollectionViewCellDelegate> _cardDelegate;
}

@property(nonatomic) __weak id <IGNearbyBusinessListViewCollectionViewCellDelegate> cardDelegate; // @synthesize cardDelegate=_cardDelegate;
- (void).cxx_destruct;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (id)initWithNearbyBusinsses:(id)arg1 cardDelegate:(id)arg2 module:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

