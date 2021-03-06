//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ShareServiceDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class CFEventModel, NSMutableArray, NSString, ShareService, UILabel, UIViewController;

@interface CFActivitySuccessView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, ShareServiceDelegate>
{
    NSString *_successPrompt;
    UIViewController *_parentViewController;
    CFEventModel *_eventModel;
    NSMutableArray *_dataArray;
    UILabel *_successLabel;
    ShareService *_shareService;
    long long _sharePositionType;
}

@property(nonatomic) long long sharePositionType; // @synthesize sharePositionType=_sharePositionType;
@property(retain, nonatomic) ShareService *shareService; // @synthesize shareService=_shareService;
@property(nonatomic) __weak UILabel *successLabel; // @synthesize successLabel=_successLabel;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) CFEventModel *eventModel; // @synthesize eventModel=_eventModel;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(copy, nonatomic) NSString *successPrompt; // @synthesize successPrompt=_successPrompt;
- (void).cxx_destruct;
- (long long)getSharePlatform:(id)arg1;
- (void)updateSuccessPrompt:(id)arg1;
- (void)shareSuccess:(id)arg1;
- (void)shareFailed:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)pushToCarFriendShare;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

