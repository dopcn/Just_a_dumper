//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UIScrollView;

@interface QXDatiYureView : UIView
{
    UIButton *_btnBegin;
    UILabel *_lblNextDay;
    UILabel *_lblNextTime;
    UILabel *_lblPreMoney;
    UILabel *_lblMoney;
    UIImageView *_imgUserIcon;
    UILabel *_lblPostMoney;
    UIImageView *_imgToolIcon;
    UILabel *_lblToolNum;
    UIButton *_btnUseReliveCode;
    UIButton *_btnShare;
    UIButton *_btnLogin;
    UIScrollView *_scrollView;
    UIImageView *_imgBg;
    NSLayoutConstraint *_contentHight;
    UIButton *_btnMyMoney;
    NSLayoutConstraint *_topMariginConst;
}

@property(nonatomic) __weak NSLayoutConstraint *topMariginConst; // @synthesize topMariginConst=_topMariginConst;
@property(nonatomic) UIButton *btnMyMoney; // @synthesize btnMyMoney=_btnMyMoney;
@property(nonatomic) __weak NSLayoutConstraint *contentHight; // @synthesize contentHight=_contentHight;
@property(nonatomic) __weak UIImageView *imgBg; // @synthesize imgBg=_imgBg;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UIButton *btnLogin; // @synthesize btnLogin=_btnLogin;
@property(nonatomic) __weak UIButton *btnShare; // @synthesize btnShare=_btnShare;
@property(nonatomic) __weak UIButton *btnUseReliveCode; // @synthesize btnUseReliveCode=_btnUseReliveCode;
@property(nonatomic) __weak UILabel *lblToolNum; // @synthesize lblToolNum=_lblToolNum;
@property(nonatomic) __weak UIImageView *imgToolIcon; // @synthesize imgToolIcon=_imgToolIcon;
@property(nonatomic) __weak UILabel *lblPostMoney; // @synthesize lblPostMoney=_lblPostMoney;
@property(nonatomic) __weak UIImageView *imgUserIcon; // @synthesize imgUserIcon=_imgUserIcon;
@property(nonatomic) __weak UILabel *lblMoney; // @synthesize lblMoney=_lblMoney;
@property(nonatomic) __weak UILabel *lblPreMoney; // @synthesize lblPreMoney=_lblPreMoney;
@property(nonatomic) __weak UILabel *lblNextTime; // @synthesize lblNextTime=_lblNextTime;
@property(nonatomic) __weak UILabel *lblNextDay; // @synthesize lblNextDay=_lblNextDay;
@property(nonatomic) __weak UIButton *btnBegin; // @synthesize btnBegin=_btnBegin;
- (void).cxx_destruct;
- (void)qxUpdateViewContent;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)viewDataModel;

@end

