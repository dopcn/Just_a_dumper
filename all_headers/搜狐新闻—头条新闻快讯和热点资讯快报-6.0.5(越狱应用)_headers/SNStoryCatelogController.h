//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNStoryBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SNStoryBottomToolbar, SNStoryWaitingActivityView, StoryBookList, UIImageView, UILabel, UITableView, UIView;
@protocol SNStoryCatelogDelegate;

@interface SNStoryCatelogController : SNStoryBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isReload;
    int _catelogType;
    int _catelogBtnType;
    NSString *_novelId;
    id <SNStoryCatelogDelegate> _delegate;
    UIImageView *_naviBarImageView;
    UIView *_catelogLineView;
    UILabel *_titleLabel;
    UILabel *_chapterCountLabel;
    UITableView *_catelogTableView;
    SNStoryWaitingActivityView *_waitingActivityView;
    NSMutableArray *_chapterArry;
    NSMutableArray *_bookMarkArry;
    NSMutableArray *_bookNoteArry;
    SNStoryBottomToolbar *_bottomBar;
    StoryBookList *_book;
    NSString *_recordPid;
}

@property(retain, nonatomic) NSString *recordPid; // @synthesize recordPid=_recordPid;
@property(nonatomic) _Bool isReload; // @synthesize isReload=_isReload;
@property(retain, nonatomic) StoryBookList *book; // @synthesize book=_book;
@property(nonatomic) int catelogBtnType; // @synthesize catelogBtnType=_catelogBtnType;
@property(retain, nonatomic) SNStoryBottomToolbar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) NSMutableArray *bookNoteArry; // @synthesize bookNoteArry=_bookNoteArry;
@property(retain, nonatomic) NSMutableArray *bookMarkArry; // @synthesize bookMarkArry=_bookMarkArry;
@property(retain, nonatomic) NSMutableArray *chapterArry; // @synthesize chapterArry=_chapterArry;
@property(retain, nonatomic) SNStoryWaitingActivityView *waitingActivityView; // @synthesize waitingActivityView=_waitingActivityView;
@property(retain, nonatomic) UITableView *catelogTableView; // @synthesize catelogTableView=_catelogTableView;
@property(retain, nonatomic) UILabel *chapterCountLabel; // @synthesize chapterCountLabel=_chapterCountLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *catelogLineView; // @synthesize catelogLineView=_catelogLineView;
@property(retain, nonatomic) UIImageView *naviBarImageView; // @synthesize naviBarImageView=_naviBarImageView;
@property(nonatomic) __weak id <SNStoryCatelogDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *novelId; // @synthesize novelId=_novelId;
@property(nonatomic) int catelogType; // @synthesize catelogType=_catelogType;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)subChildViewControllerForStatusBarStyle;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)btnCatalog:(id)arg1;
- (void)addBottomBar;
- (void)initNavigationBar;
- (void)updateTheme;
- (void)addHeaderView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)chapterHasReadWithNovelId:(id)arg1 book:(id)arg2;
- (void)bookDetailWithArray:(id)arg1;
- (void)chapterListDealWithBook:(id)arg1;
- (void)novelDetail;
- (_Bool)needPanGesture;
- (void)statusBarFrameWillChange:(id)arg1;
- (void)statusBarChange;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

