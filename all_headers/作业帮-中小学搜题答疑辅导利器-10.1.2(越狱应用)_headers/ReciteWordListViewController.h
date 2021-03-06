//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HomeWorkBaseViewController.h"

@class NSMutableArray, ReciteWordListView, ReciteWordReciteCardModel, ReciteWordsIndexView, UIButton;

@interface ReciteWordListViewController : HomeWorkBaseViewController
{
    _Bool _isPlanRecite;
    HomeWorkBaseViewController *_superVC;
    NSMutableArray *_lastDataSource;
    ReciteWordsIndexView *_indexLabel;
    ReciteWordListView *_contentView;
    UIButton *_nextBtn;
    UIButton *_rememberBtn;
    NSMutableArray *_dataSource;
    long long _index;
    ReciteWordReciteCardModel *_rightWord;
    NSMutableArray *_recordDataSource;
}

@property(retain, nonatomic) NSMutableArray *recordDataSource; // @synthesize recordDataSource=_recordDataSource;
@property(retain, nonatomic) ReciteWordReciteCardModel *rightWord; // @synthesize rightWord=_rightWord;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIButton *rememberBtn; // @synthesize rememberBtn=_rememberBtn;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) ReciteWordListView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) ReciteWordsIndexView *indexLabel; // @synthesize indexLabel=_indexLabel;
@property(retain, nonatomic) NSMutableArray *lastDataSource; // @synthesize lastDataSource=_lastDataSource;
@property(nonatomic) __weak HomeWorkBaseViewController *superVC; // @synthesize superVC=_superVC;
@property(nonatomic) _Bool isPlanRecite; // @synthesize isPlanRecite=_isPlanRecite;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)changeRecitePlan;
- (void)jumpNextVC;
- (void)back;
- (void)addTitle;
- (struct CGPoint)setAnchorPoint:(struct CGPoint)arg1 forView:(id)arg2;
- (void)changeDidReciteBtnStatus:(int)arg1;
- (void)rememberUpdateWordStatus:(id)arg1;
- (void)nextUpdateWordStatus:(id)arg1;
- (void)addView;
- (id)getDistinctArr;
- (void)judgefirstRemeber;
- (void)userRemeberAction;
- (void)addAction;
- (void)getData;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

@end

