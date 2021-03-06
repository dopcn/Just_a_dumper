//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NewBaseCardCell.h"

#import "ConstellationDrawViewDelegate-Protocol.h"
#import "MCDefaultViewDelegate-Protocol.h"
#import "constellationChooseDelegate-Protocol.h"

@class MCDefaultView, NSArray, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView, YLchooseConstellationView;
@protocol ConstellationCellDelegate;

@interface ConstellationCell : NewBaseCardCell <MCDefaultViewDelegate, constellationChooseDelegate, ConstellationDrawViewDelegate>
{
    _Bool _pickerIsShow;
    id <ConstellationCellDelegate> _delegate;
    UILabel *_nameLabel;
    UIImageView *_constellationImg;
    UILabel *_luckyColor;
    UILabel *_luckyNumber;
    UILabel *_contentLabel;
    UILabel *_pairConstellation;
    double _cellHeight;
    UIView *_contentContainerView;
    UILabel *_dateLabel;
    UILabel *_comLucyTitle;
    YLchooseConstellationView *_pickerView;
    UIView *_line;
    NSLayoutConstraint *_lineHeight;
    UIView *_activityView;
    UIActivityIndicatorView *_activity;
    MCDefaultView *_refreshByHand;
    UILabel *_viewMoreLabel;
    NSArray *_barTitles;
    UIImageView *_moreImageView;
    UIButton *_moreButton;
    UIImageView *_arrowImageView;
}

+ (void)enterConstellationDetailPage;
+ (double)getCellHeightWithData:(id)arg1;
@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak UIImageView *moreImageView; // @synthesize moreImageView=_moreImageView;
@property(copy, nonatomic) NSArray *barTitles; // @synthesize barTitles=_barTitles;
@property(nonatomic) __weak UILabel *viewMoreLabel; // @synthesize viewMoreLabel=_viewMoreLabel;
@property(nonatomic) __weak MCDefaultView *refreshByHand; // @synthesize refreshByHand=_refreshByHand;
@property(nonatomic) __weak UIActivityIndicatorView *activity; // @synthesize activity=_activity;
@property(nonatomic) __weak UIView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) __weak NSLayoutConstraint *lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) __weak UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) YLchooseConstellationView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) __weak UILabel *comLucyTitle; // @synthesize comLucyTitle=_comLucyTitle;
@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool pickerIsShow; // @synthesize pickerIsShow=_pickerIsShow;
@property(nonatomic) __weak UILabel *pairConstellation; // @synthesize pairConstellation=_pairConstellation;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *luckyNumber; // @synthesize luckyNumber=_luckyNumber;
@property(nonatomic) __weak UILabel *luckyColor; // @synthesize luckyColor=_luckyColor;
@property(nonatomic) __weak UIImageView *constellationImg; // @synthesize constellationImg=_constellationImg;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak id <ConstellationCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelChooseConstellation;
- (void)areadyChooseConstellation:(long long)arg1;
- (void)constellationDrawViewClickContent;
- (void)constellationDrawView:(id)arg1 didClickTabItem:(id)arg2 index:(long long)arg3;
- (void)constellationDrawViewInfoDicNoContent;
- (void)constellationDrawViewClickBottom:(id)arg1;
- (void)constellationDrawViewClickTop;
- (void)userinfoUpdateNotification:(id)arg1;
- (void)freshPushedCardInfo;
- (void)resetData:(id)arg1;
- (void)defautViewByTouch:(id)arg1;
- (void)getConstellationData;
- (void)resetMoreViewStatus;
- (id)getAttributedWith:(id)arg1;
- (void)fillCellwithDic:(id)arg1;
- (void)notificationFillCell;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)constellationChangeNotifocation:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

