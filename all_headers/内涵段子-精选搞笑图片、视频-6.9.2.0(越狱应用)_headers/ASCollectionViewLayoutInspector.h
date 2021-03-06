//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ASCollectionViewLayoutInspecting-Protocol.h"

@class NSString;

@interface ASCollectionViewLayoutInspector : NSObject <ASCollectionViewLayoutInspecting>
{
    struct {
        unsigned int implementsConstrainedSizeForNodeAtIndexPathDeprecated:1;
        unsigned int implementsConstrainedSizeForNodeAtIndexPath:1;
    } _delegateFlags;
}

- (long long)scrollableDirections;
- (CDStruct_42a63532)collectionView:(id)arg1 constrainedSizeForNodeAtIndexPath:(id)arg2;
- (void)didChangeCollectionViewDelegate:(id)arg1;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

