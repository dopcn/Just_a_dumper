//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PayOrderDetailPtc-Protocol.h"

@class NSString, UIImageView, UIScrollView;

@interface PayOrderDetailPtcData : UIViewController <PayOrderDetailPtc>
{
    float heightOfShowHeader_;
    UIScrollView *tableViewInfo;
    UIImageView *backImageView;
}

- (void).cxx_destruct;
- (void)setImageAfterChangePriceWithViewURL:(id)arg1;
- (void)setWithOrderDetailviewurl:(id)arg1 andheightofshowheader:(id)arg2;
- (double)heightOfShowHeader;
- (void)viewDidLoad;
- (id)backImageView;
- (id)tableViewInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

