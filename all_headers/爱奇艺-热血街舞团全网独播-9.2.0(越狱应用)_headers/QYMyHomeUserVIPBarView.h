//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "QYMyHomeVIPBarSingleViewDelegate-Protocol.h"

@class NSString, QYMyHomeVIPBarSingleView, QYMyHomeVIPStatusManager, UIScrollView;

@interface QYMyHomeUserVIPBarView : UIView <QYMyHomeVIPBarSingleViewDelegate>
{
    QYMyHomeVIPStatusManager *_statusManager;
    UIScrollView *_scrollView;
    UIView *_scrollContentView;
    QYMyHomeVIPBarSingleView *_vipView;
    QYMyHomeVIPBarSingleView *_tennisView;
}

@property(retain, nonatomic) QYMyHomeVIPBarSingleView *tennisView; // @synthesize tennisView=_tennisView;
@property(retain, nonatomic) QYMyHomeVIPBarSingleView *vipView; // @synthesize vipView=_vipView;
@property(retain, nonatomic) UIView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) QYMyHomeVIPStatusManager *statusManager; // @synthesize statusManager=_statusManager;
- (void).cxx_destruct;
- (id)getTennisVipData;
- (id)getVipData;
- (void)setupData;
- (void)VIPBarSingleView:(id)arg1 tap:(id)arg2;
- (void)VIPBarSingleView:(id)arg1 buttonClick:(id)arg2;
- (void)setVIPDesText:(id)arg1;
- (void)reloadData;
- (void)setupScrollView;
- (void)setupConstraints;
- (void)initSubviews;
- (void)setupSelf;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

