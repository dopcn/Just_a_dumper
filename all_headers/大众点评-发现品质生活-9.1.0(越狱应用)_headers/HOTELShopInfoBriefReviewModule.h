//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVShopInfoBaseModule.h"

#import "HOTELbriefReviewTagsCellTableViewCellDelegate-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HOTELShopInfoReviewTitleCell, HOTELShopInfoTitleCell, HOTELbriefReviewTagsCellTableViewCell, NSArray, NSNumber, NSString, NVActivityIndicator, NVModelBaseReviewList, NVTableView, UIButton, UIImageView, UILabel, UITableViewCell, UIView;

@interface HOTELShopInfoBriefReviewModule : NVShopInfoBaseModule <UITableViewDelegate, HOTELbriefReviewTagsCellTableViewCellDelegate>
{
    UITableViewCell *_backgroundView;
    NVTableView *_hotelTableView;
    HOTELbriefReviewTagsCellTableViewCell *_reviewContentCell;
    HOTELShopInfoTitleCell *_titleCell;
    HOTELShopInfoReviewTitleCell *_overseaTitleCell;
    UITableViewCell *_separatorLineCell;
    UIView *_loading;
    UIButton *_retryButton;
    UILabel *_loadingText;
    UILabel *_failText;
    NVActivityIndicator *_activityIndicator;
    UIImageView *_retryImg;
    NSArray *_shortReviews;
    NVModelBaseReviewList *_hotelReview;
    NSArray *_listHotelBookInfo;
    NSNumber *_shouldShowHotelReviewDetailInfo;
    NSNumber *_hotelReviewCount;
    NSArray *_reviewAbstractList;
}

@property(retain, nonatomic) NSArray *reviewAbstractList; // @synthesize reviewAbstractList=_reviewAbstractList;
@property(retain, nonatomic) NSNumber *hotelReviewCount; // @synthesize hotelReviewCount=_hotelReviewCount;
@property(retain, nonatomic) NSNumber *shouldShowHotelReviewDetailInfo; // @synthesize shouldShowHotelReviewDetailInfo=_shouldShowHotelReviewDetailInfo;
@property(retain, nonatomic) NSArray *listHotelBookInfo; // @synthesize listHotelBookInfo=_listHotelBookInfo;
@property(retain, nonatomic) NVModelBaseReviewList *hotelReview; // @synthesize hotelReview=_hotelReview;
@property(retain, nonatomic) NSArray *shortReviews; // @synthesize shortReviews=_shortReviews;
@property(retain, nonatomic) UIImageView *retryImg; // @synthesize retryImg=_retryImg;
@property(retain, nonatomic) NVActivityIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *failText; // @synthesize failText=_failText;
@property(retain, nonatomic) UILabel *loadingText; // @synthesize loadingText=_loadingText;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UIView *loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UITableViewCell *separatorLineCell; // @synthesize separatorLineCell=_separatorLineCell;
@property(retain, nonatomic) HOTELShopInfoReviewTitleCell *overseaTitleCell; // @synthesize overseaTitleCell=_overseaTitleCell;
@property(retain, nonatomic) HOTELShopInfoTitleCell *titleCell; // @synthesize titleCell=_titleCell;
@property(retain, nonatomic) HOTELbriefReviewTagsCellTableViewCell *reviewContentCell; // @synthesize reviewContentCell=_reviewContentCell;
@property(retain, nonatomic) NVTableView *hotelTableView; // @synthesize hotelTableView=_hotelTableView;
@property(retain, nonatomic) UITableViewCell *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)isOverseaCity;
- (id)bookingOTADetail;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateContent;
- (void)getHotelShortReviewData:(id)arg1;
- (void)reloadBrifReviewData;
- (id)selectedObjForName:(id)arg1;
- (void)didSelectedBriefReviewTagByName:(id)arg1;
- (id)otaScores;
- (id)scoresText;
- (void)updateReviewTitleCell;
- (void)reviewLoadstatusViewSetup;
- (void)initReviewView;
- (_Bool)shouldShow;
- (void)moduleWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)shopDidUpdate:(id)arg1;
- (void)setLoadSuccess;
- (void)setLoadingStatus;
- (void)setError;
- (void)handleReviewAbstractList:(id)arg1;
- (void)queryReview;
- (void)setupModule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

