//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BasePageItemCell.h"

@class NSDictionary, NSMutableArray, NSString, UIButton, UILabel, UIView;

@interface WPPageItemCell211107 : BasePageItemCell
{
    UIView *_topSeparateView;
    UIView *_bottomSeparateView;
    UIView *_topBarView;
    UIView *_bottomBarView;
    UILabel *_titleLabel;
    UIButton *_closeBtn;
    double _totalHeight;
    UIButton *_hotNovelBtn;
    UIButton *_historyNovelBtn;
    CDUnknownBlockType _closeNovelBlock;
    CDUnknownBlockType _hotNovelBlock;
    CDUnknownBlockType _historyNovelBlock;
    NSMutableArray *_novelViewArray;
    NSMutableArray *_linkArray;
    NSString *_bannerUrlString;
    NSDictionary *_redirectLinkDict;
}

@property(retain, nonatomic) NSDictionary *redirectLinkDict; // @synthesize redirectLinkDict=_redirectLinkDict;
@property(retain, nonatomic) NSString *bannerUrlString; // @synthesize bannerUrlString=_bannerUrlString;
@property(retain, nonatomic) NSMutableArray *linkArray; // @synthesize linkArray=_linkArray;
@property(retain, nonatomic) NSMutableArray *novelViewArray; // @synthesize novelViewArray=_novelViewArray;
@property(copy, nonatomic) CDUnknownBlockType historyNovelBlock; // @synthesize historyNovelBlock=_historyNovelBlock;
@property(copy, nonatomic) CDUnknownBlockType hotNovelBlock; // @synthesize hotNovelBlock=_hotNovelBlock;
@property(copy, nonatomic) CDUnknownBlockType closeNovelBlock; // @synthesize closeNovelBlock=_closeNovelBlock;
@property(retain, nonatomic) UIButton *historyNovelBtn; // @synthesize historyNovelBtn=_historyNovelBtn;
@property(retain, nonatomic) UIButton *hotNovelBtn; // @synthesize hotNovelBtn=_hotNovelBtn;
@property(nonatomic) double totalHeight; // @synthesize totalHeight=_totalHeight;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(retain, nonatomic) UIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) UIView *bottomSeparateView; // @synthesize bottomSeparateView=_bottomSeparateView;
@property(retain, nonatomic) UIView *topSeparateView; // @synthesize topSeparateView=_topSeparateView;
- (void).cxx_destruct;
- (void)cancelRequest;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareHeightByDict:(id)arg1 indexPath:(id)arg2;
- (void)tapNovel:(id)arg1;
- (void)setUpNovelViewData:(id)arg1 WithDataDict:(id)arg2;
- (void)updateViewByData:(id)arg1 indexPath:(id)arg2 actionDelegate:(id)arg3;
- (void)layoutNovelViews;
- (void)historyNovelBtnClicked;
- (void)hotNovelBtnClicked;
- (void)setupView;

@end

