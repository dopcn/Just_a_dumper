//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVShopinfoBottomModule.h"

@class NVModelBaseBookingInfo;

@interface EasyLifeShopInfoToolbarModule : NVShopinfoBottomModule
{
    _Bool _praiseStatus;
    NVModelBaseBookingInfo *_bookInfo;
    double _btnWidth;
}

@property(nonatomic) _Bool praiseStatus; // @synthesize praiseStatus=_praiseStatus;
@property(nonatomic) double btnWidth; // @synthesize btnWidth=_btnWidth;
@property(retain, nonatomic) NVModelBaseBookingInfo *bookInfo; // @synthesize bookInfo=_bookInfo;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)callPhone:(id)arg1;
- (void)btnBookingClicked:(id)arg1;
- (id)makeupReviewItem;
- (id)makeupPraiseItem;
- (id)makeupBookingItem;
- (void)toolsInit;
- (_Bool)shouldShow;
- (void)fetchBookInfo;
- (void)setupModule;

@end

