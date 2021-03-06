//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OSSShopInfoPoseidonBaseModule.h"

@class OSSPlayingShopInfoCommonHeaderCell;

@interface OSSPlayingShopInfoPoseidonModule : OSSShopInfoPoseidonBaseModule
{
    _Bool _isTicketUnfold;
    _Bool _isCouponUnfold;
    _Bool _isOneDayUnfold;
    _Bool _isReservationUnfold;
    OSSPlayingShopInfoCommonHeaderCell *_titleCell;
}

@property(nonatomic) _Bool isReservationUnfold; // @synthesize isReservationUnfold=_isReservationUnfold;
@property(nonatomic) _Bool isOneDayUnfold; // @synthesize isOneDayUnfold=_isOneDayUnfold;
@property(nonatomic) _Bool isCouponUnfold; // @synthesize isCouponUnfold=_isCouponUnfold;
@property(nonatomic) _Bool isTicketUnfold; // @synthesize isTicketUnfold=_isTicketUnfold;
@property(retain, nonatomic) OSSPlayingShopInfoCommonHeaderCell *titleCell; // @synthesize titleCell=_titleCell;
- (void).cxx_destruct;
- (id)gc_mge_info;
- (_Bool)needAutoModuleView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

@end

