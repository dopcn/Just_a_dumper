//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YLToolBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImage, UIImageView, UITableView;
@protocol CardCategoryNewViewDelegate;

@interface CardCategoryNewViewController : YLToolBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _userChangeSelectedCard;
    _Bool _isShowEveroneWatching;
    UITableView *_tableView;
    UIImageView *_bgImgView;
    UIImage *_bgImg;
    NSMutableArray *_showCards;
    NSMutableArray *_hiddenCards;
    id <CardCategoryNewViewDelegate> _delegate;
}

@property(nonatomic) _Bool isShowEveroneWatching; // @synthesize isShowEveroneWatching=_isShowEveroneWatching;
@property(nonatomic) _Bool userChangeSelectedCard; // @synthesize userChangeSelectedCard=_userChangeSelectedCard;
@property(nonatomic) __weak id <CardCategoryNewViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *hiddenCards; // @synthesize hiddenCards=_hiddenCards;
@property(retain, nonatomic) NSMutableArray *showCards; // @synthesize showCards=_showCards;
@property(retain, nonatomic) UIImage *bgImg; // @synthesize bgImg=_bgImg;
@property(nonatomic) __weak UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)doneButtonsClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

