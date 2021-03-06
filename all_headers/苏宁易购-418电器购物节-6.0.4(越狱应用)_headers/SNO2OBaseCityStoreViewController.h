//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNO2OViewController.h"

@class SNO2OArriveStoreEntranceRequest, SNO2OEntranceStoreChooseView, UIImageView;

@interface SNO2OBaseCityStoreViewController : SNO2OViewController
{
    _Bool _bigSalesAdvertisementViewShow;
    _Bool _isShowBtn;
    UIImageView *_entranceStoreFloatView;
    double _entranceStoreFloatViewFirstX;
    double _entranceStoreFloatViewFirstY;
    SNO2OEntranceStoreChooseView *_entranceStoreChooseView;
    SNO2OArriveStoreEntranceRequest *_arriveStoreEntranceRequest;
}

@property(retain, nonatomic) SNO2OArriveStoreEntranceRequest *arriveStoreEntranceRequest; // @synthesize arriveStoreEntranceRequest=_arriveStoreEntranceRequest;
@property(retain, nonatomic) SNO2OEntranceStoreChooseView *entranceStoreChooseView; // @synthesize entranceStoreChooseView=_entranceStoreChooseView;
@property(nonatomic) double entranceStoreFloatViewFirstY; // @synthesize entranceStoreFloatViewFirstY=_entranceStoreFloatViewFirstY;
@property(nonatomic) double entranceStoreFloatViewFirstX; // @synthesize entranceStoreFloatViewFirstX=_entranceStoreFloatViewFirstX;
@property(retain, nonatomic) UIImageView *entranceStoreFloatView; // @synthesize entranceStoreFloatView=_entranceStoreFloatView;
@property(nonatomic) _Bool isShowBtn; // @synthesize isShowBtn=_isShowBtn;
@property(nonatomic) _Bool bigSalesAdvertisementViewShow; // @synthesize bigSalesAdvertisementViewShow=_bigSalesAdvertisementViewShow;
- (void).cxx_destruct;
- (void)entranceStoreFloatViewPanGestureHandle:(id)arg1;
- (void)getEntranceStoreDataWithLesCityID:(id)arg1 latitude:(id)arg2 longitude:(id)arg3;
- (void)entranceStoreFloatViewTap:(id)arg1;
- (void)switchABPageWithLesCityID:(id)arg1;
- (id)init;
- (void)dealloc;

@end

