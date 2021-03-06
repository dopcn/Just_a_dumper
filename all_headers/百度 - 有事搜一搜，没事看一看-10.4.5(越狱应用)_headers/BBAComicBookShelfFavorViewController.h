//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BBAComicSetFrameViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class BBABubbleGuideView, BBAComicBookShelfCompileBottomView, BBAComicBookShelfCompileTopView, BBAComicBookShelfEmptyView, BBAComicBookShelfFavorHistorySwitchView, NSArray, NSMutableArray, NSString, UICollectionView;

@interface BBAComicBookShelfFavorViewController : BBAComicSetFrameViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate>
{
    _Bool _isCompileStatus;
    _Bool _isShowChosedButton;
    _Bool _isShowUpdateFlagImageView;
    _Bool _hasShownAddShortcutBubbleGuide;
    CDUnknownBlockType _blockEnterCompileStatus;
    CDUnknownBlockType _blockExitCompileStatus;
    CDUnknownBlockType _blockGodHelpMeButton;
    CDUnknownBlockType _switchBarBlock;
    NSString *_source;
    NSArray *_comicBookArray;
    UICollectionView *_collectionView;
    BBAComicBookShelfFavorHistorySwitchView *_switchView;
    BBAComicBookShelfCompileTopView *_topView;
    BBAComicBookShelfCompileBottomView *_bottomView;
    BBAComicBookShelfEmptyView *_emptyView;
    NSMutableArray *_selectedToDeleteArray;
    BBABubbleGuideView *_bubbleGuideView;
    struct CGRect _originContentFrame;
    struct UIEdgeInsets _originEdgeInsets;
}

@property(retain, nonatomic) BBABubbleGuideView *bubbleGuideView; // @synthesize bubbleGuideView=_bubbleGuideView;
@property(nonatomic) _Bool hasShownAddShortcutBubbleGuide; // @synthesize hasShownAddShortcutBubbleGuide=_hasShownAddShortcutBubbleGuide;
@property(retain, nonatomic) NSMutableArray *selectedToDeleteArray; // @synthesize selectedToDeleteArray=_selectedToDeleteArray;
@property(nonatomic) struct UIEdgeInsets originEdgeInsets; // @synthesize originEdgeInsets=_originEdgeInsets;
@property(nonatomic) struct CGRect originContentFrame; // @synthesize originContentFrame=_originContentFrame;
@property(retain, nonatomic) BBAComicBookShelfEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) BBAComicBookShelfCompileBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) BBAComicBookShelfCompileTopView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) BBAComicBookShelfFavorHistorySwitchView *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool isShowUpdateFlagImageView; // @synthesize isShowUpdateFlagImageView=_isShowUpdateFlagImageView;
@property(nonatomic) _Bool isShowChosedButton; // @synthesize isShowChosedButton=_isShowChosedButton;
@property(copy, nonatomic) NSArray *comicBookArray; // @synthesize comicBookArray=_comicBookArray;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) _Bool isCompileStatus; // @synthesize isCompileStatus=_isCompileStatus;
@property(copy, nonatomic) CDUnknownBlockType switchBarBlock; // @synthesize switchBarBlock=_switchBarBlock;
@property(copy, nonatomic) CDUnknownBlockType blockGodHelpMeButton; // @synthesize blockGodHelpMeButton=_blockGodHelpMeButton;
@property(copy, nonatomic) CDUnknownBlockType blockExitCompileStatus; // @synthesize blockExitCompileStatus=_blockExitCompileStatus;
@property(copy, nonatomic) CDUnknownBlockType blockEnterCompileStatus; // @synthesize blockEnterCompileStatus=_blockEnterCompileStatus;
- (void).cxx_destruct;
- (void)showShortcutBublleGuide;
- (void)hideBubble;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setSwitcherLeft;
- (void)bindComicBookArray:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)reloadCell:(id)arg1;
- (void)exitCompileViewAnimation;
- (void)exitCompileViewStyle;
- (void)enterCompileViewAnimation;
- (void)showCompileView;
- (id)setupLayout;
- (void)setEmptyView;
- (void)updateComicBookArray;
- (void)handleLongPressGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)addLongPressGesture:(id)arg1;
- (void)setupSwitchView;
- (void)setupCollectionView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

