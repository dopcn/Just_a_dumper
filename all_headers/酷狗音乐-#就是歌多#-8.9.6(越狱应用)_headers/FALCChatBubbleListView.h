//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FAView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class FALCChatBubbleListLayout, NSArray, NSString, UICollectionView, UIView;
@protocol FALCChatBubbleListViewDelegate;

@interface FALCChatBubbleListView : FAView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    id <FALCChatBubbleListViewDelegate> _delegate;
    long long _starId;
    UICollectionView *_collectionView;
    UIView *_topLine;
    FALCChatBubbleListLayout *_layout;
    NSArray *_listData;
}

@property(retain, nonatomic) NSArray *listData; // @synthesize listData=_listData;
@property(retain, nonatomic) FALCChatBubbleListLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long starId; // @synthesize starId=_starId;
@property(nonatomic) __weak id <FALCChatBubbleListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissErrorView;
- (void)showErrorViewWithMsg:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadChatBubbleList:(id)arg1;
- (void)handleHeadRefresh;
- (void)finishRefresh;
- (void)startRefresh;
- (void)configSubView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

