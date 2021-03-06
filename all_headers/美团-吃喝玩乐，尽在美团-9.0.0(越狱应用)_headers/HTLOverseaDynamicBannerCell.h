//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTLHomePageBaseModuleCell.h"

@class HTKAdBannerView, NSString, UIView;

@interface HTLOverseaDynamicBannerCell : HTLHomePageBaseModuleCell
{
    HTKAdBannerView *_headerView;
    long long _posId;
    NSString *_defaultBackImageStr;
    CDUnknownBlockType _clickBlock;
    CDUnknownBlockType _showBlock;
    UIView *_hotelPlaceHolderView;
}

+ (id)cellReuseId:(id)arg1;
+ (double)cellHeight:(id)arg1;
@property(copy, nonatomic) UIView *hotelPlaceHolderView; // @synthesize hotelPlaceHolderView=_hotelPlaceHolderView;
@property(copy, nonatomic) CDUnknownBlockType showBlock; // @synthesize showBlock=_showBlock;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(copy, nonatomic) NSString *defaultBackImageStr; // @synthesize defaultBackImageStr=_defaultBackImageStr;
@property(nonatomic) long long posId; // @synthesize posId=_posId;
@property(retain, nonatomic) HTKAdBannerView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setData:(id)arg1;
- (void)setupPlaceHolderView:(id)arg1 frame:(struct CGRect)arg2;
- (void)defineConstraints;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 posId:(long long)arg3 defaultBackImageStr:(id)arg4 clickBlock:(CDUnknownBlockType)arg5 showBlock:(CDUnknownBlockType)arg6;

@end

