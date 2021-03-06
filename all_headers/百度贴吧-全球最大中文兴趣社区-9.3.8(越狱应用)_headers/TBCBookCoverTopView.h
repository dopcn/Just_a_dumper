//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IDPCache, NSLayoutConstraint, TBCBookCoverItem, TBCButton, TBCImageView, UIButton, UIImageView, UILabel;
@protocol TBCForumBookCoverTopDelegate;

@interface TBCBookCoverTopView : UIView
{
    _Bool _isFollow;
    _Bool _isExpand;
    id <TBCForumBookCoverTopDelegate> _delegate;
    IDPCache *_cartoonCookieCache;
    TBCImageView *_bookCover;
    UILabel *_bookNameLabel;
    UILabel *_categoryLabel;
    NSLayoutConstraint *_categoryTopConstraint;
    UILabel *_authorLabel;
    NSLayoutConstraint *_authorTopConstraint;
    UILabel *_updateLabel;
    NSLayoutConstraint *_updateTopConstraint;
    UIButton *_vipHintButton;
    UIButton *_followBtn;
    TBCButton *_freeReadBtn;
    TBCButton *_readBtn;
    TBCButton *_offlineBtn;
    UILabel *_introduceView;
    TBCBookCoverItem *_item;
    UIButton *_expandButton;
    UIView *_backgroundMaskView;
    UIImageView *_backgroundView;
    double _expendHeight;
    NSLayoutConstraint *_labelConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *labelConstraint; // @synthesize labelConstraint=_labelConstraint;
@property(nonatomic) double expendHeight; // @synthesize expendHeight=_expendHeight;
@property(nonatomic) _Bool isExpand; // @synthesize isExpand=_isExpand;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(retain, nonatomic) UIButton *expandButton; // @synthesize expandButton=_expandButton;
@property(retain, nonatomic) TBCBookCoverItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UILabel *introduceView; // @synthesize introduceView=_introduceView;
@property(retain, nonatomic) TBCButton *offlineBtn; // @synthesize offlineBtn=_offlineBtn;
@property(retain, nonatomic) TBCButton *readBtn; // @synthesize readBtn=_readBtn;
@property(retain, nonatomic) TBCButton *freeReadBtn; // @synthesize freeReadBtn=_freeReadBtn;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UIButton *vipHintButton; // @synthesize vipHintButton=_vipHintButton;
@property(retain, nonatomic) NSLayoutConstraint *updateTopConstraint; // @synthesize updateTopConstraint=_updateTopConstraint;
@property(retain, nonatomic) UILabel *updateLabel; // @synthesize updateLabel=_updateLabel;
@property(retain, nonatomic) NSLayoutConstraint *authorTopConstraint; // @synthesize authorTopConstraint=_authorTopConstraint;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) NSLayoutConstraint *categoryTopConstraint; // @synthesize categoryTopConstraint=_categoryTopConstraint;
@property(retain, nonatomic) UILabel *categoryLabel; // @synthesize categoryLabel=_categoryLabel;
@property(retain, nonatomic) UILabel *bookNameLabel; // @synthesize bookNameLabel=_bookNameLabel;
@property(retain, nonatomic) TBCImageView *bookCover; // @synthesize bookCover=_bookCover;
@property(retain, nonatomic) IDPCache *cartoonCookieCache; // @synthesize cartoonCookieCache=_cartoonCookieCache;
@property(nonatomic) _Bool isFollow; // @synthesize isFollow=_isFollow;
@property(nonatomic) __weak id <TBCForumBookCoverTopDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)saveFirstFlagToCache:(id)arg1;
- (_Bool)isFirstInThisBook:(id)arg1;
- (void)setupCartoonCookieCache;
- (id)getCartoonCookieCacheNameSpace;
- (void)expandBtnClicked;
- (void)offlineBtnClicked;
- (void)updateFollowBtn:(_Bool)arg1;
- (void)followBtnClicked;
- (void)readBtnClicked;
- (void)vipBtnClicked;
- (void)bindEvent;
- (double)caculateHeight;
- (void)updateReadButton;
- (void)resetSkin;
- (void)bindData:(id)arg1;
- (void)setupUI;
- (void)addObserver;
- (void)dealloc;
- (id)init;

@end

