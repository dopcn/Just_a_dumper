//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FirstPageCompontBaseObject.h"

#import "FPFirstPageCompontProtocol-Protocol.h"

@class ModelMainViewItem, NSArray, NSString, UIButton, UIImageView, UILabel, UIView;

@interface InvestmentReferController : FirstPageCompontBaseObject <FPFirstPageCompontProtocol>
{
    _Bool _isLoadingData;
    UIView *_view;
    UIImageView *_icon;
    ModelMainViewItem *_item;
    UILabel *_topTitleLabel;
    UIButton *_firstSubHeadTitleButton;
    UIButton *_firstMainTitleButton;
    UIButton *_secondTitleButton;
    UIButton *_thirdTitleButton;
    UIButton *_fourthTitleButton;
    NSArray *_investmentInfo;
    UIButton *_topTitleButton;
    UILabel *_moreLabel;
    UIImageView *_rightArrow;
    double _lastRequestime;
    UILabel *_firstMainTitleLabel;
    UILabel *_subHeadTitleLabel;
}

@property(retain, nonatomic) UILabel *subHeadTitleLabel; // @synthesize subHeadTitleLabel=_subHeadTitleLabel;
@property(retain, nonatomic) UILabel *firstMainTitleLabel; // @synthesize firstMainTitleLabel=_firstMainTitleLabel;
@property(nonatomic) double lastRequestime; // @synthesize lastRequestime=_lastRequestime;
@property(nonatomic) __weak UIImageView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(nonatomic) __weak UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(nonatomic) __weak UIButton *topTitleButton; // @synthesize topTitleButton=_topTitleButton;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(retain, nonatomic) NSArray *investmentInfo; // @synthesize investmentInfo=_investmentInfo;
@property(nonatomic) __weak UIButton *fourthTitleButton; // @synthesize fourthTitleButton=_fourthTitleButton;
@property(nonatomic) __weak UIButton *thirdTitleButton; // @synthesize thirdTitleButton=_thirdTitleButton;
@property(nonatomic) __weak UIButton *secondTitleButton; // @synthesize secondTitleButton=_secondTitleButton;
@property(nonatomic) __weak UIButton *firstMainTitleButton; // @synthesize firstMainTitleButton=_firstMainTitleButton;
@property(nonatomic) __weak UIButton *firstSubHeadTitleButton; // @synthesize firstSubHeadTitleButton=_firstSubHeadTitleButton;
@property(nonatomic) __weak UILabel *topTitleLabel; // @synthesize topTitleLabel=_topTitleLabel;
@property(retain, nonatomic) ModelMainViewItem *item; // @synthesize item=_item;
@property(nonatomic) __weak UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)changeNightTheme;
- (void)topTieleButtonFire:(id)arg1;
- (void)actionFire:(id)arg1;
- (void)refreshData;
- (id)parseData:(id)arg1;
- (void)writeToLocalFile:(id)arg1;
- (void)loadLocalInfo;
- (void)getInvestmentInfoReady:(id)arg1;
- (void)requestData;
- (void)willAppear;
- (void)showTopTitleMoreButton:(id)arg1;
- (void)setModelItem:(id)arg1;
- (void)dealloc;
- (id)getSeperateViewOnView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) long long type;

@end

