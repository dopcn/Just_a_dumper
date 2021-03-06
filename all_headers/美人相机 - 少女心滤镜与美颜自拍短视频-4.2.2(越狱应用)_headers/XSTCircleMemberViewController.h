//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XSTViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, UICollectionView, XSTManagerMemberViewModel;

@interface XSTCircleMemberViewController : XSTViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _isCreater;
    XSTManagerMemberViewModel *_managerMemberVM;
    UICollectionView *_collectionView;
}

@property(nonatomic) _Bool isCreater; // @synthesize isCreater=_isCreater;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) XSTManagerMemberViewModel *managerMemberVM; // @synthesize managerMemberVM=_managerMemberVM;
- (void).cxx_destruct;
- (void)communityBackToHome;
- (void)headerButtonTouchUp;
- (void)headerButtonTouchDown;
- (void)bottomRefresh;
- (void)topRefresh;
- (void)setViewModel:(id)arg1 isCreater:(_Bool)arg2;
- (void)turnToMasterHomePage:(id)arg1;
- (void)pressRightButton:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

