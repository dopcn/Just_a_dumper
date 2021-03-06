//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol KTVSearchHistoryProviderDelegate;

@interface KTVSearchHistoryProvider : NSObject <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _loading;
    id <KTVSearchHistoryProviderDelegate> _delegate;
    NSMutableArray *_tokens;
}

@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) NSMutableArray *tokens; // @synthesize tokens=_tokens;
@property(nonatomic) __weak id <KTVSearchHistoryProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadHotResultSuccess:(CDUnknownBlockType)arg1;
- (_Bool)isHighlightAtIndexPath:(id)arg1;
- (id)contentAtIndexPath:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)searchHot;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

